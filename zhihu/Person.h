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


#ifndef PERSON_H
#define PERSON_H

#include <QObject>

class Person : public QObject
{
	Q_OBJECT
public:
	virtual ~Person();

	virtual QPixmap avatar() const = 0;
	virtual void setAvatar( const QPixmap &avatar) = 0;

	virtual QString nickName() const = 0;
	virtual void setNickname(const QString &nickname) = 0;

	virtual int sex() const = 0;
	virtual void setSex(const int sex) = 0;

	virtual QString message() const = 0;
	virtual void setMessage() = 0;

	virtual QString job() const = 0;
	virtual void setJob(const QString &job) = 0;

	virtual QString company() const  = 0;
	virtual void setCompany(const QString &company) = 0;

	virtual QString education() const = 0;
	virtual void setEducation( const QString &edu) = 0;

	virtual QString major() const = 0;
	virtual void setMajor( const QString &major ) = 0;

	virtual QString address() const = 0;
	virtual void setAddress() = 0;

	virtual QString website() const = 0;
	virtual void setWebsite( const QString &site) = 0;

signals:

public slots:

protected:
	explicit Person(QObject *parent = 0);

};

#endif // PERSON_H
