/********************************************************************************
** Form generated from reading UI file 'vmmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VMMAINWINDOW_H
#define UI_VMMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VMMainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_V;
    QMenu *menu_M;
    QMenu *menu_T;
    QMenu *menu_H;
    QMenu *menu;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_4;
    QComboBox *comboBox_2;
    QTreeWidget *treeWidget;

    void setupUi(QMainWindow *VMMainWindow)
    {
        if (VMMainWindow->objectName().isEmpty())
            VMMainWindow->setObjectName(QStringLiteral("VMMainWindow"));
        VMMainWindow->resize(901, 492);
        VMMainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        VMMainWindow->setWindowIcon(icon);
        VMMainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::GroupedDragging);
        centralWidget = new QWidget(VMMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 851, 541));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 90, 331, 41));
        label->setStyleSheet(QLatin1String("QLabel{\n"
"background:transparent;\n"
"border-width:0;\n"
"border-style:outset};"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix9/13.png")));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 150, 549, 145));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setMouseTracking(true);
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"background:transparent;\n"
"border-width:0;\n"
"border-style:outset};"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../build-VMware-Desktop_Qt_5_9_4_MinGW_32bit-Debug/14.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(169, 135));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"background:transparent;\n"
"border-width:0;\n"
"border-style:outset};"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../build-VMware-Desktop_Qt_5_9_4_MinGW_32bit-Debug/15.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(169, 135));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"background:transparent;\n"
"border-width:0;\n"
"border-style:outset};"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../build-VMware-Desktop_Qt_5_9_4_MinGW_32bit-Debug/16.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(169, 135));

        horizontalLayout->addWidget(pushButton_3);

        tabWidget->addTab(tab, QString());
        VMMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VMMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 901, 23));
        menuBar->setAutoFillBackground(true);
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        menu_V = new QMenu(menuBar);
        menu_V->setObjectName(QStringLiteral("menu_V"));
        menu_M = new QMenu(menuBar);
        menu_M->setObjectName(QStringLiteral("menu_M"));
        menu_T = new QMenu(menuBar);
        menu_T->setObjectName(QStringLiteral("menu_T"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setGeometry(QRect(699, 102, 120, 50));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix13/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu->setIcon(icon4);
        VMMainWindow->setMenuBar(menuBar);
        dockWidget_2 = new QDockWidget(VMMainWindow);
        dockWidget_2->setObjectName(QStringLiteral("dockWidget_2"));
        dockWidget_2->setAcceptDrops(true);
        dockWidget_2->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        comboBox_2 = new QComboBox(dockWidgetContents_4);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix8/12.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_2->addItem(icon5, QString());
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix2/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_2->addItem(icon6, QString());
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix3/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_2->addItem(icon7, QString());
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix4/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_2->addItem(icon8, QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(0, 0, 212, 22));
        comboBox_2->setContextMenuPolicy(Qt::NoContextMenu);
        comboBox_2->setAcceptDrops(true);
        comboBox_2->setAutoFillBackground(false);
        comboBox_2->setInputMethodHints(Qt::ImhNone);
        comboBox_2->setEditable(true);
        comboBox_2->setIconSize(QSize(20, 30));
        comboBox_2->setDuplicatesEnabled(false);
        comboBox_2->setFrame(true);
        treeWidget = new QTreeWidget(dockWidgetContents_4);
        treeWidget->headerItem()->setText(0, QString());
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix6/9.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/prefix5/8.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/prefix7/10.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem->setIcon(0, icon9);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem1->setIcon(0, icon10);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem2->setIcon(0, icon10);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem3->setIcon(0, icon11);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(0, 30, 212, 1000));
        treeWidget->setUniformRowHeights(true);
        treeWidget->setSortingEnabled(false);
        treeWidget->setHeaderHidden(true);
        treeWidget->header()->setVisible(false);
        dockWidget_2->setWidget(dockWidgetContents_4);
        VMMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_2);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_V->menuAction());
        menuBar->addAction(menu_M->menuAction());
        menuBar->addAction(menu_T->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menuBar->addAction(menu->menuAction());

        retranslateUi(VMMainWindow);

        tabWidget->setCurrentIndex(0);
        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(VMMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *VMMainWindow)
    {
        VMMainWindow->setWindowTitle(QApplication::translate("VMMainWindow", "VMMainWindow", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("VMMainWindow", " \344\270\273\351\241\265", Q_NULLPTR));
        menu_F->setTitle(QApplication::translate("VMMainWindow", "\346\226\207\344\273\266(F)", Q_NULLPTR));
        menu_E->setTitle(QApplication::translate("VMMainWindow", "\347\274\226\350\276\221(E)", Q_NULLPTR));
        menu_V->setTitle(QApplication::translate("VMMainWindow", "\346\237\245\347\234\213(V)", Q_NULLPTR));
        menu_M->setTitle(QApplication::translate("VMMainWindow", "\350\231\232\346\213\237\346\234\272(M)", Q_NULLPTR));
        menu_T->setTitle(QApplication::translate("VMMainWindow", "\351\200\211\351\241\271\345\215\241(T)", Q_NULLPTR));
        menu_H->setTitle(QApplication::translate("VMMainWindow", "\345\270\256\345\212\251(H)", Q_NULLPTR));
        menu->setTitle(QString());
        dockWidget_2->setWindowTitle(QApplication::translate("VMMainWindow", "\345\272\223", Q_NULLPTR));
        comboBox_2->setItemText(0, QApplication::translate("VMMainWindow", "\345\234\250\346\255\244\345\244\204\351\224\256\345\205\245\345\206\205\345\256\271\346\220\234\347\264\242", Q_NULLPTR));
        comboBox_2->setItemText(1, QApplication::translate("VMMainWindow", "\346\211\200\346\234\211\351\241\271\347\233\256", Q_NULLPTR));
        comboBox_2->setItemText(2, QApplication::translate("VMMainWindow", "\345\267\262\345\274\200\346\234\272", Q_NULLPTR));
        comboBox_2->setItemText(3, QApplication::translate("VMMainWindow", "\346\224\266\350\227\217\345\244\271", Q_NULLPTR));


        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QApplication::translate("VMMainWindow", "\346\210\221\347\232\204\350\256\241\347\256\227\346\234\272", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = ___qtreewidgetitem->child(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("VMMainWindow", "Ubuntu 64 \344\275\215", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem->child(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("VMMainWindow", "ubuntu18.04_x64", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("VMMainWindow", "\345\205\261\344\272\253\347\232\204\350\231\232\346\213\237\346\234\272", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class VMMainWindow: public Ui_VMMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VMMAINWINDOW_H
