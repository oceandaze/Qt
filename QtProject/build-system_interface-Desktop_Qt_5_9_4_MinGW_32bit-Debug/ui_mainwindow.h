/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_31;
    QWidget *tab_3;
    QGroupBox *groupBox;
    QLabel *label_32;
    QLabel *label_33;
    QPushButton *pushButton_10;
    QGroupBox *groupBox_2;
    QLabel *label_34;
    QLabel *label_35;
    QPushButton *pushButton_11;
    QWidget *tab_2;
    QLabel *label_36;
    QGroupBox *groupBox_3;
    QLabel *label_37;
    QPushButton *pushButton_12;
    QGroupBox *groupBox_4;
    QLabel *label_38;
    QPushButton *pushButton_13;
    QGroupBox *groupBox_5;
    QLabel *label_39;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QWidget *tab_4;
    QTableWidget *tableWidget;
    QLabel *label_46;
    QPushButton *pushButton_16;
    QLabel *label_42;
    QLabel *label_47;
    QFrame *line;
    QFrame *line_2;
    QPushButton *pushButton_19;
    QLabel *label_48;
    QPushButton *pushButton_20;
    QLabel *label_49;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_40;
    QLabel *label_41;
    QWidget *tab_5;
    QGroupBox *groupBox_7;
    QPushButton *pushButton_17;
    QCheckBox *checkBox;
    QLabel *label_43;
    QGroupBox *groupBox_8;
    QPushButton *pushButton_18;
    QCheckBox *checkBox_2;
    QLabel *label_44;
    QLabel *label_45;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(446, 517);
        MainWindow->setWindowOpacity(1);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 451, 421));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setIconSize(QSize(16, 16));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 61, 51));
        label->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Administrator/Desktop/1.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 20, 270, 16));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 80, 84, 16));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(133, 73, 291, 20));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 99, 216, 16));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(15, 130, 66, 16));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(130, 130, 90, 16));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(15, 170, 48, 16));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(130, 170, 90, 12));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(11, 231, 265, 16));
        label_9->setBaseSize(QSize(50, 30));
        label_9->setFocusPolicy(Qt::NoFocus);
        label_9->setAutoFillBackground(true);
        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(15, 270, 325, 41));
        label_10->setAutoFillBackground(false);
        label_10->setScaledContents(false);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 230, 92, 23));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 270, 75, 23));
        label_31 = new QLabel(tab);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(15, 230, 325, 31));
        label_31->setAutoFillBackground(false);
        label_31->setScaledContents(false);
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 431, 121));
        label_32 = new QLabel(groupBox);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(10, 30, 54, 57));
        label_32->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Administrator/Desktop/2.png")));
        label_33 = new QLabel(groupBox);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(70, 40, 342, 26));
        pushButton_10 = new QPushButton(groupBox);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(230, 80, 171, 31));
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 150, 431, 121));
        label_34 = new QLabel(groupBox_2);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(10, 30, 54, 57));
        label_34->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Administrator/Desktop/3.png")));
        label_35 = new QLabel(groupBox_2);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(70, 40, 342, 26));
        pushButton_11 = new QPushButton(groupBox_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(230, 80, 171, 31));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_36 = new QLabel(tab_2);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(10, 0, 281, 31));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 40, 431, 91));
        label_37 = new QLabel(groupBox_3);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(10, 20, 281, 31));
        pushButton_12 = new QPushButton(groupBox_3);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(340, 50, 75, 31));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 130, 431, 91));
        label_38 = new QLabel(groupBox_4);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(10, 20, 281, 31));
        pushButton_13 = new QPushButton(groupBox_4);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(340, 50, 75, 31));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 220, 431, 91));
        label_39 = new QLabel(groupBox_5);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(10, 20, 281, 31));
        pushButton_14 = new QPushButton(groupBox_5);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(340, 50, 75, 31));
        pushButton_15 = new QPushButton(tab_2);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(270, 330, 131, 31));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableWidget = new QTableWidget(tab_4);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QIcon icon;
        icon.addFile(QStringLiteral("C:/Users/Administrator/Desktop/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setIcon(icon);
        tableWidget->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setIcon(icon);
        tableWidget->setItem(1, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setIcon(icon);
        tableWidget->setItem(2, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem11);
        QIcon icon1;
        icon1.addFile(QStringLiteral("C:/Users/Administrator/Desktop/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setIcon(icon1);
        tableWidget->setItem(3, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem13);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 160, 381, 141));
        tableWidget->setAutoScrollMargin(16);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setColumnCount(2);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(180);
        tableWidget->horizontalHeader()->setMinimumSectionSize(25);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setHighlightSections(true);
        tableWidget->verticalHeader()->setMinimumSectionSize(25);
        tableWidget->verticalHeader()->setStretchLastSection(false);
        label_46 = new QLabel(tab_4);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(10, 130, 61, 31));
        pushButton_16 = new QPushButton(tab_4);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(250, 90, 181, 31));
        label_42 = new QLabel(tab_4);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(10, 90, 281, 31));
        label_47 = new QLabel(tab_4);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(10, 50, 61, 31));
        line = new QFrame(tab_4);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(70, 60, 361, 16));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        line->setFont(font);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(tab_4);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(70, 140, 361, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton_19 = new QPushButton(tab_4);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(270, 310, 171, 31));
        label_48 = new QLabel(tab_4);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(10, 310, 261, 31));
        pushButton_20 = new QPushButton(tab_4);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(270, 360, 171, 31));
        label_49 = new QLabel(tab_4);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(10, 360, 261, 31));
        layoutWidget = new QWidget(tab_4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 244, 34));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_40 = new QLabel(layoutWidget);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Administrator/Desktop/4.png")));

        horizontalLayout->addWidget(label_40);

        label_41 = new QLabel(layoutWidget);
        label_41->setObjectName(QStringLiteral("label_41"));

        horizontalLayout->addWidget(label_41);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        groupBox_7 = new QGroupBox(tab_5);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(0, 10, 431, 141));
        pushButton_17 = new QPushButton(groupBox_7);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(300, 100, 121, 31));
        checkBox = new QCheckBox(groupBox_7);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 30, 241, 21));
        checkBox->setChecked(true);
        label_43 = new QLabel(groupBox_7);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(10, 70, 231, 16));
        QFont font1;
        font1.setUnderline(true);
        label_43->setFont(font1);
        label_43->setWordWrap(false);
        label_43->setOpenExternalLinks(true);
        groupBox_8 = new QGroupBox(tab_5);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(0, 160, 431, 201));
        pushButton_18 = new QPushButton(groupBox_8);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(290, 160, 131, 31));
        checkBox_2 = new QCheckBox(groupBox_8);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setEnabled(false);
        checkBox_2->setGeometry(QRect(20, 120, 391, 51));
        checkBox_2->setChecked(true);
        label_44 = new QLabel(groupBox_8);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(10, 170, 91, 16));
        label_44->setFont(font1);
        label_44->setWordWrap(false);
        label_44->setOpenExternalLinks(false);
        label_45 = new QLabel(groupBox_8);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(10, 30, 311, 16));
        radioButton = new QRadioButton(groupBox_8);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(10, 60, 291, 31));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(groupBox_8);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 100, 211, 21));
        tabWidget->addTab(tab_5, QString());
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(198, 450, 75, 31));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(279, 450, 75, 31));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setEnabled(false);
        pushButton_5->setGeometry(QRect(360, 450, 75, 31));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "  Windows\344\275\277\347\224\250\344\273\245\344\270\213\344\277\241\346\201\257\345\234\250\347\275\221\347\273\234\344\270\255\346\240\207\350\257\206\350\277\231\345\217\260\350\256\241\347\256\227\346\234\272\343\200\202", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227\346\234\272\346\217\217\350\277\260(D):", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", " \344\276\213\345\246\202\357\274\232\"\344\271\246\346\210\277\350\256\241\347\256\227 \346\234\272\"\346\210\226\"\347\276\216\347\216\262\347\232\204\350\256\241\347\256\227\346\234\272\"", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227\346\234\272\345\205\250\345\220\215:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "DESKTOP-79GF2NM", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", " \345\267\245\344\275\234\347\273\204:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "WORKGROUP", Q_NULLPTR));
        label_9->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "\350\246\201\351\207\215\345\221\275\345\220\215\350\277\231\345\217\260\350\256\241\347\256\227\346\234\272,\346\210\226\350\200\205\346\233\264\346\224\271\345\205\266\344\273\226\345\237\237\346\210\226\345\267\245\344\275\234\347\273\204,\350\257\267\345\215\225\345\207\273\"\n"
