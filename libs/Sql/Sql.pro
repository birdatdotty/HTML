QMAKE_CXXFLAGS += -std=c++17
TARGET = HTML

SOURCES += ../../HTML/*.cc ../../Js/*.cc ../../Css/*.cc ../../PHP/*.cc ../../Sql/*.cc
HEADERS += ../../HTML/*.h ../../Js/*.h ../../Css/*.h	../../PHP/*.h ../../Sql/*.h

QT = qml
TEMPLATE = lib
CONFIG += staticlib

target.path = /opt/HTML/lib/$$TARGET

headers.path = /opt/HTML/include/$$TARGET
headers.files = $$HEADERS

INSTALLS += target headers

INCLUDEPATH += /opt/HTML/include
LIBS  += -L/opt/HTML/lib/ -lHTML
