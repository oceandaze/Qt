/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMdiArea>

QT_BEGIN_NAMESPACE

class Ui_HelloDialog
{
public:
    QLabel *label;
    QMdiArea *mdiArea;

    void setupUi(QDialog *HelloDialog)
    {
        if (HelloDialog->objectName().isEmpty())
            HelloDialog->setObjectName(QStringLiteral("HelloDialog"));
        HelloDialog->resize(400, 300);
        label = new QLabel(HelloDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 120, 132, 12));
        mdiArea = new QMdiArea(HelloDialog);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setGeometry(QRect(70, 40, 201, 61));

        retranslateUi(HelloDialog);

        QMetaObject::connectSlotsByName(HelloDialog);
    } // setupUi

    void retranslateUi(QDialog *HelloDialog)
    {
        HelloDialog->setWindowTitle(QApplication::translate("HelloDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("HelloDialog", "Hello world!  \344\275\240\345\245\275Qt\357\274\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HelloDialog: public Ui_HelloDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
