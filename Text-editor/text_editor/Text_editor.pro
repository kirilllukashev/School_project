QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    change_character.cpp \
    contextual_replacement.cpp \
    delete_string.cpp \
    error.cpp \
    functions.cpp \
    hello.cpp \
    input_dialog.cpp \
    insert_one_string.cpp \
    insert_several_strings.cpp \
    insert_substring.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    change_character.h \
    contextual_replacement.h \
    delete_string.h \
    error.h \
    functions.h \
    hello.h \
    input_dialog.h \
    insert_one_string.h \
    insert_several_strings.h \
    insert_substring.h \
    mainwindow.h

FORMS += \
    change_character.ui \
    contextual_replacement.ui \
    delete_string.ui \
    error.ui \
    hello.ui \
    input_dialog.ui \
    insert_one_string.ui \
    insert_several_strings.ui \
    insert_substring.ui \
    mainwindow.ui

TRANSLATIONS += \
    Text_editor_ru_RU.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
