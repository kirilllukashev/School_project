#include "insert_one_string.h"
#include "ui_insert_one_string.h"
#include "mainwindow.h"
#include "functions.h"
#include "error.h"

insert_one_string::insert_one_string(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::insert_one_string)
{
    ui->setupUi(this);
}

insert_one_string::~insert_one_string()
{
    delete ui;
}

void insert_one_string::on_button_insert_one_string_clicked()
{
      std::u16string one_string = ui->one_string_val->text().toStdU16String();
      QString one_string_place = ui->line_string_val->text();
      if (!is_string_num(one_string_place)) {
          errors();
          return;
      }

      int string_position = one_string_place.toInt();

      if (!(0 <= string_position && string_position <= int(my_data.size()))) {
          errors();
          return;
      }

      insert_string(string_position, one_string);
}

