#ifndef INSERT_ONE_STRING_H
#define INSERT_ONE_STRING_H

#include <QDialog>

namespace Ui {
class insert_one_string;
}

class insert_one_string : public QDialog
{
    Q_OBJECT

public:
    explicit insert_one_string(QWidget *parent = nullptr);
    ~insert_one_string();

private slots:
    void on_button_insert_one_string_clicked();

private:
    Ui::insert_one_string *ui;
};

#endif // INSERT_ONE_STRING_H
