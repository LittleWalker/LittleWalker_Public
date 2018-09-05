#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_datatest.h"
#include "addstudent.h"
#include "deletestudent.h"
#include "querystudent.h"

class datatest : public QMainWindow
{
	Q_OBJECT

public:
	datatest(QWidget *parent = Q_NULLPTR);

public slots:
    void add_stu();
	void delete_stu();
	void query_stu();
	void timeUpdate();

private:
	Ui::datatestClass ui;
	AddStudent a;
	DeleteStudent b;
	QueryStudent c;
};
