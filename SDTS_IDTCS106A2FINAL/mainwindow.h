#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QString>

// Structure to store user data
struct User {
    QString username;
    QString password;
    QString role; // "Admin" or "Employee"
};

// Structure to store defect data
struct Defect {
    int id;
    QString title;
    QString description;
    QString priority; // "Low", "Medium", "High"
    QString status;   // "Pending", "In Process", "Completed"
    QString assignedTo;
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void handleLogin();          // Handles login functionality
    void showAdminDashboard();   // Displays Admin dashboard
    void showEmployeeDashboard();// Displays Employee dashboard
    void showDefectManagement(); // Displays Defect Management section
    void logout();               // Logs out the user
    void showAddUserForm();      // Shows the Add User form
    void addUser();              // Handles adding a new user
    void returnToAdminDashboard();// Returns to the Admin dashboard
    void addDefect();            // Handles adding a defect
    void viewDefects();          // Displays defects in a popup

private:
    Ui::MainWindow *ui;
    QVector<User> users;         // Stores all user data
    QVector<Defect> defects;     // Stores all defect data
    User *loggedInUser;          // Tracks the currently logged-in user
    void loadUsers();            // Loads user data from file
    void saveUsers();            // Saves user data to file
};

#endif // MAINWINDOW_H
