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


#include "PostRequest.h"
#include "RequestContext.h"
#include <QNetworkReply>

#include <QDebug>

PostRequest::PostRequest(QObject *parent) :
	Request(parent)
{
	m_manager = new QNetworkAccessManager(this);
	m_reply = NULL;
	m_manager->setNetworkAccessible(QNetworkAccessManager::Accessible);
	m_cookie = new QNetworkCookieJar(this);
	m_manager->setCookieJar(m_cookie);

}

PostRequest::~PostRequest()
{
	delete m_reply;
	delete m_cookie;
	delete m_manager;
}

void PostRequest::handle(RequestContext *context)
{
	context->request();
	const QNetworkRequest request = context->networkRequest();
	m_reply = m_manager->post(request, context->requestData());

	connect(m_reply, SIGNAL(finished()), this, SLOT(finished()));
	connect(m_reply, SIGNAL(readyRead()), this, SLOT(readyRead()));
}

void PostRequest::finished()
{
	if (m_reply->error())
	{
		qDebug() << "Login failed: " << m_reply->errorString();
	}
	else
	{
		qDebug() << "Login succesed.";
	}

	m_reply->close();
	m_reply->deleteLater();
}

void PostRequest::readyRead()
{
	qDebug() << m_reply->readAll();
}

