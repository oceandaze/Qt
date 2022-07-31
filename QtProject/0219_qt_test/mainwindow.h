#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QComboBox>
#include <QFontComboBox>
#include <mainwindow2.h>
#include <QRadioButton>
#include <QCheckBox>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
    void mousePressEvent(QMouseEvent *event);

    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
private:
    Ui::MainWindow *ui;
    QPushButton *btClose;
    QPoint last;
    QPushButton *button;
    MainWindow2 w2;
    QLabel *label;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QPlainTextEdit *plainTextEdit;
    QComboBox *comboBox;
    QFontComboBox *fontComboBox;

    QRadioButton *radioM;
    QRadioButton *radioW;
    QLabel *label2;

    QCheckBox *checkBox01;
    QCheckBox *checkBox02;
    QCheckBox *checkBox03;
    QLabel *label3;

private slots:
 void checkChange();

private slots:
    void showMainwindow2();
private slots:
 void radioChange();
private slots:
    void txtButton();
    void txtButton2();
};

#endif // MAINWINDOW_H
