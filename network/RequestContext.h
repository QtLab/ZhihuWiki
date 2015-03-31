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


#ifndef REQUESTCONTEXT_H
#define REQUESTCONTEXT_H

#include <QObject>
#include <QString>
#include <QNetworkRequest>

class RequestContext : public QObject
{
	Q_OBJECT
public:
	virtual ~RequestContext();
	virtual void request() = 0;

	virtual void setUrl(const QString &url) = 0;
	virtual QString url() const = 0;

	virtual QByteArray requestData() const = 0;
	virtual void setRequestData(const QByteArray &data) = 0;

	virtual const QNetworkRequest &networkRequest() const = 0;
	virtual void setNetworkRequest(const QNetworkRequest &networkRequest) = 0;

signals:

public slots:

protected:
	explicit RequestContext(QObject *parent = 0);

private:

};

#endif // REQUESTCONTEXT_H
