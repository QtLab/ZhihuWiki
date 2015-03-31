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


#ifndef TOPICFACTORY_H
#define TOPICFACTORY_H

#include <QObject>
#include "Factory.h"

class Topic;
//class Factory;

class TopicFactory : public Factory
{
	Q_OBJECT
public:
	explicit TopicFactory(QObject *parent = 0);
	virtual ~TopicFactory();

	virtual Topic *createTopic();

signals:

public slots:


protected:

};

#endif // TOPICFACTORY_H
