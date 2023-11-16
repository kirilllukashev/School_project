/********************************************************************************
** Form generated from reading UI file 'contextual_replacement.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTEXTUAL_REPLACEMENT_H
#define UI_CONTEXTUAL_REPLACEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_contextual_replacement
{
public:
    QLineEdit *end_line_val;
    QLineEdit *first_val;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *start_line_val;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *last_val;
    QLabel *label_4;

    void setupUi(QDialog *contextual_replacement)
    {
        if (contextual_replacement->objectName().isEmpty())
            contextual_replacement->setObjectName(QString::fromUtf8("contextual_replacement"));
        contextual_replacement->resize(400, 300);
        end_line_val = new QLineEdit(contextual_replacement);
        end_line_val->setObjectName(QString::fromUtf8("end_line_val"));
        end_line_val->setGeometry(QRect(170, 183, 175, 30));
        first_val = new QLineEdit(contextual_replacement);
        first_val->setObjectName(QString::fromUtf8("first_val"));
        first_val->setGeometry(QRect(170, 35, 175, 30));
        pushButton = new QPushButton(contextual_replacement);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 240, 100, 40));
        label_2 = new QLabel(contextual_replacement);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(55, 193, 111, 16));
        start_line_val = new QLineEdit(contextual_replacement);
        start_line_val->setObjectName(QString::fromUtf8("start_line_val"));
        start_line_val->setGeometry(QRect(170, 133, 175, 30));
        label_3 = new QLabel(contextual_replacement);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 40, 61, 20));
        label = new QLabel(contextual_replacement);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 140, 91, 20));
        last_val = new QLineEdit(contextual_replacement);
        last_val->setObjectName(QString::fromUtf8("last_val"));
        last_val->setGeometry(QRect(170, 85, 175, 30));
        label_4 = new QLabel(contextual_replacement);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 90, 61, 20));

        retranslateUi(contextual_replacement);
        QObject::connect(pushButton, SIGNAL(clicked()), contextual_replacement, SLOT(close()));

        QMetaObject::connectSlotsByName(contextual_replacement);
    } // setupUi

    void retranslateUi(QDialog *contextual_replacement)
    {
        contextual_replacement->setWindowTitle(QCoreApplication::translate("contextual_replacement", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("contextual_replacement", "Insert", nullptr));
        label_2->setText(QCoreApplication::translate("contextual_replacement", "New substring:", nullptr));
        label_3->setText(QCoreApplication::translate("contextual_replacement", "First line:", nullptr));
        label->setText(QCoreApplication::translate("contextual_replacement", "Substring:", nullptr));
        label_4->setText(QCoreApplication::translate("contextual_replacement", "Last line:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class contextual_replacement: public Ui_contextual_replacement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTEXTUAL_REPLACEMENT_H
