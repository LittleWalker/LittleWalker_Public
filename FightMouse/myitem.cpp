#include "myitem.h"
#include <QGraphicsPixmapItem>
#include <QPixmap>

#include "handler.h"

myItem::myItem()
{
    this->setPixmap(QPixmap(":/bg/img/bgblue.png"));
    this->start = false;
    this->mouse = false;

}


void myItem::setPic(QString path)
{
    this->setPixmap(QPixmap(path));
}

void myItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(this->isStart()){
        handler* hand = handler::getInstance();
        if(this->isMouse()){
           hand->addScore();
        }
    }
}

void myItem::setMouse(bool mouse)
{
    this->mouse = mouse;
}

bool myItem::isMouse()
{
    return this->mouse;
}

void myItem::setStart(bool start)
{
    this->start = start;
}

bool myItem::isStart()
{
    return this->start;
}
