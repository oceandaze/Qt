/********************************************************************************
** Form generated from reading UI file 'testmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTMAINWINDOW_H
#define UI_TESTMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestMainWindow
{
public:
    QAction *action_2;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuQQ;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestMainWindow)
    {
        if (TestMainWindow->objectName().isEmpty())
            TestMainWindow->setObjectName(QStringLiteral("TestMainWindow"));
        TestMainWindow->resize(505, 337);
        action_2 = new QAction(TestMainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        centralWidget = new QWidget(TestMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setChecked(true);

        horizontalLayout_3->addWidget(checkBox);

        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_3->addWidget(checkBox_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        TestMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TestMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 505, 23));
        menuQQ = new QMenu(menuBar);
        menuQQ->setObjectName(QStringLiteral("menuQQ"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        TestMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TestMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TestMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TestMainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuQQ->menuAction());
        menuBar->addAction(menu->menuAction());
        menuQQ->addSeparator();

        retranslateUi(TestMainWindow);

        QMetaObject::connectSlotsByName(TestMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TestMainWindow)
    {
        TestMainWindow->setWindowTitle(QApplication::translate("TestMainWindow", "TestMainWindow", Q_NULLPTR));
        action_2->setText(QApplication::translate("TestMainWindow", ";", Q_NULLPTR));
        label->setText(QApplication::translate("TestMainWindow", "\350\264\246\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("TestMainWindow", "\345\257\206\347\240\201", Q_NULLPTR));
        checkBox->setText(QApplication::translate("TestMainWindow", "\350\256\260\344\275\217\345\257\206\347\240\201", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("TestMainWindow", "\350\207\252\345\212\250\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("TestMainWindow", "\346\263\250\345\206\214", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TestMainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
        menuQQ->setTitle(QApplication::translate("TestMainWindow", "\346\211\276\345\233\236\345\257\206\347\240\201", Q_NULLPTR));
        menu->setTitle(QApplication::translate("TestMainWindow", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TestMainWindow: public Ui_TestMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTMAINWINDOW_H