"\346\233\264\346\224\271\"\343\200\202", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", " \347\275\221\347\273\234 ID(N)...", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", " \346\233\264\346\224\271(C)...", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "\350\213\245\350\246\201\344\275\277\347\224\250\345\220\221\345\257\274\345\260\206\350\256\241\347\256\227\346\234\272\345\212\240\345\205\245\345\237\237\346\210\226\345\267\245\344\275\234\347\273\204,\350\257\267\345\215\225\345\207\273\"\347\275\221\n"
"\347\273\234 ID\"\343\200\202", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\350\256\241\347\256\227\346\234\272\345\220\215", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\350\256\276\345\244\207\347\256\241\347\220\206\345\231\250", Q_NULLPTR));
        label_32->setText(QString());
        label_33->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\347\256\241\347\220\206\345\231\250\345\210\227\345\207\272\346\211\200\346\234\211\345\256\211\350\243\205\345\234\250\350\256\241\347\256\227\346\234\272\347\232\204\347\241\254\344\273\266\350\256\276\345\244\207\343\200\202\350\257\267\344\275\277\347\224\250\350\256\276\345\244\207\347\256\241\n"
"\347\220\206\345\231\250\346\235\245\346\233\264\346\224\271\350\256\276\345\244\207\347\232\204\345\261\236\346\200\247\343\200\202", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "   \350\256\276\345\244\207\347\256\241\347\220\206\345\231\250(D)", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\350\256\276\345\244\207\345\256\211\350\243\205\350\256\276\347\275\256", Q_NULLPTR));
        label_34->setText(QString());
        label_35->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251Windows\346\230\257\345\220\246\344\270\213\350\275\275\345\210\266\351\200\240\345\225\206\346\217\220\344\276\233\347\232\204\345\217\257\347\224\250\344\272\216\344\275\240\347\232\204\350\256\276\345\244\207\347\232\204\345\272\224\347\224\250\345\222\214\n"
