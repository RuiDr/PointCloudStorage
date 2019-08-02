#include "PointCloudManage.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PointCloudManage w;
	w.show();
	return a.exec();
}
