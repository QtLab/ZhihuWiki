/**
 * Copyright (c) 2015 Yuri Young, All rights reserved.
 * http://www.newdebug.com
 * @author Yuri Young
 * @email yuri.young@newdebug.com
 * @description Project created by QtCreator.
 * @date 2015/3/31
 * @filename MainPanel.cpp
 * @class MainPanel
 */


#include "MainPanel.h"
#include "ui_MainPanel.h"

MainPanel::MainPanel(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::MainPanel)
{
	ui->setupUi(this);
}

MainPanel::~MainPanel()
{
	delete ui;
}
