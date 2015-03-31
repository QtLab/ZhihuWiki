/**
 * Copyright (c) 2015 Yuri Young, All rights reserved.
 * http://www.newdebug.com
 * @author Yuri Young
 * @email yuri.young@newdebug.com
 * @description Project created by QtCreator.
 * @date 2015/3/31
 * @filename main.cpp
 * @class
 */

#include "MainPanel.h"
#include "Request.h"
#include "RequestContext.h"
#include "PostRequest.h"
#include "GetRequest.h"
#include "Login.h"

#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	MainPanel panel;
	panel.show();

//	Request* post = new PostRequest;
////	Request* get = new GetRequest;
///		Login* login = new Login();
///		get->hadnle(login);

	// 登录有问题，暂时不使用登录功能
//	Login* login = new Login("", "");
//	login->setHost("www.zhihu.com");
//	login->setUrl( "http://www.zhihu.com/#signin" );
//	post->handle(login);

	return a.exec();
}
