#-------------------------------------------------
#
# Project created by QtCreator 2022-03-11T13:44:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = kza_bridge_system_client_0311
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        kzamainwindow.cpp \
    login.cpp \
    logmainwindow.cpp

HEADERS += \
        kzamainwindow.h \
    login.h \
    logmainwindow.h

FORMS += \
        kzamainwindow.ui \
    login.ui \
    logmainwindow.ui
