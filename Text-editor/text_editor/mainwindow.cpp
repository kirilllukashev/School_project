#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "hello.h"
#include "functions.h"
#include "insert_one_string.h"
#include "insert_several_strings.h"
#include "delete_string.h"
#include "insert_substring.h"
#include "change_character.h"
#include "contextual_replacement.h"
#include "input_dialog.h"
#include "error.h"

#include "input_dialog.h"
#include "ui_input_dialog.h"

#include <string>

extern std::vector<std::u16string> my_data;
extern bool gCrush;

void MainWindow::update() {
  ui->textEdit->setText("");
  for (int i = 0; i < int(my_data.size()); ++i) {
     ui->textEdit->insertPlainText(QString::fromStdU16String(my_data[i]) + "\n");
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_insert_one_string_clicked()
{
    insert_one_string window;
    window.setModal(true);
    window.exec();
    update();
}

void MainWindow::on_Insert_several_strings_clicked()
{
    insert_several_strings window;
    window.setModal(true);
    window.exec();
    update();
}

void MainWindow::on_button_delete_string_clicked()
{
    delete_string window;
    window.setModal(true);
    window.exec();
    update();
}

void MainWindow::on_button_insert_substring_clicked()
{
    insert_substring window;
    window.setModal(true);
    window.exec();
    update();
}

void MainWindow::on_button_change_character_clicked()
{
    change_character window;
    window.setModal(true);
    window.exec();
    update();
}

void MainWindow::on_button_contextual_replace_clicked()
{
    contextual_replacement window;
    window.setModal(true);
    window.exec();
    update();
}

void MainWindow::on_button_delete_zero_clicked()
{
    /*input_dialog window;
    window.setModal(true);
    window.exec();
    QString begStr_1 = ui_input_dialog->first_string_input->text();
    QString endStr_1 = ui_input_dialog->last_string_input->text();

    int beg_1, end_1;

    if (begStr_1 == "") beg_1 = 0;
    else beg_1 = begStr_1.toInt() - 1;
    if (endStr_1 == "") end_1 = my_data.size();
    else end_1= endStr_1.toInt();*/

    delete_leading_zeros(gBeg, gEnd);
    update();
}

void MainWindow::on_button_increasing_numerals_clicked()
{
    delete_groups(gBeg, gEnd);
    update();
}

void MainWindow::on_button_star_to_plus_clicked()
{
    stars_changer(gBeg, gEnd);
    update();
}

void MainWindow::on_button_delete_between_brackets_clicked()
{
    braces_killer(gBeg, gEnd);
    update();
}
