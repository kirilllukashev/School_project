#include "change_character.h"
#include "ui_change_character.h"
#include "mainwindow.h"
#include "functions.h"
#include "error.h"

change_character::change_character(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change_character)
{
    ui->setupUi(this);
}

change_character::~change_character()
{
    delete ui;
}

void change_character::on_pushButton_clicked()
{
    QString strNumStr = ui->line_val->text();
    QString charNumStr = ui->character_val->text();
    char c = ui->char_val->text().toStdString()[0];

    if (!is_string_num(strNumStr) || !is_string_num(charNumStr)) {
        errors();
        return;
      }

    int strNum = strNumStr.toInt() - 1, charNum = charNumStr.toInt() - 1;

    if (!(0 <= strNum && strNum < int(my_data.size()))) {
        errors();
        return;
      } else if (!(0 <= charNum && charNum < int(my_data[strNum].size()))) {
        errors();
        return;
      }

    change_char(strNum, charNum, c);
}
