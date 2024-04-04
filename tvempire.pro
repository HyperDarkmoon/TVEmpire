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
    chatbox.cpp \
    contract.cpp \
    crudequipment.cpp \
    dbconnection.cpp \
    emission.cpp \
    emissionedit.cpp \
    employee.cpp \
    employeeedit.cpp \
    equipment.cpp \
    forgotpassword.cpp \
    form2.cpp \
    geminiapi.cpp \
    main.cpp \
    mainwindow.cpp \
    pdfexport.cpp \
    qrcodegen.cpp \
    scenes.cpp \
    search.cpp \
    signature.cpp \
    smtp/src/emailaddress.cpp \
    smtp/src/mimeattachment.cpp \
    smtp/src/mimecontentformatter.cpp \
    smtp/src/mimefile.cpp \
    smtp/src/mimehtml.cpp \
    smtp/src/mimeinlinefile.cpp \
    smtp/src/mimemessage.cpp \
    smtp/src/mimemultipart.cpp \
    smtp/src/mimepart.cpp \
    smtp/src/mimetext.cpp \
    smtp/src/quotedprintable.cpp \
    smtp/src/smtpclient.cpp \
    sponsor.cpp \
    addequipment.cpp \
    usersession.cpp \
    videoplayerdialog.cpp \
    weatherapicall.cpp

HEADERS += \
    addemission.h \
    addemployee.h \
    chatbox.h \
    contract.h \
    crudequipment.h \
    dbconnection.h \
    emission.h \
    emissionedit.h \
    employee.h \
    employeeedit.h \
    equipment.h \
    forgotpassword.h \
    form2.h \
    geminiapi.h \
    mainwindow.h \
    pdfexport.h \
    qrcodegen.h \
    scenes.h \
    search.h \
    signature.h \
    smtp/src/SmtpMime \
    smtp/src/emailaddress.h \
    smtp/src/mimeattachment.h \
    smtp/src/mimecontentformatter.h \
    smtp/src/mimefile.h \
    smtp/src/mimehtml.h \
    smtp/src/mimeinlinefile.h \
    smtp/src/mimemessage.h \
    smtp/src/mimemultipart.h \
    smtp/src/mimepart.h \
    smtp/src/mimetext.h \
    smtp/src/quotedprintable.h \
    smtp/src/smtpclient.h \
    smtp/src/smtpexports.h \
    sponsor.h \
    addequipment.h \
    usersession.h \
    videoplayerdialog.h \
    weatherapicall.h

FORMS += \
    addemission1.ui \
    addemployee.ui \
    chatbox.ui \
    contract.ui \
    emission.ui \
    emissionedit.ui \
    employee.ui \
    employeeedit.ui \
    equipment.ui \
    forgotpassword.ui \
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

