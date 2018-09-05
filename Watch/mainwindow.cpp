#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->count_timer = new QTimer;
    connect(this->count_timer,SIGNAL(timeout()),this,SLOT(updateTime()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::updateTime()
{
    QTime current = QTime::currentTime();
    int t = this->base_Time.msecsTo(current);
    QTime show_Time(0,0,0,0);
    show_Time = show_Time.addMSecs(t);
    showStr = show_Time.toString("hh:mm:ss:zzz");
    this->ui->lcdNumber->display(showStr);

}

//开始按钮
void MainWindow::on_btn_start_clicked()
{
    this->base_Time = QTime::currentTime();
    this->count_timer->start(1);
    this->ui->btn_start->setEnabled(false);
}

//停止按钮
void MainWindow::on_btn_stop_clicked()
{

    if(this->ui->btn_stop-> text() == "停止")
    {
        this->count_timer->stop();
        this->ui->btn_stop->setText("清零");
        this->ui->btn_pause->setEnabled(false);
    }else {
        this->ui->lcdNumber->display("00:00:00:000");
        this->ui->textBrowser->clear();
        this->ui->btn_stop->setText("停止");
        this->ui->btn_start->setEnabled(true);
        this->ui->btn_pause->setEnabled(true);
    }

}

//暂停按钮
void MainWindow::on_btn_pause_clicked()
{
    static QTime pauseTime;
    QTime cut;
    if(this->ui->btn_pause->text() == "暂停")
    {
        pauseTime = QTime::currentTime();

        this->count_timer->stop();
        this->ui->btn_pause->setText("继续");
        this->ui->btn_start->setEnabled(false);
        this->ui->btn_stop->setEnabled(false);

    }
    else {
        cut = QTime::currentTime();
        int t = pauseTime.msecsTo(cut);
        this->base_Time = this->base_Time.addMSecs(t);
        this->count_timer->start(1);
        this->ui->btn_pause->setText("暂停");
        this->ui->btn_stop->setEnabled(true);

    }


}

//打点按钮
void MainWindow::on_btn_drop_clicked()
{
    this->ui->textBrowser->append(this->showStr);
}
