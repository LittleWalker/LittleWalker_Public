#include "myscene.h"
#include <stdlib.h>


myScene::myScene(QObject *parent) : QGraphicsScene(parent)
{
    int i = 0;
    for(;i<16;i++){
        this->item[i] = new myItem;
        this->item[i]->setPos(i/4*this->item[i]->boundingRect().width(),
                              i%4*this->item[i]->boundingRect().height());
        this->addItem(this->item[i]);
    }
    this->ptimer = new QTimer();
    connect(this->ptimer,SIGNAL(timeout()),this,SLOT(showMouse()));
}

void myScene::showMouse()
{
    //随机一个数0~15
    //1~3
    int count = rand()%3 + 1;
    for(int i = 0;i < 16; i++){
        this->item[i]->setPic(":/bg/img/bgblue.png");
        this->item[i]->setMouse(false);
    }
    for(int i = 0;i < count; i++){
        int index = rand() % 16;
        this->item[index]->setPic(":/bg/img/bgred.png");
        this->item[index]->setMouse(true);
    }
}

void myScene::startGame()
{
    for(int i = 0;i < 16; i++){
        this->item[i]->setStart(true);
    }
    this->ptimer->start(800);

}

void myScene::pauseGame()
{
    for(int i = 0;i < 16; i++){
        this->item[i]->setStart(false);
    }
    this->ptimer->stop();
}

void myScene::stopGame()
{
    for(int i = 0;i < 16; i++){
        this->item[i]->setStart(false);
    }
    this->ptimer->stop();
    for(int i = 0;i < 16; i++){
        this->item[i]->setPic(":/bg/img/bgblue.png");
        this->item[i]->setMouse(false);
    }

}
