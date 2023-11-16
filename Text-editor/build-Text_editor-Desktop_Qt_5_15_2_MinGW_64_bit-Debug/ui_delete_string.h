/********************************************************************************
** Form generated from reading UI file 'delete_string.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_STRING_H
#define UI_DELETE_STRING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_delete_string
{
public:
    QLineEdit *line_val;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *delete_string)
    {
        if (delete_string->objectName().isEmpty())
            delete_string->setObjectName(QString::fromUtf8("delete_string"));
        delete_string->resize(300, 200);
        line_val = new QLineEdit(delete_string);
        line_val->setObjectName(QString::fromUtf8("line_val"));
        line_val->setGeometry(QRect(110, 60, 150, 30));
        label = new QLabel(delete_string);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 70, 55, 16));
        pushButton = new QPushButton(delete_string);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(85, 140, 120, 40));

        retranslateUi(delete_string);
        QObject::connect(pushButton, SIGNAL(clicked()), delete_string, SLOT(close()));

        QMetaObject::connectSlotsByName(delete_string);
    } // setupUi

    void retranslateUi(QDialog *delete_string)
    {
        delete_string->setWindowTitle(QCoreApplication::translate("delete_string", "Delete string", nullptr));
        label->setText(QCoreApplication::translate("delete_string", "Line:", nullptr));
        pushButton->setText(QCoreApplication::translate("delete_string", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delete_string: public Ui_delete_string {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_STRING_H
