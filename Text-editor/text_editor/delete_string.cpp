#include "delete_string.h"
#include "ui_delete_string.h"
#include "mainwindow.h"
#include "functions.h"
#include "error.h"

delete_string::delete_string(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete_string)
{
    ui->setupUi(this);
}

delete_string::~delete_string()
{
    delete ui;
}

void delete_string::on_pushButton_clicked()
{
    QString place = ui->line_val->text();
    if (!is_string_num(place)) {
        errors();
        return;
      }
    int num_dl = place.toInt();
    --num_dl;
    if (!(0 <= num_dl && num_dl < int(my_data.size()))) {
        errors();
        return;
    }
    delete_string_func(num_dl);
}
