#include "contextual_replacement.h"
#include "ui_contextual_replacement.h"
#include "mainwindow.h"
#include "functions.h"
#include "error.h"

contextual_replacement::contextual_replacement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::contextual_replacement)
{
    ui->setupUi(this);
}

contextual_replacement::~contextual_replacement()
{
    delete ui;
}

void contextual_replacement::on_pushButton_clicked()
{
    QString begStr = ui->first_val->text();
    QString endStr = ui->last_val->text();
    std::u16string fromStr = ui->start_line_val->text().toStdU16String();
    std::u16string toStr = ui->end_line_val->text().toStdU16String();

    if (!is_string_num(begStr) || !is_string_num(endStr)) {
        errors();
        return;
      }

    int beg, end;

    if (begStr == "") beg = 0;
    else beg = begStr.toInt() - 1;
    if (endStr == "") end = my_data.size();
    else end = endStr.toInt();

    if (!(0 <= beg && beg <= int(my_data.size())) || !(0 < end && end <= int(my_data.size()))) {
        errors();
        return;
     }

    context_change(fromStr, toStr, beg, end);
}
