#include "deletestudent.h"

DeleteStudent::DeleteStudent(QWidget* parent)
	:QDialog(parent)
{
	ui.setupUi(this);
	this->setWindowTitle("学生信息删除");
	connect(this->ui.btn_ok, SIGNAL(clicked()), this, SLOT(deletestu()));
	connect(this->ui.btn_cancel, SIGNAL(clicked()), this, SLOT(myClose()));
}



int DeleteStudent::deletestu(){
	this->mydata.myConnect();

	QString id_1;
	id_1 = this->ui.le_id->text();

	QSqlQuery myQuery;
	myQuery.prepare("delete from user where id=:id");
	myQuery.bindValue(":id", id_1);
	myQuery.exec();

	QMessageBox::warning(NULL, "SUCCESS", "succeed to delete the student!");
	this->mydata.myCloseConnect();
	return 0;
}

void DeleteStudent::myClose(){
	this->close();
}