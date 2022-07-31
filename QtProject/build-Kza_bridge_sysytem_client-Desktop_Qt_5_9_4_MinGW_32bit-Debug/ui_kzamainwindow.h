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
#include <QtWidgets/QPushButton>
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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KzaMainWindow)
    {
        if (KzaMainWindow->objectName().isEmpty())
            KzaMainWindow->setObjectName(QStringLiteral("KzaMainWindow"));
        KzaMainWindow->resize(733, 428);
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
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 50, 101, 41));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 70, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        KzaMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(KzaMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 733, 23));
        KzaMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(KzaMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        KzaMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(KzaMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        KzaMainWindow->setStatusBar(statusBar);

        retranslateUi(KzaMainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(KzaMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *KzaMainWindow)
    {
        KzaMainWindow->setWindowTitle(QApplication::translate("KzaMainWindow", "KzaMainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("KzaMainWindow", "\345\217\221\351\200\201\345\255\227\347\254\246\344\270\262", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("KzaMainWindow", "  \345\217\221\351\200\201\347\273\223\346\236\204\344\275\223", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("KzaMainWindow", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("KzaMainWindow", "Tab 2", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("KzaMainWindow", "\351\241\265", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("KzaMainWindow", "\351\241\265", Q_NULLPTR));
        label->setText(QApplication::translate("KzaMainWindow", "  \350\255\246\346\212\245\346\217\220\347\244\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KzaMainWindow: public Ui_KzaMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KZAMAINWINDOW_H
