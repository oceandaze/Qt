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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestMainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_4;
    QLabel *label_3;

    void setupUi(QMainWindow *TestMainWindow)
    {
        if (TestMainWindow->objectName().isEmpty())
            TestMainWindow->setObjectName(QStringLiteral("TestMainWindow"));
        TestMainWindow->resize(288, 350);
        TestMainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(TestMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 50, 101, 101));
        label->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Administrator/Desktop/Q1.png")));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 220, 191, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(56, 205, 127);\n"
"color: rgb(255, 255, 255);"));
        pushButton->setAutoDefault(false);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 160, 41, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(13);
        label_2->setFont(font1);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 290, 75, 23));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QStringLiteral("color: rgb(67, 104, 149);"));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 290, 75, 23));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QStringLiteral("color: rgb(67, 104, 149);"));
        pushButton_3->setFlat(true);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(260, 0, 31, 31));
        QIcon icon;
        icon.addFile(QStringLiteral("../build-test_qt_0217-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/fault.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setFlat(true);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(230, 0, 31, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../build-test_qt_0217-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/set.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon1);
        pushButton_5->setFlat(true);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(230, 0, 31, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../build-test_qt_0217-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/Q5.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon2);
        pushButton_6->setFlat(true);
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setEnabled(true);
        radioButton->setGeometry(QRect(110, 70, 51, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        radioButton->setFont(font2);
        radioButton->setStyleSheet(QStringLiteral("selection-color: rgb(0, 255, 0);"));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setEnabled(true);
        radioButton_2->setGeometry(QRect(200, 70, 51, 21));
        radioButton_2->setFont(font2);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(false);
        label_4->setGeometry(QRect(30, 70, 54, 21));
        label_4->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 30, 101, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setWeight(50);
        label_3->setFont(font3);
        TestMainWindow->setCentralWidget(centralWidget);

        retranslateUi(TestMainWindow);

        QMetaObject::connectSlotsByName(TestMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TestMainWindow)
    {
        TestMainWindow->setWindowTitle(QApplication::translate("TestMainWindow", "TestMainWindow", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QApplication::translate("TestMainWindow", "\350\277\233\345\205\245\345\276\256\344\277\241", Q_NULLPTR));
        label_2->setText(QApplication::translate("TestMainWindow", "\345\244\247\346\263\275", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("TestMainWindow", "\345\210\207\346\215\242\350\264\246\345\217\267", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("TestMainWindow", "\344\273\205\344\274\240\350\276\223\346\226\207\344\273\266", Q_NULLPTR));
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        radioButton->setText(QApplication::translate("TestMainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("TestMainWindow", "\345\274\200\345\220\257", Q_NULLPTR));
        label_4->setText(QApplication::translate("TestMainWindow", "\344\275\277\347\224\250\344\273\243\347\220\206", Q_NULLPTR));
        label_3->setText(QApplication::translate("TestMainWindow", "\347\275\221\347\273\234\344\273\243\347\220\206\350\256\276\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TestMainWindow: public Ui_TestMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTMAINWINDOW_H
