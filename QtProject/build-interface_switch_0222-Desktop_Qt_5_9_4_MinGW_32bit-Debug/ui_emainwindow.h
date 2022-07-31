/********************************************************************************
** Form generated from reading UI file 'emainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMAINWINDOW_H
#define UI_EMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EMainWindow)
    {
        if (EMainWindow->objectName().isEmpty())
            EMainWindow->setObjectName(QStringLiteral("EMainWindow"));
        EMainWindow->resize(800, 600);
        centralwidget = new QWidget(EMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 110, 75, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 170, 75, 23));
        EMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        EMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(EMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        EMainWindow->setStatusBar(statusbar);

        retranslateUi(EMainWindow);

        QMetaObject::connectSlotsByName(EMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EMainWindow)
    {
        EMainWindow->setWindowTitle(QApplication::translate("EMainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("EMainWindow", "E", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("EMainWindow", "show all", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EMainWindow: public Ui_EMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAINWINDOW_H
