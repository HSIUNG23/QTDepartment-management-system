#-------------------------------------------------
#
# Project created by QtCreator 2020-05-26T08:10:48
#
#-------------------------------------------------

QT       += core gui
RC_ICONS = bitbug_favicon.ico

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled2
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        addpatient.cpp \
        addworker.cpp \
        deleteinf.cpp \
        getpatient.cpp \
        getworker.cpp \
        instrument.cpp \
        main.cpp \
        mainwindow.cpp \
        managefuc.cpp \
        manager.cpp \
        modify.cpp \
        patientfuc.cpp \
        patientlogin.cpp \
        worker.cpp \
        workerlogin.cpp

HEADERS += \
        addpatient.h \
        addworker.h \
        deleteinf.h \
        getpatient.h \
        getworker.h \
        instrument.h \
        mainwindow.h \
        managefuc.h \
        manager.h \
        modify.h \
        patientfuc.h \
        patientlogin.h \
        worker.h \
        workerlogin.h

FORMS += \
        addpatient.ui \
        addworker.ui \
        deleteinf.ui \
        getpatient.ui \
        getworker.ui \
        instrument.ui \
        mainwindow.ui \
        managefuc.ui \
        manager.ui \
        modify.ui \
        patientfuc.ui \
        patientlogin.ui \
        worker.ui \
        workerlogin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    qwe.qrc

DISTFILES +=
