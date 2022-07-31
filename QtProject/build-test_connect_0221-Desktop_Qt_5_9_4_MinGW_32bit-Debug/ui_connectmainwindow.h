/********************************************************************************
** Form generated from reading UI file 'connectmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTMAINWINDOW_H
#define UI_CONNECTMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectMainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ConnectMainWindow)
    {
        if (ConnectMainWindow->objectName().isEmpty())
            ConnectMainWindow->setObjectName(QStringLiteral("ConnectMainWindow"));
        ConnectMainWindow->resize(400, 300);
        centralWidget = new QWidget(ConnectMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 80, 75, 23));
        ConnectMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ConnectMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        ConnectMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ConnectMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ConnectMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ConnectMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ConnectMainWindow->setStatusBar(statusBar);

        retranslateUi(ConnectMainWindow);

        QMetaObject::connectSlotsByName(ConnectMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ConnectMainWindow)
    {
        ConnectMainWindow->setWindowTitle(QApplication::translate("ConnectMainWindow", "ConnectMainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ConnectMainWindow", "A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConnectMainWindow: public Ui_ConnectMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTMAINWINDOW_H
