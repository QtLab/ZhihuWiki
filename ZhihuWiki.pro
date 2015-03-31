#-------------------------------------------------
#
# Project created by QtCreator 2015-03-31T00:56:19
#
#-------------------------------------------------

QT       += core gui network quickwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ZhihuWiki
TEMPLATE = app


SOURCES += main.cpp\
    network/Request.cpp \
    network/GetRequest.cpp \
    network/PostRequest.cpp \
    network/RequestContext.cpp \
    network/Login.cpp \
    ui/MainPanel.cpp \
    ui/QuickPanel.cpp \
    zhihu/TopicFactory.cpp \
    zhihu/Topic.cpp \
    zhihu/Factory.cpp \
    zhihu/HotTopic.cpp \
    zhihu/LatestTopic.cpp

HEADERS  += \
    network/Request.h \
    network/GetRequest.h \
    network/PostRequest.h \
    network/RequestContext.h \
    network/Login.h \
    ui/MainPanel.h \
    ui/QuickPanel.h \
    zhihu/TopicFactory.h \
    zhihu/Topic.h \
    zhihu/Factory.h \
    zhihu/HotTopic.h \
    zhihu/LatestTopic.h

DISTFILES += \
    doc/analyze.txt \
    doc/content.txt \
    qml/main.qml \
    qml/PanelHeader.qml

INCLUDEPATH += $$PWD/ui
INCLUDEPATH += $$PWD/network
INCLUDEPATH += $$PWD/zhihu

FORMS += \
    ui/MainPanel.ui

RESOURCES += \
    res.qrc
