/********************************************************************************
** Form generated from reading UI file 'insert_one_string.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERT_ONE_STRING_H
#define UI_INSERT_ONE_STRING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_insert_one_string
{
public:
    QPushButton *button_insert_one_string;
    QLineEdit *one_string_val;
    QLineEdit *line_string_val;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *insert_one_string)
    {
        if (insert_one_string->objectName().isEmpty())
            insert_one_string->setObjectName(QString::fromUtf8("insert_one_string"));
        insert_one_string->resize(400, 300);
        button_insert_one_string = new QPushButton(insert_one_string);
        button_insert_one_string->setObjectName(QString::fromUtf8("button_insert_one_string"));
        button_insert_one_string->setGeometry(QRect(100, 225, 200, 50));
        one_string_val = new QLineEdit(insert_one_string);
        one_string_val->setObjectName(QString::fromUtf8("one_string_val"));
        one_string_val->setGeometry(QRect(150, 50, 150, 30));
        line_string_val = new QLineEdit(insert_one_string);
        line_string_val->setObjectName(QString::fromUtf8("line_string_val"));
        line_string_val->setGeometry(QRect(150, 125, 150, 30));
        label = new QLabel(insert_one_string);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 50, 50, 30));
        label->setTextFormat(Qt::AutoText);
        label_2 = new QLabel(insert_one_string);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 125, 50, 30));

        retranslateUi(insert_one_string);
        QObject::connect(button_insert_one_string, SIGNAL(clicked()), insert_one_string, SLOT(close()));

        QMetaObject::connectSlotsByName(insert_one_string);
    } // setupUi

    void retranslateUi(QDialog *insert_one_string)
    {
        insert_one_string->setWindowTitle(QCoreApplication::translate("insert_one_string", "Insert one string", nullptr));
        button_insert_one_string->setText(QCoreApplication::translate("insert_one_string", "Insert", nullptr));
        label->setText(QCoreApplication::translate("insert_one_string", "String:", nullptr));
        label_2->setText(QCoreApplication::translate("insert_one_string", "Line:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class insert_one_string: public Ui_insert_one_string {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERT_ONE_STRING_H
