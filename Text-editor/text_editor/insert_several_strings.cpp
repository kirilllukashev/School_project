#include "insert_several_strings.h"
#include "ui_insert_several_strings.h"
#include "mainwindow.h"
#include "functions.h"
#include "error.h"

insert_several_strings::insert_several_strings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::insert_several_strings)
{
    ui->setupUi(this);
}

insert_several_strings::~insert_several_strings()
{
    delete ui;
}

void insert_several_strings::on_button_insert_several_strings_clicked()
{
    QString strings = ui->several_strings_val->toPlainText().trimmed();
    QString string_place = ui->line_strings_val->text();

    if (!is_string_num(string_place)) {
        errors();
        return;
      }

    int place = string_place.toInt();
    if (!(0 <= place && place <= int(my_data.size()))) {
        errors();
        return;
      }

    QStringList severalStrings = strings.split('\n');
    std::vector<std::u16string> insert_strings;
    for (auto str : severalStrings) {
        insert_strings.push_back(str.toStdU16String());
      }
    insert_string(place, insert_strings.begin(), insert_strings.end());
}
