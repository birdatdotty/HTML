QMAKE_CXXFLAGS += -std=c++17

SOURCES += *.cc
HEADERS += *.h

QT = qml
TEMPLATE = lib
CONFIG += staticlib

target.path = /opt/HTML/lib/

headers.path = /opt/HTML/include/$$TARGET
headers.files = $$HEADERS

INSTALLS += target headers

INCLUDEPATH += $$PWD
