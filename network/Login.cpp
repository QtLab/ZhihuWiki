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


#include "Login.h"
#include <QDebug>

Login::Login(QObject *parent) :
	RequestContext(parent)
{
}

Login::Login(const QString &username, const QString &password) :
	m_username(username), m_password(password)
{
	m_postData = QString("_xsrf=32fe9fcfb83aab0201b4f1fa45fc48ce&email=%1&password=%2&rememberme=y")
			.arg(m_username).arg(m_password).toLocal8Bit();
}

Login::~Login()
{
}

void Login::request()
{
	this->request(m_username, m_password);
}

void Login::request(const QString &name, const QString &psw)
{
	qDebug() << "Login request: " << name << psw;
	m_username = name;
	m_password = psw;
	m_postData = QString("_xsrf=32fe9fcfb83aab0201b4f1fa45fc48ce&email=%1&password=%2&rememberme=y")
			.arg(m_username).arg(m_password).toLocal8Bit();

	m_networkRequest.setUrl(m_loginUrl);
	m_networkRequest.setHeader(QNetworkRequest::ContentTypeHeader, QVariant("application/x-www-form-urlencoded; charset=utf-8"));
	m_networkRequest.setRawHeader(QByteArray("AcceptEncoding"), QByteArray("gzip, deflate"));
	m_networkRequest.setRawHeader(QByteArray("Accept"), QByteArray("application/json"));
	m_networkRequest.setRawHeader(QByteArray("Connection"), QByteArray("keep-alive"));
	m_networkRequest.setRawHeader(QByteArray("User-Agent"), QByteArray("Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/41.0.2272.101 Safari/537.36"));
	m_networkRequest.setRawHeader(QByteArray("Host"), m_host);
//	m_networkRequest.setRawHeader(QByteArray("Authorization"), QByteArray("NGJjODk5ZjI2OTVmNDE3ZWI3MzNmM2QyMWE3YmUwOmQxNzlhMWUxMWYyMzQ3YTQ4YzdmOTI4ZDM1NDYyMQ=="));
//	m_networkRequest.setRawHeader(QByteArray("XAPIVERSION"), QByteArray("3.0"));

}

void Login::setUrl(const QString &url)
{
	m_loginUrl = url;
}

QString Login::url() const
{
	return m_loginUrl;
}
QString Login::username() const
{
	return m_username;
}

void Login::setUsername(const QString &username)
{
	m_username = username;
}
QString Login::password() const
{
	return m_password;
}

void Login::setPassword(const QString &password)
{
	m_password = password;
}
QByteArray Login::host() const
{
	return m_host;
}

void Login::setHost(const QByteArray &host)
{
	m_host = host;
}

const QNetworkRequest &Login::networkRequest() const
{
	return m_networkRequest;
}

void Login::setNetworkRequest(const QNetworkRequest &networkRequest)
{
	m_networkRequest = networkRequest;
}
QByteArray Login::requestData() const
{
	return m_postData;
}

void Login::setRequestData(const QByteArray &postData)
{
	m_postData = postData;
}





