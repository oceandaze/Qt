/********************************************************************************
** Form generated from reading UI file 'hellodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLODIALOG_H
#define UI_HELLODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;

    void setupUi(QDialog *HelloDialog)
    {
        if (HelloDialog->objectName().isEmpty())
            HelloDialog->setObjectName(QStringLiteral("HelloDialog"));
        HelloDialog->resize(400, 300);
        label = new QLabel(HelloDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 100, 151, 20));
        pushButton = new QPushButton(HelloDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 170, 75, 23));
        label_2 = new QLabel(HelloDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 140, 231, 16));
        verticalLayoutWidget = new QWidget(HelloDialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 10, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget = new QWidget(HelloDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(200, 20, 160, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget = new QWidget(HelloDialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 130, 160, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        formLayoutWidget = new QWidget(HelloDialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(250, 150, 160, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(HelloDialog);

        QMetaObject::connectSlotsByName(HelloDialog);
    } // setupUi

    void retranslateUi(QDialog *HelloDialog)
    {
        HelloDialog->setWindowTitle(QApplication::translate("HelloDialog", "HelloDialog", Q_NULLPTR));
        label->setText(QApplication::translate("HelloDialog", "hello world !\344\275\240\345\245\275\357\274\214Qt\357\274\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("HelloDialog", "PushButton", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HelloDialog: public Ui_HelloDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLODIALOG_H
