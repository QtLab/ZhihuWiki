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


#ifndef FACTORY_H
#define FACTORY_H

#include <QObject>
class Topic;

class Factory : public QObject
{
	Q_OBJECT
public:
	virtual ~Factory() = 0;
	virtual Topic *createTopic() = 0;

signals:

public slots:
protected:
	explicit Factory(QObject *parent = 0);

};

#endif // FACTORY_H
