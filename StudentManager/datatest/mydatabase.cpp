#include "mydatabase.h"
#include <QMessageBox>

//连接数据库
void myDataBase::myConnect(){
	this->db = QSqlDatabase::addDatabase("QMYSQL");
	this->db.setHostName("127.0.0.1");
	this->db.setDatabaseName("zhangxs");
	this->db.setUserName("root");
	this->db.setPassword("8336161");
	if (!this->db.open())
		QMessageBox::warning(NULL, "warning", "faild to connect", QMessageBox::Yes);
}


//关闭数据库连接
void myDataBase::myCloseConnect(){
	this->db.close();
}