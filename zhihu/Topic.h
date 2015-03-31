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


#ifndef TOPIC_H
#define TOPIC_H

#include <QObject>

class Topic : public QObject
{
	Q_OBJECT
public:
	virtual ~Topic() = 0;

	virtual void show() = 0;

	virtual QString author() const = 0;
	virtual QString title() const = 0;
	virtual int comments() const = 0;
	virtual QString content() const = 0;
	virtual int likes() const = 0;
	virtual QString date() const = 0;

signals:

public slots:

protected:
	explicit Topic(QObject *parent = 0);

};

#endif // TOPIC_H
