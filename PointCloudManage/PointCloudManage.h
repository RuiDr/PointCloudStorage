#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PointCloudManage.h"

class PointCloudManage : public QMainWindow
{
	Q_OBJECT

public:
	PointCloudManage(QWidget *parent = Q_NULLPTR);

private:
	Ui::PointCloudManageClass ui;
};
