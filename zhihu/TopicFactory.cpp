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


#include "TopicFactory.h"
#include "Topic.h"
#include "LatestTopic.h"

TopicFactory::TopicFactory(QObject *parent) : Factory(parent)
{

}

TopicFactory::~TopicFactory()
{

}

Topic *TopicFactory::createTopic()
{
	return new LatestTopic();
}

