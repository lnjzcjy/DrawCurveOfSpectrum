#-------------------------------------------------
#
# Project created by QtCreator 2015-11-18T14:01:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DrawCurveOfSpectrum
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    DSRreadTheFile.cc \
    DSDrawThePicture.cc

HEADERS  += mainwindow.h \
    DSRreadTheFile.h \
    DSDrawThePicture.h

FORMS    += mainwindow.ui
