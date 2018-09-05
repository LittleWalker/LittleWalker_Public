#include "datatest.h"
#include <QtWidgets/QApplication>
#include "addstudent.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	datatest w;
	w.show();

	
	return a.exec();
}
