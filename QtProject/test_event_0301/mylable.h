#ifndef MYLABLE_H
#define MYLABLE_H

#include <QLabel>

class MyLable : public QLabel
{
    Q_OBJECT
public:
    explicit MyLable(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // MYLABLE_H
