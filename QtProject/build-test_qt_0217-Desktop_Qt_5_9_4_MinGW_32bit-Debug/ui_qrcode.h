/********************************************************************************
** Form generated from reading UI file 'qrcode.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRCODE_H
#define UI_QRCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_QRCode
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QLabel *label_3;
    QPushButton *pushButton_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_4;

    void setupUi(QDialog *QRCode)
    {
        if (QRCode->objectName().isEmpty())
            QRCode->setObjectName(QStringLiteral("QRCode"));
        QRCode->resize(275, 364);
        label = new QLabel(QRCode);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(52, 70, 181, 181));
        label->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Administrator/Desktop/Q2.png")));
        label_2 = new QLabel(QRCode);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 30, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));
        pushButton_3 = new QPushButton(QRCode);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(90, 300, 75, 23));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QStringLiteral("color: rgb(67, 104, 149);"));
        pushButton_3->setFlat(true);
        pushButton_5 = new QPushButton(QRCode);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(220, 0, 31, 31));
        QIcon icon;
        icon.addFile(QStringLiteral("../build-test_qt_0217-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/set.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon);
        pushButton_5->setFlat(true);
        pushButton_4 = new QPushButton(QRCode);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(250, 0, 31, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../build-test_qt_0217-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/fault.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setFlat(true);
        label_3 = new QLabel(QRCode);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 40, 101, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        label_3->setFont(font1);
        pushButton_6 = new QPushButton(QRCode);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(220, 0, 31, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../build-test_qt_0217-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/Q5.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon2);
        pushButton_6->setFlat(true);
        radioButton = new QRadioButton(QRCode);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setEnabled(true);
        radioButton->setGeometry(QRect(100, 80, 51, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        radioButton->setFont(font2);
        radioButton->setStyleSheet(QStringLiteral("selection-color: rgb(0, 255, 0);"));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(QRCode);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setEnabled(true);
        radioButton_2->setGeometry(QRect(190, 80, 51, 21));
        radioButton_2->setFont(font2);
        label_4 = new QLabel(QRCode);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(false);
        label_4->setGeometry(QRect(20, 80, 54, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        label_4->setFont(font3);

        retranslateUi(QRCode);

        QMetaObject::connectSlotsByName(QRCode);
    } // setupUi

    void retranslateUi(QDialog *QRCode)
    {
        QRCode->setWindowTitle(QApplication::translate("QRCode", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("QRCode", "\346\211\253\347\240\201\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("QRCode", "\344\273\205\344\274\240\350\276\223\346\226\207\344\273\266", Q_NULLPTR));
        pushButton_5->setText(QString());
        pushButton_4->setText(QString());
        label_3->setText(QApplication::translate("QRCode", "\347\275\221\347\273\234\344\273\243\347\220\206\350\256\276\347\275\256", Q_NULLPTR));
        pushButton_6->setText(QString());
        radioButton->setText(QApplication::translate("QRCode", "\345\205\263\351\227\255", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("QRCode", "\345\274\200\345\220\257", Q_NULLPTR));
        label_4->setText(QApplication::translate("QRCode", "\344\275\277\347\224\250\344\273\243\347\220\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QRCode: public Ui_QRCode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRCODE_H
