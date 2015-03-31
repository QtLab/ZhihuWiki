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


#ifndef REQUEST_H
#define REQUEST_H

#include <QObject>

class RequestContext;

class Request : public QObject
{
	Q_OBJECT
public:
	virtual ~Request();

	virtual void handle(RequestContext * context) = 0;

signals:

public slots:

protected:
	explicit Request(QObject *parent = 0);

};

#endif // REQUEST_H
