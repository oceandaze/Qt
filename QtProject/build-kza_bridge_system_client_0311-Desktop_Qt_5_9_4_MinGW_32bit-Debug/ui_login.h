/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_password;
    QCheckBox *checkBox_remember;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_login;
    QPushButton *pushButton_register;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(307, 305);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        gridLayout->addWidget(lineEdit_name, 0, 0, 1, 2);

        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_password, 1, 0, 1, 2);

        checkBox_remember = new QCheckBox(centralwidget);
        checkBox_remember->setObjectName(QStringLiteral("checkBox_remember"));

        gridLayout->addWidget(checkBox_remember, 2, 0, 1, 1);

        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 2, 1, 1, 1);

        pushButton_login = new QPushButton(centralwidget);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));

        gridLayout->addWidget(pushButton_login, 3, 0, 1, 2);

        pushButton_register = new QPushButton(centralwidget);
        pushButton_register->setObjectName(QStringLiteral("pushButton_register"));
        pushButton_register->setFlat(true);

        gridLayout->addWidget(pushButton_register, 4, 0, 1, 2);

        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 307, 23));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "MainWindow", Q_NULLPTR));
        lineEdit_name->setPlaceholderText(QApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215/\346\211\213\346\234\272\345\217\267/\351\202\256\347\256\261", Q_NULLPTR));
        lineEdit_password->setPlaceholderText(QApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        checkBox_remember->setText(QApplication::translate("Login", "\350\256\260\344\275\217\345\257\206\347\240\201", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("Login", "\350\207\252\345\212\250\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_login->setText(QApplication::translate("Login", "\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_register->setText(QApplication::translate("Login", "\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
