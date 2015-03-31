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


#ifndef LATESTTOPIC_H
#define LATESTTOPIC_H

#include <QObject>
#include "Topic.h"

class LatestTopic : public Topic
{
	Q_OBJECT
public:
	LatestTopic(QObject *parent = 0);
	~LatestTopic();

	virtual void show();

	virtual QString author() const;
	virtual QString title() const;
	virtual int comments() const;
	virtual QString content() const;
	virtual int likes() const;
	virtual QString date() const;

private:
	QString m_author;
	QString m_title;
	int		m_comments;
	QString m_content;
	int		m_likes;
	QString m_date;
};

#endif // LATESTTOPIC_H
