#ifndef QRCODE_H
#define QRCODE_H

#include <QDialog>

namespace Ui {
class QRCode;
}

class QRCode : public QDialog
{
    Q_OBJECT

public:
    explicit QRCode(QWidget *parent = 0);
    ~QRCode();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::QRCode *ui;
};

#endif // QRCODE_H
