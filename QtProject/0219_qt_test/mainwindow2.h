#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include <QComboBox>
#include <QFontComboBox>
#include <QPushButton>
#include <QLabel>
#include <QSpinBox>
#include <QTimeEdit>
#include <QDateEdit>
#include <QScrollBar>

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = 0);
    ~MainWindow2();

private:
    Ui::MainWindow2 *ui;
    QComboBox *comboBox;
    QFontComboBox *fontComboBox;
    QPushButton *button;
    QLabel *label;
    QSpinBox *spinBox;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QScrollBar *scrollBar;
    QSpinBox *spinBox2;
private slots:
 void txtButton();
};

#endif // MAINWINDOW2_H
