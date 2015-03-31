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


#ifndef POSTREQUEST_H
#define POSTREQUEST_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkCookieJar>

#include "Request.h"

class RequestContext;

class PostRequest : public Request
{
	Q_OBJECT
public:
	PostRequest(QObject *parent = 0);
	~PostRequest();

	virtual void handle(RequestContext *context);

signals:

private slots:
	void finished();
	void readyRead();

private:
	QNetworkAccessManager*		m_manager;
	QNetworkCookieJar*			m_cookie;
	QNetworkReply*              m_reply;

};

#endif // POSTREQUEST_H
