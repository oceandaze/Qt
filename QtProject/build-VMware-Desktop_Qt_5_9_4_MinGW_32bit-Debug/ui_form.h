/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(499, 410);
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 370, 501, 41));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 75, 23));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(250, 10, 239, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(false);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        radioButton = new QRadioButton(Form);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(210, 110, 261, 91));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(Form);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(210, 200, 261, 81));
        radioButton_2->setChecked(false);
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 40, 221, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Form);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 110, 171, 21));
        label_3 = new QLabel(Form);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 161, 361));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../build-VMware-Desktop_Qt_5_9_4_MinGW_32bit-Debug/18.png")));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "\346\226\260\345\273\272\350\231\232\346\213\237\346\234\272\345\220\221\345\257\274", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("Form", "\345\270\256\345\212\251", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Form", "<\344\270\212\344\270\200\346\255\245(B)", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Form", "\344\270\213\344\270\200\346\255\245(N)>", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Form", "\345\217\226\346\266\210", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Form", "\n"
"\n"
"\345\205\270\345\236\213(\346\216\250\350\215\220)(T)\n"
"\351\200\232\350\277\207\345\207\240\344\270\252\347\256\200\345\215\225\347\232\204\346\255\245\351\252\244\345\210\233\345\273\272 Workstation 15.x\n"
"\350\231\232\346\213\237\346\234\272", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Form", "\n"
"\n"
"\350\207\252\345\256\232\344\271\211(\351\253\230\347\272\247)(C)\n"
"\345\210\233\345\273\272\345\270\246\346\234\211SCSI\346\216\247\345\210\266\345\231\250\347\261\273\345\236\213\343\200\201\350\231\232\346\213\237\347\243\201\347\233\230\347\261\273\345\236\213\n"
"\344\273\245\345\217\212\344\270\216\346\227\247\347\211\210 VMware \344\272\247\345\223\201\345\205\274\345\256\271\346\200\247\347\255\211\351\253\230\347\272\247\351\200\211\351\241\271\n"
"\347\232\204\350\231\232\346\213\237\346\234\272\343\200\202", Q_NULLPTR));
        label->setText(QApplication::translate("Form", "\346\254\242\350\277\216\344\275\277\347\224\250\346\226\260\345\273\272\350\231\232\346\213\237\346\234\272\345\220\221\345\257\274", Q_NULLPTR));
        label_2->setText(QApplication::translate("Form", "\344\275\240\345\270\214\346\234\233\344\275\277\347\224\250\344\273\200\344\271\210\347\261\273\345\236\213\347\232\204\351\205\215\347\275\256?", Q_NULLPTR));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
