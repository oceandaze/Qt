/********************************************************************************
** Form generated from reading UI file 'propertymainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYMAINWINDOW_H
#define UI_PROPERTYMAINWINDOW_H

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

class Ui_PropertyMainWindow
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PropertyMainWindow)
    {
        if (PropertyMainWindow->objectName().isEmpty())
            PropertyMainWindow->setObjectName(QStringLiteral("PropertyMainWindow"));
        PropertyMainWindow->resize(400, 300);
        menuBar = new QMenuBar(PropertyMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        PropertyMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PropertyMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PropertyMainWindow->addToolBar(mainToolBar);
        centralWidget = new QWidget(PropertyMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        PropertyMainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(PropertyMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PropertyMainWindow->setStatusBar(statusBar);

        retranslateUi(PropertyMainWindow);

        QMetaObject::connectSlotsByName(PropertyMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PropertyMainWindow)
    {
        PropertyMainWindow->setWindowTitle(QApplication::translate("PropertyMainWindow", "PropertyMainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PropertyMainWindow: public Ui_PropertyMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYMAINWINDOW_H
