/********************************************************************************
** Form generated from reading UI file 'kzamainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KZAMAINWINDOW_H
#define UI_KZAMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KzaMainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KzaMainWindow)
    {
        if (KzaMainWindow->objectName().isEmpty())
            KzaMainWindow->setObjectName(QStringLiteral("KzaMainWindow"));
        KzaMainWindow->resize(711, 424);
        centralWidget = new QWidget(KzaMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        KzaMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(KzaMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 711, 23));
        KzaMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(KzaMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        KzaMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(KzaMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        KzaMainWindow->setStatusBar(statusBar);

        retranslateUi(KzaMainWindow);

        QMetaObject::connectSlotsByName(KzaMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *KzaMainWindow)
    {
        KzaMainWindow->setWindowTitle(QApplication::translate("KzaMainWindow", "KzaMainWindow", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("KzaMainWindow", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("KzaMainWindow", "Tab 2", Q_NULLPTR));
        label->setText(QApplication::translate("KzaMainWindow", "\350\255\246\346\212\245\346\217\220\347\244\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KzaMainWindow: public Ui_KzaMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KZAMAINWINDOW_H
