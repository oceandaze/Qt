/********************************************************************************
** Form generated from reading UI file 'bmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BMAINWINDOW_H
#define UI_BMAINWINDOW_H

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

class Ui_BMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BMainWindow)
    {
        if (BMainWindow->objectName().isEmpty())
            BMainWindow->setObjectName(QStringLiteral("BMainWindow"));
        BMainWindow->resize(800, 600);
        centralwidget = new QWidget(BMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 130, 75, 23));
        BMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        BMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(BMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        BMainWindow->setStatusBar(statusbar);

        retranslateUi(BMainWindow);

        QMetaObject::connectSlotsByName(BMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BMainWindow)
    {
        BMainWindow->setWindowTitle(QApplication::translate("BMainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("BMainWindow", "B", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BMainWindow: public Ui_BMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BMAINWINDOW_H
