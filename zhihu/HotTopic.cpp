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


#include "HotTopic.h"

HotTopic::HotTopic(QObject *parent) : Topic(parent)
{

}

HotTopic::~HotTopic()
{

}

void HotTopic::show()
{

}

QString HotTopic::author() const
{
	return m_author;
}

QString HotTopic::title() const
{
	return m_title;
}

int HotTopic::comments() const
{
	return m_comments;
}

QString HotTopic::content() const
{
	return m_content;
}

int HotTopic::likes() const
{
	return m_likes;
}

QString HotTopic::date() const
{
	return m_date;
}


