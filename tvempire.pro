QT += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# Uncomment the following line if you want to emit warnings for deprecated Qt features
# DEFINES += QT_DEPRECATED_WARNINGS

# Resources configuration
RESOURCES += resource.qrc

SOURCES += \
    addemission.cpp \
    addemployee.cpp \
    crudemployee.cpp \
    crudequipment.cpp \
    dbconnection.cpp \
    emission.cpp \
    employee.cpp \
    equipment.cpp \
    form2.cpp \
    main.cpp \
    mainwindow.cpp \
    scenes.cpp \
    sponsor.cpp

HEADERS += \
    addemission.h \
    addemployee.h \
    crudemployee.h \
    crudequipment.h \
    dbconnection.h \
    emission.h \
    employee.h \
    equipment.h \
    form2.h \
    mainwindow.h \
    scenes.h \
    sponsor.h

FORMS += \
    addemission1.ui \
    addemployee.ui \
    emission.ui \
    employee.ui \
    equipment.ui \
    form2.ui \
    mainwindow.ui \
    scenes.ui \
    sponsor.ui

# Default rules for deployment.
# Adjust installation path based on your deployment needs
win32: target.path = $$OUT_PWD/debug
unix:!android: target.path = /opt/$${TARGET}/bin

!isEmpty(target.path): INSTALLS += target

QT+= sql
CONFIG += console
