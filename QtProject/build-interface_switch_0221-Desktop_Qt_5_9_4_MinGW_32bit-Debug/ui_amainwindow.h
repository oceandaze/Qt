/********************************************************************************
** Form generated from reading UI file 'amainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMAINWINDOW_H
#define UI_AMAINWINDOW_H

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

class Ui_AMainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AMainWindow)
    {
        if (AMainWindow->objectName().isEmpty())
            AMainWindow->setObjectName(QStringLiteral("AMainWindow"));
        AMainWindow->resize(400, 300);
        centralWidget = new QWidget(AMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 90, 75, 23));
        AMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        AMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AMainWindow->setStatusBar(statusBar);

        retranslateUi(AMainWindow);

        QMetaObject::connectSlotsByName(AMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AMainWindow)
    {
        AMainWindow->setWindowTitle(QApplication::translate("AMainWindow", "AMainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AMainWindow", "A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AMainWindow: public Ui_AMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMAINWINDOW_H
