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


#ifndef LOGIN_H
#define LOGIN_H
#include "RequestContext.h"

#include <QObject>
#include <QString>
#include <QByteArray>
#include <QNetworkRequest>

class Login : public RequestContext
{
	Q_OBJECT
public:
	Login(QObject *parent = 0);
	Login(const QString &username, const QString &password);

	~Login();

	virtual void request();

	virtual void setUrl(const QString &url);
	virtual QString url() const;

	virtual const QNetworkRequest &networkRequest() const;
	virtual void setNetworkRequest(const QNetworkRequest &networkRequest);

	virtual QByteArray requestData() const;
	virtual void setRequestData(const QByteArray &postData);

	QString username() const;
	void setUsername(const QString &username);

	QString password() const;
	void setPassword(const QString &password);

	QByteArray host() const;
	void setHost(const QByteArray &host);

private:
	void request(const QString &name, const QString &psw);

private:
	QNetworkRequest m_networkRequest;
	QString		m_loginUrl;
	QString		m_username;
	QString		m_password;

	QByteArray	m_postData;
	QByteArray	m_host;

//	QByteArray	m_encodeing;
//	QByteArray	m_accept;
//	QByteArray	m_connection;
//	QByteArray	m_userAgent;
//	QByteArray	m_contentType;
//	QByteArray	m_authorization;
//	QByteArray	m_xapiVersion;
};

#endif // LOGIN_H
