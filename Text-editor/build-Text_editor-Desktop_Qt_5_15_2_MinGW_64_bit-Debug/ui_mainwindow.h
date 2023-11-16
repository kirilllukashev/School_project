/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QPushButton *insert_one_string;
    QPushButton *Insert_several_strings;
    QPushButton *button_delete_string;
    QPushButton *button_insert_substring;
    QPushButton *button_change_character;
    QPushButton *button_contextual_replace;
    QPushButton *button_delete_zero;
    QPushButton *button_increasing_numerals;
    QPushButton *button_delete_between_brackets;
    QPushButton *button_star_to_plus;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(25, 25, 600, 550));
        textEdit->setReadOnly(true);
        insert_one_string = new QPushButton(centralwidget);
        insert_one_string->setObjectName(QString::fromUtf8("insert_one_string"));
        insert_one_string->setGeometry(QRect(650, 25, 150, 50));
        Insert_several_strings = new QPushButton(centralwidget);
        Insert_several_strings->setObjectName(QString::fromUtf8("Insert_several_strings"));
        Insert_several_strings->setGeometry(QRect(825, 25, 150, 50));
        button_delete_string = new QPushButton(centralwidget);
        button_delete_string->setObjectName(QString::fromUtf8("button_delete_string"));
        button_delete_string->setGeometry(QRect(650, 100, 150, 50));
        button_insert_substring = new QPushButton(centralwidget);
        button_insert_substring->setObjectName(QString::fromUtf8("button_insert_substring"));
        button_insert_substring->setGeometry(QRect(650, 175, 150, 50));
        button_change_character = new QPushButton(centralwidget);
        button_change_character->setObjectName(QString::fromUtf8("button_change_character"));
        button_change_character->setGeometry(QRect(825, 175, 150, 50));
        button_contextual_replace = new QPushButton(centralwidget);
        button_contextual_replace->setObjectName(QString::fromUtf8("button_contextual_replace"));
        button_contextual_replace->setGeometry(QRect(650, 250, 150, 50));
        button_delete_zero = new QPushButton(centralwidget);
        button_delete_zero->setObjectName(QString::fromUtf8("button_delete_zero"));
        button_delete_zero->setGeometry(QRect(650, 325, 150, 50));
        button_increasing_numerals = new QPushButton(centralwidget);
        button_increasing_numerals->setObjectName(QString::fromUtf8("button_increasing_numerals"));
        button_increasing_numerals->setGeometry(QRect(825, 325, 150, 50));
        button_delete_between_brackets = new QPushButton(centralwidget);
        button_delete_between_brackets->setObjectName(QString::fromUtf8("button_delete_between_brackets"));
        button_delete_between_brackets->setGeometry(QRect(825, 400, 150, 50));
        button_star_to_plus = new QPushButton(centralwidget);
        button_star_to_plus->setObjectName(QString::fromUtf8("button_star_to_plus"));
        button_star_to_plus->setGeometry(QRect(650, 400, 150, 50));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Text editor", nullptr));
        insert_one_string->setText(QCoreApplication::translate("MainWindow", "Insert one string", nullptr));
        Insert_several_strings->setText(QCoreApplication::translate("MainWindow", "Insert several strings", nullptr));
        button_delete_string->setText(QCoreApplication::translate("MainWindow", "Delete string", nullptr));
        button_insert_substring->setText(QCoreApplication::translate("MainWindow", "Insert substring", nullptr));
        button_change_character->setText(QCoreApplication::translate("MainWindow", "Change character", nullptr));
        button_contextual_replace->setText(QCoreApplication::translate("MainWindow", "\320\241ontextual replacement", nullptr));
        button_delete_zero->setText(QCoreApplication::translate("MainWindow", "Delete leading zeros", nullptr));
        button_increasing_numerals->setText(QCoreApplication::translate("MainWindow", "Non-increasing numerals", nullptr));
        button_delete_between_brackets->setText(QCoreApplication::translate("MainWindow", "delete between brackets", nullptr));
        button_star_to_plus->setText(QCoreApplication::translate("MainWindow", "* -> +", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
