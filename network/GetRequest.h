/**
 * Copyright (c) 2015 Yuri Young, All rights reserved.
 * http://www.newdebug.com
 * @author Yuri Young
 * @email yuri.young@newdebug.com
 * @description Project created by QtCreator.
 * @date 2015/3/31
 * @filename
 * @class
 */


#ifndef GETREQUEST_H
#define GETREQUEST_H

#include <QObject>
#include "Request.h"
#include <QNetworkAccessManager>

class RequestContext;

class GetRequest : public Request
{
	Q_OBJECT
public:
	GetRequest(QObject *parent = 0);
	~GetRequest();

	virtual void handle(RequestContext *context);

private slots:
	void finished();
	void readyRead();

private:
	QNetworkAccessManager*		m_manager;
	QNetworkReply*              m_reply;
};

#endif // GETREQUEST_H
