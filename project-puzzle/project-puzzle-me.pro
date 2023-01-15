#-------------------------------------------------
#
# Project created by QtCreator 2022-12-31T11:02:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = project-puzzle-me
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    playerwindow.cpp \
    signupwindow.cpp \
    menu.cpp \
    scoreboard.cpp \
    loginwindow.cpp \
    adminlogin.cpp \
    boardset.cpp \
    about.cpp \
    three.cpp \
    four.cpp \
    five.cpp \
    board9.cpp \
    board16.cpp \
    board25.cpp \
    sure.cpp

HEADERS  += \
    playerwindow.h \
    signupwindow.h \
    menu.h \
    scoreboard.h \
    loginwindow.h \
    adminlogin.h \
    boardset.h \
    about.h \
    three.h \
    four.h \
    five.h \
    board9.h \
    board16.h \
    board25.h \
    sure.h

FORMS    += \
    playerwindow.ui \
    signupwindow.ui \
    menu.ui \
    scoreboard.ui \
    loginwindow.ui \
    adminlogin.ui \
    boardset.ui \
    about.ui \
    three.ui \
    four.ui \
    five.ui \
    board9.ui \
    board16.ui \
    board25.ui \
    sure.ui
