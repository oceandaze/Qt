/********************************************************************************
** Form generated from reading UI file 'mocmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOCMAINWINDOW_H
#define UI_MOCMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MOCMainWindow
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MOCMainWindow)
    {
        if (MOCMainWindow->objectName().isEmpty())
            MOCMainWindow->setObjectName(QStringLiteral("MOCMainWindow"));
        MOCMainWindow->resize(400, 300);
        menuBar = new QMenuBar(MOCMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        MOCMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MOCMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MOCMainWindow->addToolBar(mainToolBar);
        centralWidget = new QWidget(MOCMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MOCMainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MOCMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MOCMainWindow->setStatusBar(statusBar);

        retranslateUi(MOCMainWindow);

        QMetaObject::connectSlotsByName(MOCMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MOCMainWindow)
    {
        MOCMainWindow->setWindowTitle(QApplication::translate("MOCMainWindow", "MOCMainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MOCMainWindow: public Ui_MOCMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOCMAINWINDOW_H
