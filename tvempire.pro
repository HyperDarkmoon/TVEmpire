QT += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# Uncomment the following line if you want to emit warnings for deprecated Qt features
# DEFINES += QT_DEPRECATED_WARNINGS

# Resources configuration
RESOURCES += resource.qrc

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
# Adjust installation path based on your deployment needs
win32: target.path = $$OUT_PWD/debug
unix:!android: target.path = /opt/$${TARGET}/bin

!isEmpty(target.path): INSTALLS += target
