#ifndef CFORM_H
#define CFORM_H

#include <QWidget>

namespace Ui {
class CForm;
}

class CForm : public QWidget
{
    Q_OBJECT

public:
    explicit CForm(QWidget *parent = 0);
    ~CForm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CForm *ui;
signals:
    void signalC();
};

#endif // CFORM_H
