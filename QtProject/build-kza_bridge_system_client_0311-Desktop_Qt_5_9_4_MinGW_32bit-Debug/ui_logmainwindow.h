/********************************************************************************
** Form generated from reading UI file 'logmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGMAINWINDOW_H
#define UI_LOGMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogMainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LogMainWindow)
    {
        if (LogMainWindow->objectName().isEmpty())
            LogMainWindow->setObjectName(QStringLiteral("LogMainWindow"));
        LogMainWindow->resize(556, 294);
        centralwidget = new QWidget(LogMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(9, 9, 544, 57));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));

        horizontalLayout->addWidget(dateTimeEdit);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        dateTimeEdit_2 = new QDateTimeEdit(groupBox);
        dateTimeEdit_2->setObjectName(QStringLiteral("dateTimeEdit_2"));

        horizontalLayout->addWidget(dateTimeEdit_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        LogMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LogMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 556, 23));
        LogMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LogMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LogMainWindow->setStatusBar(statusbar);

        retranslateUi(LogMainWindow);

        QMetaObject::connectSlotsByName(LogMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LogMainWindow)
    {
        LogMainWindow->setWindowTitle(QApplication::translate("LogMainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("LogMainWindow", "\346\237\245\350\257\242\346\235\241\344\273\266", Q_NULLPTR));
        label->setText(QApplication::translate("LogMainWindow", "\347\272\247\345\210\253", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("LogMainWindow", "All", Q_NULLPTR)
         << QApplication::translate("LogMainWindow", "Info", Q_NULLPTR)
         << QApplication::translate("LogMainWindow", "Warning", Q_NULLPTR)
         << QApplication::translate("LogMainWindow", "Error", Q_NULLPTR)
         << QApplication::translate("LogMainWindow", "Fatal", Q_NULLPTR)
         << QApplication::translate("LogMainWindow", "Debug", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("LogMainWindow", "\344\273\216", Q_NULLPTR));
        label_3->setText(QApplication::translate("LogMainWindow", "\345\210\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("LogMainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogMainWindow: public Ui_LogMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGMAINWINDOW_H
