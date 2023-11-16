/********************************************************************************
** Form generated from reading UI file 'input_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT_DIALOG_H
#define UI_INPUT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_input_dialog
{
public:
    QPushButton *button_input;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *first_string_input;
    QLineEdit *last_string_input;

    void setupUi(QDialog *input_dialog)
    {
        if (input_dialog->objectName().isEmpty())
            input_dialog->setObjectName(QString::fromUtf8("input_dialog"));
        input_dialog->resize(400, 300);
        button_input = new QPushButton(input_dialog);
        button_input->setObjectName(QString::fromUtf8("button_input"));
        button_input->setGeometry(QRect(90, 220, 200, 50));
        label = new QLabel(input_dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(79, 55, 71, 30));
        label->setTextFormat(Qt::AutoText);
        label_2 = new QLabel(input_dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(79, 130, 71, 30));
        first_string_input = new QLineEdit(input_dialog);
        first_string_input->setObjectName(QString::fromUtf8("first_string_input"));
        first_string_input->setGeometry(QRect(150, 55, 150, 30));
        last_string_input = new QLineEdit(input_dialog);
        last_string_input->setObjectName(QString::fromUtf8("last_string_input"));
        last_string_input->setGeometry(QRect(150, 130, 150, 30));

        retranslateUi(input_dialog);
        QObject::connect(button_input, SIGNAL(clicked()), input_dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(input_dialog);
    } // setupUi

    void retranslateUi(QDialog *input_dialog)
    {
        input_dialog->setWindowTitle(QCoreApplication::translate("input_dialog", "Input data", nullptr));
        button_input->setText(QCoreApplication::translate("input_dialog", "Insert", nullptr));
        label->setText(QCoreApplication::translate("input_dialog", "First line:", nullptr));
        label_2->setText(QCoreApplication::translate("input_dialog", "Last line:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class input_dialog: public Ui_input_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUT_DIALOG_H
