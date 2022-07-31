/********************************************************************************
** Form generated from reading UI file 'loginmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINMAINWINDOW_H
#define UI_LOGINMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginMainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_level;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEdit_begin;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit_end;
    QPushButton *pushButton_search;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginMainWindow)
    {
        if (LoginMainWindow->objectName().isEmpty())
            LoginMainWindow->setObjectName(QStringLiteral("LoginMainWindow"));
        LoginMainWindow->resize(800, 600);
        centralwidget = new QWidget(LoginMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox_level = new QComboBox(groupBox);
        comboBox_level->setObjectName(QStringLiteral("comboBox_level"));

        horizontalLayout->addWidget(comboBox_level);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        dateTimeEdit_begin = new QDateTimeEdit(groupBox);
        dateTimeEdit_begin->setObjectName(QStringLiteral("dateTimeEdit_begin"));
        dateTimeEdit_begin->setCalendarPopup(true);

        horizontalLayout->addWidget(dateTimeEdit_begin);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        dateTimeEdit_end = new QDateTimeEdit(groupBox);
        dateTimeEdit_end->setObjectName(QStringLiteral("dateTimeEdit_end"));
        dateTimeEdit_end->setCalendarPopup(true);

        horizontalLayout->addWidget(dateTimeEdit_end);

        pushButton_search = new QPushButton(groupBox);
        pushButton_search->setObjectName(QStringLiteral("pushButton_search"));

        horizontalLayout->addWidget(pushButton_search);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout_2->addWidget(tableView, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        LoginMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        LoginMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LoginMainWindow->setStatusBar(statusbar);

        retranslateUi(LoginMainWindow);

        QMetaObject::connectSlotsByName(LoginMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginMainWindow)
    {
        LoginMainWindow->setWindowTitle(QApplication::translate("LoginMainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("LoginMainWindow", "\346\237\245\350\257\242\346\235\241\344\273\266", Q_NULLPTR));
        label->setText(QApplication::translate("LoginMainWindow", "\347\272\247\345\210\253", Q_NULLPTR));
        comboBox_level->clear();
        comboBox_level->insertItems(0, QStringList()
         << QApplication::translate("LoginMainWindow", "All", Q_NULLPTR)
         << QApplication::translate("LoginMainWindow", "Info", Q_NULLPTR)
         << QApplication::translate("LoginMainWindow", "Warning", Q_NULLPTR)
         << QApplication::translate("LoginMainWindow", "Error", Q_NULLPTR)
         << QApplication::translate("LoginMainWindow", "Fatal", Q_NULLPTR)
         << QApplication::translate("LoginMainWindow", "Debug", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("LoginMainWindow", "\344\273\216", Q_NULLPTR));
        label_3->setText(QApplication::translate("LoginMainWindow", "\345\210\260", Q_NULLPTR));
        pushButton_search->setText(QApplication::translate("LoginMainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginMainWindow: public Ui_LoginMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINMAINWINDOW_H
