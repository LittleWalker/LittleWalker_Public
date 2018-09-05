#pragma once
#pragma execution_character_set("utf-8")

#include "ui_deletestudent.h"
#include <QtWidgets/QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql>
#include <QtSql/QSqlTableModel>
#include <QMessageBox>
#include <QtSql/QSqlQuery>
#include <iostream>
#include <QString>
#include "mydatabase.h"

class DeleteStudent:public QDialog{
	Q_OBJECT
public:
	DeleteStudent(QWidget * parent = Q_NULLPTR);

public slots:
	int deletestu();//É¾³ýÑ§Éú
	void myClose();
private:
	Ui::DeleteStu ui;
	myDataBase mydata;

};