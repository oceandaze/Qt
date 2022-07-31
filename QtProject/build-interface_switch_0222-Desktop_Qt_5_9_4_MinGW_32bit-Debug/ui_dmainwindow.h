/********************************************************************************
** Form generated from reading UI file 'dmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DMAINWINDOW_H
#define UI_DMAINWINDOW_H

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

class Ui_DMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DMainWindow)
    {
        if (DMainWindow->objectName().isEmpty())
            DMainWindow->setObjectName(QStringLiteral("DMainWindow"));
        DMainWindow->resize(800, 600);
        centralwidget = new QWidget(DMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 130, 75, 23));
        DMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        DMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DMainWindow->setStatusBar(statusbar);

        retranslateUi(DMainWindow);

        QMetaObject::connectSlotsByName(DMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DMainWindow)
    {
        DMainWindow->setWindowTitle(QApplication::translate("DMainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("DMainWindow", "D", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DMainWindow: public Ui_DMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DMAINWINDOW_H
