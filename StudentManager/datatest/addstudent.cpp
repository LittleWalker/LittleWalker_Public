#include "addstudent.h"

AddStudent::AddStudent(QWidget * parent)
	:QDialog(parent)
{
	ui.setupUi(this);

	this->setWindowTitle("学生信息添加");
	connect(this->ui.btn_ok, SIGNAL(clicked()), this, SLOT(myInsert()));
	connect(this->ui.btn_cancel, SIGNAL(clicked()), this, SLOT(myClose()));
}






int AddStudent::myInsert(){
	this->mydata.myConnect();//连接到数据库“zhangxs”

	//get the message from the text
	QString id_1 = this->ui.le_id->text();
	QString name_1 = this->ui.le_name->text();
	QString age_1 = this->ui.le_age->text();
	QString mobile_1 = this->ui.le_mobile->text();
	QString college_1 = this->ui.le_college->text();



	//check the message 
	for (int i = 0; i < id_1.length(); i++){
		if (id_1[i] < '0' || id_1[i] > '9'){
			QMessageBox::warning(NULL, "id ERROR", "your id is error ,please input again!");
			return -1;
		}
	}

	for (int i = 0; i < name_1.length(); i++){
		if (name_1[i] >= '0' && name_1[i] <= '9'){
			QMessageBox::warning(NULL, "name ERROR", "your name is error ,please input again!");
			return -1;
		}
	}

	for (int i = 0; i < age_1.length(); i++){
		int p = age_1.toInt();
		if (p < 1 || p>200){
			QMessageBox::warning(NULL, "age ERROR", "your age is error ,please input again!");
			return -1;
		}
	}
	if (mobile_1.length() != 11){
		QMessageBox::warning(NULL, "mobile ERROR", "your mobile is error ,please input again!");
		return -1;
	}



	QSqlQuery m_query;
	m_query.prepare("insert into user(id,name,age,mobile,college)"
		"values (:id,:name,:age,:mobile,:college)");
	m_query.bindValue(":id", id_1);
	m_query.bindValue(":name", name_1);
	m_query.bindValue(":age", age_1);
	m_query.bindValue(":mobile", mobile_1);
	m_query.bindValue(":college", college_1);
	m_query.exec();

	QMessageBox::warning(NULL, "success", "ok,succeed to add a student!", QMessageBox::Yes);


	//清屏
	this->ui.le_id->clear();
	this->ui.le_name->clear();
	this->ui.le_age->clear();
	this->ui.le_mobile->clear();
	this->ui.le_college->clear();
	this->ui.le_id->setFocus();

	this->mydata.myCloseConnect();//关闭数据库连接
	return 0;
}

void AddStudent::myClose(){
	this->close();
}