/********************************************************************************
** Form generated from reading UI file 'insert_several_strings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERT_SEVERAL_STRINGS_H
#define UI_INSERT_SEVERAL_STRINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_insert_several_strings
{
public:
    QTextEdit *several_strings_val;
    QLabel *label;
    QLineEdit *line_strings_val;
    QLabel *label_2;
    QPushButton *button_insert_several_strings;

    void setupUi(QDialog *insert_several_strings)
    {
        if (insert_several_strings->objectName().isEmpty())
            insert_several_strings->setObjectName(QString::fromUtf8("insert_several_strings"));
        insert_several_strings->resize(400, 300);
        several_strings_val = new QTextEdit(insert_several_strings);
        several_strings_val->setObjectName(QString::fromUtf8("several_strings_val"));
        several_strings_val->setGeometry(QRect(120, 20, 250, 150));
        label = new QLabel(insert_several_strings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 90, 55, 16));
        line_strings_val = new QLineEdit(insert_several_strings);
        line_strings_val->setObjectName(QString::fromUtf8("line_strings_val"));
        line_strings_val->setGeometry(QRect(120, 190, 250, 30));
        label_2 = new QLabel(insert_several_strings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 200, 55, 16));
        button_insert_several_strings = new QPushButton(insert_several_strings);
        button_insert_several_strings->setObjectName(QString::fromUtf8("button_insert_several_strings"));
        button_insert_several_strings->setGeometry(QRect(150, 250, 100, 30));

        retranslateUi(insert_several_strings);
        QObject::connect(button_insert_several_strings, SIGNAL(clicked()), insert_several_strings, SLOT(close()));

        QMetaObject::connectSlotsByName(insert_several_strings);
    } // setupUi

    void retranslateUi(QDialog *insert_several_strings)
    {
        insert_several_strings->setWindowTitle(QCoreApplication::translate("insert_several_strings", "Insert several strings", nullptr));
        label->setText(QCoreApplication::translate("insert_several_strings", "Strings:", nullptr));
        label_2->setText(QCoreApplication::translate("insert_several_strings", "Line:", nullptr));
        button_insert_several_strings->setText(QCoreApplication::translate("insert_several_strings", "Insert", nullptr));
    } // retranslateUi

};

namespace Ui {
    class insert_several_strings: public Ui_insert_several_strings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERT_SEVERAL_STRINGS_H
