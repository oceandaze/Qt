#include "hellodialog.h"
#include "ui_hellodialog.h"

HelloDialog::HelloDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelloDialog)
{
    ui->setupUi(this);
}

HelloDialog::~HelloDialog()
{
    delete ui;
}

void HelloDialog::on_pushButton_clicked()
{
    QString value=ui->label->text();
    ui-> label_2->setText(QApplication::translate("HelloDialog", "Hello world!  \344\275\240\345\245\275Qt\357\274\201", Q_NULLPTR));

}
