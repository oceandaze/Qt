#ifndef LOGGING_H
#define LOGGING_H

#include <QMainWindow>
#include <QTcpSocket>

namespace Ui {
class Logging;
}

class Logging : public QMainWindow
{
    Q_OBJECT

public:
    explicit Logging(QWidget *parent = 0);
    explicit Logging(QTcpSocket * client,QWidget *parent = 0);
    ~Logging();

private slots:
    void on_pushButton_search_clicked();

private:
    Ui::Logging *ui;
    QTcpSocket *m_socket;
};

#endif // LOGGING_H
