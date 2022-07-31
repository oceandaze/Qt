#ifndef BFORM_H
#define BFORM_H

#include <QWidget>

namespace Ui {
class BForm;
}

class BForm : public QWidget
{
    Q_OBJECT

public:
    explicit BForm(QWidget *parent = 0);
    ~BForm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::BForm *ui;

signals:
    void signalB();
};

#endif // BFORM_H
