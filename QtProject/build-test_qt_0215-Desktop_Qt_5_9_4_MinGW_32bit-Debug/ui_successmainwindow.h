/********************************************************************************
** Form generated from reading UI file 'successmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUCCESSMAINWINDOW_H
#define UI_SUCCESSMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SuccessMainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SuccessMainWindow)
    {
        if (SuccessMainWindow->objectName().isEmpty())
            SuccessMainWindow->setObjectName(QStringLiteral("SuccessMainWindow"));
        SuccessMainWindow->resize(374, 243);
        centralwidget = new QWidget(SuccessMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 100, 151, 61));
        SuccessMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SuccessMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 374, 23));
        SuccessMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SuccessMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SuccessMainWindow->setStatusBar(statusbar);

        retranslateUi(SuccessMainWindow);

        QMetaObject::connectSlotsByName(SuccessMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SuccessMainWindow)
    {
        SuccessMainWindow->setWindowTitle(QApplication::translate("SuccessMainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("SuccessMainWindow", "\346\263\250\345\206\214\346\210\220\345\212\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SuccessMainWindow: public Ui_SuccessMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCCESSMAINWINDOW_H
