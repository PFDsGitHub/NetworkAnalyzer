#-------------------------------------------------
#
# Project created by QtCreator 2018-11-14T15:42:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NA250B
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    config.cpp \
    newdlg.cpp \
    testtypedialog.cpp \
    mytextedit.cpp

HEADERS  += mainwindow.h \
    config.h \
    newdlg.h \
    testtypedialog.h \
    mytextedit.h

FORMS    += mainwindow.ui \
    newdlg.ui \
    testtypedialog.ui

RESOURCES += \
    na250b.qrc
