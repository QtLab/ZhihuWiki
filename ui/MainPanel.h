/**
 * Copyright (c) 2015 Yuri Young, All rights reserved.
 * http://www.newdebug.com
 * @author Yuri Young
 * @email yuri.young@newdebug.com
 * @description Project created by QtCreator.
 * @date 2015/3/31
 * @filename MainPanel.h
 * @class MainPanel
 */


#ifndef MAINPANEL_H
#define MAINPANEL_H

#include <QWidget>

namespace Ui {
class MainPanel;
}

class MainPanel : public QWidget
{
	Q_OBJECT

public:
	explicit MainPanel(QWidget *parent = 0);
	~MainPanel();

private:
	Ui::MainPanel *ui;
};

#endif // MAINPANEL_H
