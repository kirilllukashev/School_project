#include "insert_substring.h"
#include "ui_insert_substring.h"
#include "mainwindow.h"
#include "functions.h"
#include "error.h"

insert_substring::insert_substring(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::insert_substring)
{
    ui->setupUi(this);
}

insert_substring::~insert_substring()
{
    delete ui;
}

void insert_substring::on_pushButton_clicked()
{
    QString line_str = ui->line_val->text();
    QString char_str = ui->character_val->text();

    if (!is_string_num(line_str) || !is_string_num(char_str)) {
        Error();
        return;
      }
    int num = line_str.toInt();
    num--;
    int charNum = char_str.toInt();

    if (!(0 <= num && num < int(my_data.size()))) {
        errors();
        return;
      } else if (!(0 <= charNum && charNum <= int(my_data[num].size()))) {
        errors();
        return;
      }
    std::u16string output = ui->substring_val->text().toStdU16String();
    insert_substr(num, charNum, output);
}
