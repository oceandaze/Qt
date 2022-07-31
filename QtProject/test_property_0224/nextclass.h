#ifndef NEXTCLASS_H
#define NEXTCLASS_H
#include <QObject>

class NextClass:public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString userName READ getUserName WRITE setUserName NOTIFY userNameChanged)
public:
    explicit NextClass(QObject *parent=0);
    QString getUserName()const
    {
        return m_userName;
    }
    void setUserName(QString userName)
    {
        m_userName=userName;
        emit userNameChanged(userName);
    }
signals:
     void userNameChanged(QString);
private:
     QString m_userName;
};

#endif // NEXTCLASS_H
