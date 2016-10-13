#-------------------------------------------------
#
# Project created by QtCreator 2016-10-02T20:12:12
#
#-------------------------------------------------

QT       += core gui serialport


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ustools
TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++0x

SOURCES += main.cpp\
        mainwindow.cpp \
    slavethread.cpp \
    processo.cpp

HEADERS  += mainwindow.h \
    slavethread.h \
    processo.h

FORMS    += mainwindow.ui
