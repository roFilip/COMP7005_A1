#-------------------------------------------------
#
# Project created by QtCreator 2015-09-22T19:20:01
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = COMP7005_A1_Server
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    serverthread.cpp

HEADERS  += mainwindow.h \
    serverthread.h

FORMS    += mainwindow.ui
