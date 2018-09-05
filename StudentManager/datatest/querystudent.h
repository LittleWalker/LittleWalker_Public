#pragma once

#include <iostream>
#include "ui_querystudent.h"
#include <QtWidgets/QDialog>
#include "mydatabase.h"
#pragma execution_character_set("utf-8")

class QueryStudent :public QDialog{
	Q_OBJECT
public:
	QueryStudent(QWidget* parent = Q_NULLPTR);

public slots:
	int querystudent();

private:
	Ui::QUERY ui;
	myDataBase mydata;
};

