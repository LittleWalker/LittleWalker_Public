#pragma once
#pragma execution_character_set("utf-8")

#include "ui_addstudent.h"
#include <QtWidgets/QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql>
#include <QtSql/QSqlTableModel>
#include <QMessageBox>
#include <QtSql/QSqlQuery>
#include <iostream>
#include <QString>
#include "mydatabase.h"


class AddStudent :public QDialog{
	Q_OBJECT;
public:
	AddStudent(QWidget * parent = Q_NULLPTR);

public slots:
    int myInsert();//Ìí¼ÓÑ§Éú
	void myClose();

private:
	Ui::AddStudents ui;
	myDataBase mydata;

};

