#include "datatest.h"
#include <QTimer>
#include <qdatetime.h>

datatest::datatest(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->setWindowTitle("学生管理系统");
	QTimer* timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(timeUpdate()));
	timer->start(1000);
	connect(this->ui.btn_add, SIGNAL(clicked()), this, SLOT(add_stu()));
	connect(this->ui.act_add, SIGNAL(triggered()), this, SLOT(add_stu()));
	connect(this->ui.btn_delete, SIGNAL(clicked()), this, SLOT(delete_stu()));
	connect(this->ui.act_delete, SIGNAL(triggered()), this, SLOT(delete_stu()));
	connect(this->ui.btn_find, SIGNAL(clicked()), this, SLOT(query_stu()));
	connect(this->ui.act_find, SIGNAL(triggered()), this, SLOT(query_stu()));
}


void datatest::add_stu(){
	this->a.show();
}

void datatest::delete_stu(){
	this->b.show();
}

void datatest::query_stu(){
	this->c.show();
}

void datatest::timeUpdate(){
	QDateTime time = QDateTime::currentDateTime();
	QString timestr = time.toString("yyyy-MM-dd hh:mm:ss");
	ui.label_time->setText(timestr);
}