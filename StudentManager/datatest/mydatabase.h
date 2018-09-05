#ifndef MYDATABASE_H
#define MYDATABASE_H


#include <QtSql/QSqlDatabase>
#include <QtSql>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlQuery>
#include <iostream>

class myDataBase{
public:
	void myConnect();
	void myCloseConnect();
private:
	QSqlDatabase db;
};

#endif 