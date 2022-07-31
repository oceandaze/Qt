/********************************************************************************
** Form generated from reading UI file 'movetothreadmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVETOTHREADMAINWINDOW_H
#define UI_MOVETOTHREADMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MoveToThreadMainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *startBtn;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MoveToThreadMainWindow)
    {
        if (MoveToThreadMainWindow->objectName().isEmpty())
            MoveToThreadMainWindow->setObjectName(QStringLiteral("MoveToThreadMainWindow"));
        MoveToThreadMainWindow->resize(400, 300);
        centralWidget = new QWidget(MoveToThreadMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 170, 75, 23));
        startBtn = new QPushButton(centralWidget);
        startBtn->setObjectName(QStringLiteral("startBtn"));
        startBtn->setGeometry(QRect(210, 170, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 50, 181, 71));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        MoveToThreadMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MoveToThreadMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        MoveToThreadMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MoveToThreadMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MoveToThreadMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MoveToThreadMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MoveToThreadMainWindow->setStatusBar(statusBar);

        retranslateUi(MoveToThreadMainWindow);

        QMetaObject::connectSlotsByName(MoveToThreadMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MoveToThreadMainWindow)
    {
        MoveToThreadMainWindow->setWindowTitle(QApplication::translate("MoveToThreadMainWindow", "MoveToThreadMainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MoveToThreadMainWindow", "PushButton", Q_NULLPTR));
        startBtn->setText(QApplication::translate("MoveToThreadMainWindow", "start", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MoveToThreadMainWindow: public Ui_MoveToThreadMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVETOTHREADMAINWINDOW_H
