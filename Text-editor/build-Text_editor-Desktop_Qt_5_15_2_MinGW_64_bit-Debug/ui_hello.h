/********************************************************************************
** Form generated from reading UI file 'hello.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLO_H
#define UI_HELLO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_hello
{
public:
    QTextEdit *textEdit;

    void setupUi(QDialog *hello)
    {
        if (hello->objectName().isEmpty())
            hello->setObjectName(QString::fromUtf8("hello"));
        hello->resize(400, 300);
        textEdit = new QTextEdit(hello);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(120, 90, 104, 87));

        retranslateUi(hello);

        QMetaObject::connectSlotsByName(hello);
    } // setupUi

    void retranslateUi(QDialog *hello)
    {
        hello->setWindowTitle(QCoreApplication::translate("hello", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hello: public Ui_hello {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLO_H
