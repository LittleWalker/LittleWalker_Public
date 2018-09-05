#include "querystudent.h"
#include <qsqlquerymodel.h>
#include <QSqlQuery>


QueryStudent::QueryStudent(QWidget* parent)
	:QDialog(parent)
{
	ui.setupUi(this);
	this->setWindowTitle("学生信息查询");
	connect(this->ui.btn_ok, SIGNAL(clicked()), this, SLOT(querystudent()));
	connect(this->ui.btn_cancel, SIGNAL(clicked()), this, SLOT(close()));

}

int QueryStudent::querystudent(){
	this->mydata.myConnect();

	QString name_1 = this->ui.le_name->text();
	QString id_1 = this->ui.le_id->text();

	QSqlQueryModel* model = new QSqlQueryModel(ui.tableView);
	model->setQuery("select * from user where id='"+id_1+"' and name = '"+name_1+"'");
	model->setHeaderData(0, Qt::Horizontal, tr("学号"));
	model->setHeaderData(1, Qt::Horizontal, tr("姓名"));
	model->setHeaderData(2, Qt::Horizontal, tr("年龄"));
	model->setHeaderData(3, Qt::Horizontal, tr("电话"));
	model->setHeaderData(4, Qt::Horizontal, tr("学院"));

	ui.tableView->setModel(model);
	
	this->mydata.myCloseConnect();
	return 0;
}

