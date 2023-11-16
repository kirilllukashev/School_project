/********************************************************************************
** Form generated from reading UI file 'insert_substring.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERT_SUBSTRING_H
#define UI_INSERT_SUBSTRING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_insert_substring
{
public:
    QLineEdit *line_val;
    QLabel *label;
    QLineEdit *character_val;
    QLabel *label_2;
    QLineEdit *substring_val;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *insert_substring)
    {
        if (insert_substring->objectName().isEmpty())
            insert_substring->setObjectName(QString::fromUtf8("insert_substring"));
        insert_substring->resize(400, 300);
        line_val = new QLineEdit(insert_substring);
        line_val->setObjectName(QString::fromUtf8("line_val"));
        line_val->setGeometry(QRect(180, 40, 175, 30));
        label = new QLabel(insert_substring);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 50, 55, 16));
        character_val = new QLineEdit(insert_substring);
        character_val->setObjectName(QString::fromUtf8("character_val"));
        character_val->setGeometry(QRect(180, 100, 175, 30));
        label_2 = new QLabel(insert_substring);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 110, 71, 16));
        substring_val = new QLineEdit(insert_substring);
        substring_val->setObjectName(QString::fromUtf8("substring_val"));
        substring_val->setGeometry(QRect(180, 160, 175, 30));
        label_3 = new QLabel(insert_substring);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 170, 91, 16));
        pushButton = new QPushButton(insert_substring);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 240, 100, 40));

        retranslateUi(insert_substring);
        QObject::connect(pushButton, SIGNAL(clicked()), insert_substring, SLOT(close()));

        QMetaObject::connectSlotsByName(insert_substring);
    } // setupUi

    void retranslateUi(QDialog *insert_substring)
    {
        insert_substring->setWindowTitle(QCoreApplication::translate("insert_substring", "Insert substring", nullptr));
        label->setText(QCoreApplication::translate("insert_substring", "Line:", nullptr));
        label_2->setText(QCoreApplication::translate("insert_substring", "Character:", nullptr));
        label_3->setText(QCoreApplication::translate("insert_substring", "Substring:", nullptr));
        pushButton->setText(QCoreApplication::translate("insert_substring", "Insert", nullptr));
    } // retranslateUi

};

namespace Ui {
    class insert_substring: public Ui_insert_substring {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERT_SUBSTRING_H
