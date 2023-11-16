/********************************************************************************
** Form generated from reading UI file 'error.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERROR_H
#define UI_ERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Error
{
public:
    QLabel *label;

    void setupUi(QDialog *Error)
    {
        if (Error->objectName().isEmpty())
            Error->setObjectName(QString::fromUtf8("Error"));
        Error->resize(200, 150);
        label = new QLabel(Error);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 70, 55, 16));

        retranslateUi(Error);

        QMetaObject::connectSlotsByName(Error);
    } // setupUi

    void retranslateUi(QDialog *Error)
    {
        Error->setWindowTitle(QCoreApplication::translate("Error", "Error", nullptr));
        label->setText(QCoreApplication::translate("Error", "Error!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Error: public Ui_Error {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERROR_H
