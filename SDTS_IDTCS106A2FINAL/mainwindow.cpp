#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

// Constructor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), loggedInUser(nullptr) {
    ui->setupUi(this);

    // Load users and initialize visibility
    loadUsers();
    ui->loginSection->setVisible(true);
    ui->adminSection->setVisible(false);
    ui->employeeSection->setVisible(false);
    ui->addUserSection->setVisible(false);
    ui->defectManagementSection->setVisible(false);

    // Connect buttons to slots
    connect(ui->loginButton, &QPushButton::clicked, this, &MainWindow::handleLogin);
    connect(ui->logoutButton, &QPushButton::clicked, this, &MainWindow::logout);
    connect(ui->logoutButton_2, &QPushButton::clicked, this, &MainWindow::logout);
    connect(ui->logoutButton_3, &QPushButton::clicked, this, &MainWindow::logout);
    connect(ui->addUserButton, &QPushButton::clicked, this, &MainWindow::showAddUserForm);
    connect(ui->addUserConfirmButton, &QPushButton::clicked, this, &MainWindow::addUser);
    connect(ui->backToAdminButton, &QPushButton::clicked, this, &MainWindow::returnToAdminDashboard);
    connect(ui->addDefectButton, &QPushButton::clicked, this, &MainWindow::addDefect);
    connect(ui->viewDefectsButton, &QPushButton::clicked, this, &MainWindow::viewDefects);
    connect(ui->viewDefectsButton_2, &QPushButton::clicked, this, &MainWindow::viewDefects);
    connect(ui->manageDefectsButton, &QPushButton::clicked, this, &MainWindow::showDefectManagement);
}

// Destructor
MainWindow::~MainWindow() {
    delete ui;
}

// Load user data from a file
void MainWindow::loadUsers() {
    QFile file("users.txt");
    if (!file.exists()) {
        QMessageBox::warning(this, "Error", "The users.txt file does not exist.");
        return;
    }
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not open users.txt: " + file.errorString());
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");
        if (fields.size() == 3) {
            users.append({fields[0], fields[1], fields[2]});
        }
    }
    file.close();
}

// Save user data to a file
void MainWindow::saveUsers() {
    QFile file("users.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not save users.txt: " + file.errorString());
        return;
    }

    QTextStream out(&file);
    for (const User &user : users) {
        out << user.username << "," << user.password << "," << user.role << "\n";
    }
    file.close();
}

// Handle login
void MainWindow::handleLogin() {
    QString username = ui->usernameInput->text();
    QString password = ui->passwordInput->text();

    for (User &user : users) {
        if (user.username == username && user.password == password) {
            loggedInUser = &user;
            if (user.role == "Admin") {
                showAdminDashboard();
            } else {
                showEmployeeDashboard();
            }
            return;
        }
    }
    ui->loginErrorLabel->setText("Invalid username or password.");
}

// Show Admin dashboard
void MainWindow::showAdminDashboard() {
    ui->loginSection->setVisible(false);
    ui->adminSection->setVisible(true);
    ui->employeeSection->setVisible(false);
    ui->addUserSection->setVisible(false);
    ui->defectManagementSection->setVisible(false);
}

// Show Employee dashboard
void MainWindow::showEmployeeDashboard() {
    ui->loginSection->setVisible(false);
    ui->adminSection->setVisible(false);
    ui->employeeSection->setVisible(true);
    ui->addUserSection->setVisible(false);
    ui->defectManagementSection->setVisible(false);
}

// Show Defect Management section
void MainWindow::showDefectManagement() {
    ui->loginSection->setVisible(false);
    ui->adminSection->setVisible(false);
    ui->employeeSection->setVisible(false);
    ui->addUserSection->setVisible(false);
    ui->defectManagementSection->setVisible(true);
}

// Add a defect
void MainWindow::addDefect() {
    QString title = ui->defectTitleInput->text();
    QString description = ui->defectDescriptionInput->toPlainText();
    QString priority = ui->priorityComboBox->currentText();

    if (title.isEmpty() || description.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "All fields must be filled.");
        return;
    }

    int id = defects.size() + 1;
    defects.append({id, title, description, priority, "Pending", loggedInUser->username});

    QMessageBox::information(this, "Success", "Defect added successfully.");
    ui->defectTitleInput->clear();
    ui->defectDescriptionInput->clear();
    ui->priorityComboBox->setCurrentIndex(0);
}

// View defects
void MainWindow::viewDefects() {
    QString defectList = "ID | Title | Priority | Status | Assigned To\n";
    for (const Defect &defect : defects) {
        defectList += QString("%1 | %2 | %3 | %4 | %5\n")
        .arg(defect.id)
            .arg(defect.title)
            .arg(defect.priority)
            .arg(defect.status)
            .arg(defect.assignedTo);
    }
    QMessageBox::information(this, "Defects", defectList);
}

// Logout
void MainWindow::logout() {
    loggedInUser = nullptr;
    ui->loginSection->setVisible(true);
    ui->adminSection->setVisible(false);
    ui->employeeSection->setVisible(false);
    ui->addUserSection->setVisible(false);
    ui->defectManagementSection->setVisible(false);
}

// Show Add User form
void MainWindow::showAddUserForm() {
    ui->adminSection->setVisible(false);
    ui->addUserSection->setVisible(true);
}

// Add a new user
void MainWindow::addUser() {
    QString username = ui->newUsernameInput->text();
    QString password = ui->newPasswordInput->text();
    QString role = ui->roleComboBox->currentText();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "All fields must be filled.");
        return;
    }

    for (const User &user : users) {
        if (user.username == username) {
            QMessageBox::warning(this, "Input Error", "Username already exists.");
            return;
        }
    }

    users.append({username, password, role});
    saveUsers();

    QMessageBox::information(this, "Success", "User added successfully.");
    returnToAdminDashboard();
}

// Return to Admin dashboard
void MainWindow::returnToAdminDashboard() {
    ui->adminSection->setVisible(true);
    ui->addUserSection->setVisible(false);
}
