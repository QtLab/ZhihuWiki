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


#include "LatestTopic.h"

LatestTopic::LatestTopic(QObject *parent) : Topic(parent)
{

}

LatestTopic::~LatestTopic()
{

}

void LatestTopic::show()
{

}

QString LatestTopic::author() const
{
	return m_author;
}

QString LatestTopic::title() const
{
	return m_title;
}

int LatestTopic::comments() const
{
	return m_comments;
}

QString LatestTopic::content() const
{
	return m_content;
}

int LatestTopic::likes() const
{

	return m_likes;
}

QString LatestTopic::date() const
{
	return m_date;
}

