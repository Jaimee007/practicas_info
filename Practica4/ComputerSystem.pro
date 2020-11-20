TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    device.cpp \
    keyboard.cpp \
    display.cpp \
    processor.cpp \
    charkeyboard.cpp \
    linekeyboard.cpp

HEADERS += \
    device.h \
    keyboard.h \
    display.h \
    processor.h \
    charkeyboard.h \
    linekeyboard.h