"\350\207\252\345\256\232\344\271\211\345\233\276\346\240\207\343\200\202", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "   \350\256\276\345\244\207\345\256\211\350\243\205\350\256\276\347\275\256(S)", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\347\241\254\344\273\266", Q_NULLPTR));
        label_36->setText(QApplication::translate("MainWindow", "\350\246\201\350\277\233\350\241\214\345\244\247\345\244\232\346\225\260\346\233\264\346\224\271,\344\275\240\345\277\205\351\241\273\344\275\234\344\270\272\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225\343\200\202", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\346\200\247\350\203\275", Q_NULLPTR));
        label_37->setText(QApplication::translate("MainWindow", "\350\247\206\350\247\211\346\225\210\346\236\234,\345\244\204\347\220\206\345\231\250\350\256\241\345\210\222,\345\206\205\345\255\230\344\275\277\347\224\250,\344\273\245\345\217\212\350\231\232\346\213\237\345\206\205\345\255\230", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256(S)...", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\347\224\250\346\210\267\351\205\215\347\275\256\346\226\207\344\273\266", Q_NULLPTR));
        label_38->setText(QApplication::translate("MainWindow", " \344\270\216\347\231\273\345\275\225\350\264\246\345\217\267\347\233\270\345\205\263\347\232\204\346\241\214\351\235\242\350\256\276\347\275\256", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256(E)...", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\345\220\257\345\212\250\345\222\214\346\225\205\351\232\234\346\201\242\345\244\215", Q_NULLPTR));
        label_39->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\345\220\257\345\212\250\343\200\201\347\263\273\347\273\237\346\225\205\351\232\234\345\222\214\350\260\203\350\257\225\344\277\241\346\201\257", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256(T)...", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("MainWindow", "   \347\216\257\345\242\203\345\217\230\351\207\217(N)...", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\351\253\230\347\272\247", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\345\217\257\347\224\250\351\251\261\345\212\250\345\231\250", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\344\277\235\346\212\244", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->item(0, 0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\346\226\260\345\212\240\345\215\267(F:)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->item(0, 1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(1, 0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Win 10 Pro x64(C:)(\347\263\273\347\273\237)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(1, 1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\345\220\257\347\224\250", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(2, 0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\346\234\254\345\234\260\347\243\201\347\233\230\357\274\210D:\357\274\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(2, 1);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(3, 0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "PBR DRV", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(3, 1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_46->setText(QApplication::translate("MainWindow", "\344\277\235\346\212\244\350\256\276\347\275\256", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("MainWindow", "  \347\263\273\347\273\237\350\277\230\345\216\237(S)...", Q_NULLPTR));
        label_42->setText(QApplication::translate("MainWindow", "\345\217\257\344\273\245\351\200\232\350\277\207\345\260\206\350\256\241\347\256\227\346\234\272\350\277\230\345\216\237\345\210\260\344\270\212\344\270\200\344\270\252\350\277\230\345\216\237\347\202\271,\346\222\244\346\266\210\n"
"\347\263\273\347\273\237\346\233\264\346\224\271", Q_NULLPTR));
        label_47->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\350\277\230\345\216\237", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("MainWindow", "\351\205\215\347\275\256(O)...", Q_NULLPTR));
        label_48->setText(QApplication::translate("MainWindow", "\351\205\215\347\275\256\350\277\230\345\216\237\350\256\276\347\275\256\343\200\201\347\256\241\347\220\206\347\243\201\347\233\230\347\251\272\351\227\264,\345\271\266\344\270\224\345\210\240\351\231\244\350\277\230\345\216\237\347\202\271\343\200\202", Q_NULLPTR));
        pushButton_20->setText(QApplication::translate("MainWindow", " \345\210\233\345\273\272(C)...", Q_NULLPTR));
        label_49->setText(QApplication::translate("MainWindow", "\347\253\213\345\210\273\344\270\272\345\220\257\345\212\250\347\224\250\347\263\273\347\273\237\344\277\235\346\212\244\347\232\204\351\251\261\345\212\250\345\231\250\345\210\233\345\273\272\350\277\230\345\216\237\347\202\271\343\200\202", Q_NULLPTR));
        label_40->setText(QString());
        label_41->setText(QApplication::translate("MainWindow", "\344\275\277\347\224\250\347\263\273\347\273\237\344\277\235\346\212\244\346\222\244\346\266\210\344\270\215\351\234\200\350\246\201\347\232\204\347\263\273\347\273\237\346\233\264\346\224\271\343\200\202", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\347\263\273\347\273\237\344\277\235\346\212\244", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\350\277\234\347\250\213\345\215\217\345\212\251", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("MainWindow", "  \351\253\230\347\272\247(V)...", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "\345\205\201\350\256\270\350\277\234\347\250\213\345\215\217\345\212\251\350\277\236\346\216\245\350\277\231\345\217\260\350\256\241\347\256\227\346\234\272(R)", Q_NULLPTR));
        label_43->setText(QApplication::translate("MainWindow", "<html><head/><body><p><a href=\"www.baidu.com\"><span style=\" text-decoration: underline; color:#0000ff;\">\346\234\211\345\205\263\345\220\257\347\224\250\350\277\234\347\250\213\345\215\217\345\212\251\347\232\204\344\277\241\346\201\257</span></a></p></body></html>", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "\350\277\234\347\250\213\346\241\214\351\235\242", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("MainWindow", "  \351\200\211\346\213\251\347\224\250\346\210\267(S)...", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "\344\273\205\345\205\201\350\256\270\350\277\220\350\241\214\344\275\277\347\224\250\347\275\221\347\273\234\347\272\247\345\210\253\350\272\253\344\273\275\351\252\214\350\257\201\347\232\204\350\277\234\347\250\213\346\241\214\351\235\242\347\232\204\350\256\241\347\256\227\346\234\272\350\277\236\346\216\245(\345\273\272\350\256\256)\n"
"\357\274\210N\357\274\211", Q_NULLPTR));
        label_44->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#0055ff;\">\345\270\256\345\212\251\346\210\221\351\200\211\346\213\251</span></p><p><br/></p></body></html>", Q_NULLPTR));
        label_45->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\344\270\200\344\270\252\351\200\211\351\241\271,\347\204\266\345\220\216\346\214\207\345\256\232\350\260\201\345\217\257\344\273\245\350\277\236\346\216\245\343\200\202", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "\344\270\215\345\205\201\350\256\270\350\277\234\347\250\213\350\277\236\346\216\245\345\210\260\346\255\244\350\256\241\347\256\227\346\234\272(D)", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "\345\205\201\350\256\270\350\277\234\347\250\213\350\277\236\346\216\245\345\210\260\346\255\244\350\256\241\347\256\227\346\234\272(L)", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "\350\277\234\347\250\213", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", " \347\241\256\345\256\232", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", " \345\272\224\347\224\250(A)", Q_NULLPTR));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
