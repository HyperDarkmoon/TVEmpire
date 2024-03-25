QT += core gui widgets network charts multimedia multimediawidgets
QT += core gui widgets network printsupport


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# Uncomment the following line if you want to emit warnings for deprecated Qt features
# DEFINES += QT_DEPRECATED_WARNINGS

# Resources configuration
RESOURCES += resource.qrc

SOURCES += \
    addemission.cpp \
    addemployee.cpp \
    contract.cpp \
    crudequipment.cpp \
    dbconnection.cpp \
    emission.cpp \
    emissionedit.cpp \
    employee.cpp \
    employeeedit.cpp \
    equipment.cpp \
    form2.cpp \
    main.cpp \
    mainwindow.cpp \
    pdfexport.cpp \
    scenes.cpp \
    search.cpp \
    signature.cpp \
    sponsor.cpp \
    addequipment.cpp \
    usersession.cpp \
    videoplayerdialog.cpp \
    weatherapicall.cpp

HEADERS += \
    addemission.h \
    addemployee.h \
    contract.h \
    crudequipment.h \
    dbconnection.h \
    emission.h \
    emissionedit.h \
    employee.h \
    employeeedit.h \
    equipment.h \
    form2.h \
    mainwindow.h \
    pdfexport.h \
    scenes.h \
    search.h \
    signature.h \
    sponsor.h \
    addequipment.h \
    usersession.h \
    videoplayerdialog.h \
    weatherapicall.h

FORMS += \
    addemission1.ui \
    addemployee.ui \
    contract.ui \
    emission.ui \
    emissionedit.ui \
    employee.ui \
    employeeedit.ui \
    equipment.ui \
    form2.ui \
    mainwindow.ui \
    scenes.ui \
    sponsor.ui \
    addequipment.ui \
    videoplayerdialog.ui

# Default rules for deployment.
# Adjust installation path based on your deployment needs
win32: target.path = $$OUT_PWD/debug
unix:!android: target.path = /opt/$${TARGET}/bin

!isEmpty(target.path): INSTALLS += target

QT+= sql \
    widgets printsupport
