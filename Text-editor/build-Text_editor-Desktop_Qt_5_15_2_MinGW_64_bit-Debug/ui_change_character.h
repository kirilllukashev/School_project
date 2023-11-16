/********************************************************************************
** Form generated from reading UI file 'change_character.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_CHARACTER_H
#define UI_CHANGE_CHARACTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_change_character
{
public:
    QLabel *label_2;
    QLabel *label;
    QLineEdit *line_val;
    QLineEdit *char_val;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *character_val;

    void setupUi(QDialog *change_character)
    {
        if (change_character->objectName().isEmpty())
            change_character->setObjectName(QString::fromUtf8("change_character"));
        change_character->resize(400, 300);
        label_2 = new QLabel(change_character);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 110, 71, 16));
        label = new QLabel(change_character);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 50, 55, 16));
        line_val = new QLineEdit(change_character);
        line_val->setObjectName(QString::fromUtf8("line_val"));
        line_val->setGeometry(QRect(180, 40, 175, 30));
        char_val = new QLineEdit(change_character);
        char_val->setObjectName(QString::fromUtf8("char_val"));
        char_val->setGeometry(QRect(180, 160, 175, 30));
        pushButton = new QPushButton(change_character);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 240, 100, 40));
        label_3 = new QLabel(change_character);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 170, 111, 20));
        character_val = new QLineEdit(change_character);
        character_val->setObjectName(QString::fromUtf8("character_val"));
        character_val->setGeometry(QRect(180, 100, 175, 30));

        retranslateUi(change_character);
        QObject::connect(pushButton, SIGNAL(clicked()), change_character, SLOT(close()));

        QMetaObject::connectSlotsByName(change_character);
    } // setupUi

    void retranslateUi(QDialog *change_character)
    {
        change_character->setWindowTitle(QCoreApplication::translate("change_character", "Change character", nullptr));
        label_2->setText(QCoreApplication::translate("change_character", "Character:", nullptr));
        label->setText(QCoreApplication::translate("change_character", "Line:", nullptr));
        pushButton->setText(QCoreApplication::translate("change_character", "Insert", nullptr));
        label_3->setText(QCoreApplication::translate("change_character", "New character:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_character: public Ui_change_character {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_CHARACTER_H
