#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_insert_one_string_clicked();
    void update();

    void on_Insert_several_strings_clicked();

    void on_button_delete_string_clicked();

    void on_button_insert_substring_clicked();

    void on_button_change_character_clicked();

    void on_button_contextual_replace_clicked();

    void on_button_delete_zero_clicked();

    void on_button_increasing_numerals_clicked();

    void on_button_star_to_plus_clicked();

    void on_button_delete_between_brackets_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
