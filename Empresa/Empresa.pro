TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    empleado.cpp \
    secretario.cpp \
    vendedor.cpp \
    jefedezona.cpp

HEADERS += \
    empleado.h \
    secretario.h \
    vendedor.h \
    jefedezona.h
