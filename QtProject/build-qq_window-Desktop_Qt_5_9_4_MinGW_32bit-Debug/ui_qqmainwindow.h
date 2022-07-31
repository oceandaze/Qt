/********************************************************************************
** Form generated from reading UI file 'qqmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQMAINWINDOW_H
#define UI_QQMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QQMainWindow
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_9;

    void setupUi(QMainWindow *QQMainWindow)
    {
        if (QQMainWindow->objectName().isEmpty())
            QQMainWindow->setObjectName(QStringLiteral("QQMainWindow"));
        QQMainWindow->resize(426, 329);
        centralWidget = new QWidget(QQMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        QIcon icon;
        icon.addFile(QStringLiteral("../build-qq_window-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/Q1.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(70, 166, 271, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        comboBox->setFont(font);
        comboBox->setCursor(QCursor(Qt::IBeamCursor));
        comboBox->setEditable(true);
        comboBox->setIconSize(QSize(30, 30));
        comboBox->setFrame(false);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 206, 221, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(8);
        lineEdit->setFont(font1);
        lineEdit->setFrame(false);
        lineEdit->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 280, 261, 31));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(34, 174, 250);"));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(180, 250, 71, 16));
        checkBox->setStyleSheet(QStringLiteral("color: rgb(170, 170, 127);"));
        checkBox->setChecked(true);
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(80, 250, 71, 16));
        checkBox_2->setStyleSheet(QStringLiteral("color: rgb(170, 170, 127);"));
        checkBox_2->setChecked(true);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(280, 246, 75, 23));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        pushButton_2->setFont(font2);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QStringLiteral("color: rgb(170, 170, 127);"));
        pushButton_2->setFlat(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 431, 121));
        label->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 60, 101, 101));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../build-qq_window-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/1.png")));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 431, 331));
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 300, 75, 23));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QStringLiteral("color: rgb(170, 170, 127);"));
        pushButton_3->setFlat(true);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(80, 195, 261, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(80, 230, 261, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 211, 21, 21));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../build-qq_window-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/Q2.png")));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 0, 91, 51));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../build-qq_window-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/qqlogo.png")));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(320, 205, 21, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../build-qq_window-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/Q3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(30, 30));
        pushButton_4->setFlat(true);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(380, 290, 41, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../build-qq_window-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/Q4.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon2);
        pushButton_5->setIconSize(QSize(60, 60));
        pushButton_5->setFlat(true);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(400, 0, 20, 21));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../build-qq_window-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon3);
        pushButton_6->setFlat(true);
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(370, 0, 20, 21));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../build-qq_window-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/jian.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon4);
        pushButton_7->setFlat(true);
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(340, 0, 20, 21));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../build-qq_window-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/set.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon5);
        pushButton_8->setFlat(true);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 230, 371, 131));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../build-qq_window-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/Q5.png")));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(140, 60, 131, 131));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../build-qq_window-Desktop_Qt_5_9_4_MinGW_32bit-Debug/image/Q6.png")));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(90, 260, 241, 31));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(34, 174, 250);"));
        QQMainWindow->setCentralWidget(centralWidget);
        pushButton_9->raise();
        label_7->raise();
        label_3->raise();
        comboBox->raise();
        lineEdit->raise();
        pushButton->raise();
        checkBox->raise();
        checkBox_2->raise();
        pushButton_2->raise();
        label->raise();
        label_2->raise();
        pushButton_3->raise();
        line->raise();
        line_2->raise();
        label_4->raise();
        label_5->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        label_6->raise();

        retranslateUi(QQMainWindow);

        QMetaObject::connectSlotsByName(QQMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QQMainWindow)
    {
        QQMainWindow->setWindowTitle(QApplication::translate("QQMainWindow", "QQMainWindow", Q_NULLPTR));
        comboBox->setItemText(0, QApplication::translate("QQMainWindow", "359957724", Q_NULLPTR));
        comboBox->setItemText(1, QApplication::translate("QQMainWindow", "1309071423", Q_NULLPTR));

        lineEdit->setText(QApplication::translate("QQMainWindow", "12345678", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QQMainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
        checkBox->setText(QApplication::translate("QQMainWindow", "\350\207\252\345\212\250\347\231\273\345\275\225", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("QQMainWindow", "\350\256\260\344\275\217\345\257\206\347\240\201", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("QQMainWindow", "\346\211\276\345\233\236\345\257\206\347\240\201", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        pushButton_3->setText(QApplication::translate("QQMainWindow", "\346\263\250\345\206\214\350\264\246\345\217\267", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        pushButton_9->setText(QApplication::translate("QQMainWindow", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QQMainWindow: public Ui_QQMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQMAINWINDOW_H
