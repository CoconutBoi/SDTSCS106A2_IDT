/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *employeeSection;
    QPushButton *viewDefectsButton;
    QLabel *dashboardLabel_2;
    QPushButton *logoutButton_2;
    QGroupBox *defectManagementSection;
    QLineEdit *defectTitleInput;
    QTextEdit *defectDescriptionInput;
    QComboBox *priorityComboBox;
    QPushButton *addDefectButton;
    QPushButton *viewDefectsButton_2;
    QPushButton *logoutButton_3;
    QGroupBox *loginSection;
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QPushButton *loginButton;
    QLabel *loginErrorLabel;
    QLabel *loginLabel;
    QGroupBox *addUserSection;
    QComboBox *roleComboBox;
    QLineEdit *newPasswordInput;
    QLineEdit *newUsernameInput;
    QPushButton *addUserConfirmButton;
    QPushButton *backToAdminButton;
    QGroupBox *adminSection;
    QPushButton *addUserButton;
    QPushButton *manageDefectsButton;
    QPushButton *logoutButton;
    QLabel *dashboardLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1231, 817);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        employeeSection = new QGroupBox(centralwidget);
        employeeSection->setObjectName("employeeSection");
        employeeSection->setGeometry(QRect(560, 10, 241, 191));
        viewDefectsButton = new QPushButton(employeeSection);
        viewDefectsButton->setObjectName("viewDefectsButton");
        viewDefectsButton->setGeometry(QRect(80, 110, 80, 24));
        dashboardLabel_2 = new QLabel(employeeSection);
        dashboardLabel_2->setObjectName("dashboardLabel_2");
        dashboardLabel_2->setGeometry(QRect(90, 60, 61, 16));
        logoutButton_2 = new QPushButton(employeeSection);
        logoutButton_2->setObjectName("logoutButton_2");
        logoutButton_2->setGeometry(QRect(80, 140, 80, 24));
        defectManagementSection = new QGroupBox(centralwidget);
        defectManagementSection->setObjectName("defectManagementSection");
        defectManagementSection->setGeometry(QRect(0, 200, 801, 561));
        defectTitleInput = new QLineEdit(defectManagementSection);
        defectTitleInput->setObjectName("defectTitleInput");
        defectTitleInput->setGeometry(QRect(10, 40, 113, 24));
        defectDescriptionInput = new QTextEdit(defectManagementSection);
        defectDescriptionInput->setObjectName("defectDescriptionInput");
        defectDescriptionInput->setGeometry(QRect(10, 70, 781, 431));
        priorityComboBox = new QComboBox(defectManagementSection);
        priorityComboBox->addItem(QString());
        priorityComboBox->addItem(QString());
        priorityComboBox->addItem(QString());
        priorityComboBox->setObjectName("priorityComboBox");
        priorityComboBox->setGeometry(QRect(130, 40, 72, 24));
        addDefectButton = new QPushButton(defectManagementSection);
        addDefectButton->setObjectName("addDefectButton");
        addDefectButton->setGeometry(QRect(10, 520, 80, 24));
        viewDefectsButton_2 = new QPushButton(defectManagementSection);
        viewDefectsButton_2->setObjectName("viewDefectsButton_2");
        viewDefectsButton_2->setGeometry(QRect(100, 520, 80, 24));
        logoutButton_3 = new QPushButton(defectManagementSection);
        logoutButton_3->setObjectName("logoutButton_3");
        logoutButton_3->setGeometry(QRect(710, 520, 80, 24));
        loginSection = new QGroupBox(centralwidget);
        loginSection->setObjectName("loginSection");
        loginSection->setGeometry(QRect(0, 10, 261, 191));
        usernameInput = new QLineEdit(loginSection);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setGeometry(QRect(10, 80, 113, 24));
        passwordInput = new QLineEdit(loginSection);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(10, 120, 113, 24));
        passwordInput->setEchoMode(QLineEdit::EchoMode::Password);
        loginButton = new QPushButton(loginSection);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(130, 100, 80, 24));
        loginErrorLabel = new QLabel(loginSection);
        loginErrorLabel->setObjectName("loginErrorLabel");
        loginErrorLabel->setGeometry(QRect(10, 60, 241, 16));
        loginLabel = new QLabel(loginSection);
        loginLabel->setObjectName("loginLabel");
        loginLabel->setGeometry(QRect(10, 40, 49, 16));
        addUserSection = new QGroupBox(centralwidget);
        addUserSection->setObjectName("addUserSection");
        addUserSection->setGeometry(QRect(810, 10, 411, 191));
        roleComboBox = new QComboBox(addUserSection);
        roleComboBox->addItem(QString());
        roleComboBox->addItem(QString());
        roleComboBox->setObjectName("roleComboBox");
        roleComboBox->setGeometry(QRect(20, 130, 111, 24));
        newPasswordInput = new QLineEdit(addUserSection);
        newPasswordInput->setObjectName("newPasswordInput");
        newPasswordInput->setGeometry(QRect(20, 90, 113, 24));
        newPasswordInput->setEchoMode(QLineEdit::EchoMode::Password);
        newUsernameInput = new QLineEdit(addUserSection);
        newUsernameInput->setObjectName("newUsernameInput");
        newUsernameInput->setGeometry(QRect(20, 50, 113, 24));
        addUserConfirmButton = new QPushButton(addUserSection);
        addUserConfirmButton->setObjectName("addUserConfirmButton");
        addUserConfirmButton->setGeometry(QRect(170, 60, 80, 24));
        backToAdminButton = new QPushButton(addUserSection);
        backToAdminButton->setObjectName("backToAdminButton");
        backToAdminButton->setGeometry(QRect(170, 110, 80, 24));
        adminSection = new QGroupBox(centralwidget);
        adminSection->setObjectName("adminSection");
        adminSection->setGeometry(QRect(280, 10, 261, 191));
        addUserButton = new QPushButton(adminSection);
        addUserButton->setObjectName("addUserButton");
        addUserButton->setGeometry(QRect(90, 90, 80, 24));
        manageDefectsButton = new QPushButton(adminSection);
        manageDefectsButton->setObjectName("manageDefectsButton");
        manageDefectsButton->setGeometry(QRect(90, 120, 80, 24));
        logoutButton = new QPushButton(adminSection);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(90, 150, 80, 24));
        dashboardLabel = new QLabel(adminSection);
        dashboardLabel->setObjectName("dashboardLabel");
        dashboardLabel->setGeometry(QRect(100, 50, 61, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1231, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        employeeSection->setTitle(QCoreApplication::translate("MainWindow", "Employee", nullptr));
        viewDefectsButton->setText(QCoreApplication::translate("MainWindow", "Defects", nullptr));
        dashboardLabel_2->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        logoutButton_2->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        defectManagementSection->setTitle(QCoreApplication::translate("MainWindow", "Defects", nullptr));
        defectTitleInput->setText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        priorityComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Low", nullptr));
        priorityComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Medium", nullptr));
        priorityComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "High", nullptr));

        addDefectButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        viewDefectsButton_2->setText(QCoreApplication::translate("MainWindow", "View", nullptr));
        logoutButton_3->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        loginSection->setTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        usernameInput->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        passwordInput->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        loginErrorLabel->setText(QString());
        loginLabel->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        addUserSection->setTitle(QCoreApplication::translate("MainWindow", "Add User", nullptr));
        roleComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Employee", nullptr));
        roleComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Admin", nullptr));

        newPasswordInput->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        newUsernameInput->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        addUserConfirmButton->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        backToAdminButton->setText(QCoreApplication::translate("MainWindow", "Done", nullptr));
        adminSection->setTitle(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        addUserButton->setText(QCoreApplication::translate("MainWindow", "Add User", nullptr));
        manageDefectsButton->setText(QCoreApplication::translate("MainWindow", "Defects", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        dashboardLabel->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
