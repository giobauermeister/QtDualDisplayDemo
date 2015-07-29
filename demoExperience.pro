#-------------------------------------------------
#
# Project created by QtCreator 2015-06-22T11:03:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = demoExperience
TEMPLATE = app


SOURCES += main.cpp\
        demoembarcados.cpp

HEADERS  += demoembarcados.h

FORMS    += demoembarcados.ui


# deployment on Linux
unix {
    target.path = /usr/bin/
    //qml.files = QtAutomotiveClusterDemoDesign/*
    INSTALLS += target \
        qml \
}

RESOURCES += \
    resources.qrc

contains(QT_ARCH,arm) {
    DEFINES += HOST_ARM
    CONFIG += arm # Add arm so we can use arm {}
}
