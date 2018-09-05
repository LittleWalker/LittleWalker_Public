#ifndef HANDLER_H
#define HANDLER_H

#include <QObject>



//单例
class handler : public QObject
{
    Q_OBJECT
private:
    explicit handler(QObject *parent = 0);

signals:
    void beatMouse();//不需要定义,此信号为自定义信号

public slots:

public:
    static handler* getInstance();
    void addScore();
private:
    static handler* hand;


};

#endif // HANDLER_H
