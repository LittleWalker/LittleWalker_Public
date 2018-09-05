#-------------------------------------------------
#
# Project created by QtCreator 2018-08-04T13:45:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FightMouse
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    myscene.cpp \
    myitem.cpp \
    handler.cpp

HEADERS  += mainwindow.h \
    myscene.h \
    myitem.h \
    handler.h

FORMS    += mainwindow.ui

RESOURCES += \
    myimg.qrc
