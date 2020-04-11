QT += core gui widgets
LIBS += -lssh
CONFIG += c++17

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    qsshsocket.cpp

HEADERS += \
    mainwindow.h \
    qsshsocket.h

FORMS += \
    mainwindow.ui
