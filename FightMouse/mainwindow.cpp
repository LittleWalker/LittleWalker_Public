#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "handler.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->sc = new myScene;
    connect(this->ui->btn_start,SIGNAL(clicked()),sc,SLOT(startGame()));
    connect(this->ui->btn_pause,SIGNAL(clicked()),sc,SLOT(pauseGame()));
    connect(this->ui->btn_stop,SIGNAL(clicked(bool)),sc,SLOT(stopGame()));
    this->ui->graphicsView->setScene(sc);
    this->score = 0;
    handler* hand = handler::getInstance();
    connect(hand,SIGNAL(beatMouse()),this,SLOT(updateScore()));



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::updateScore(){
    this->score += 10;
    this->ui->lcdNumber->display(score);
}


