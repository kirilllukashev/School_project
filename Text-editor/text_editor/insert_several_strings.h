#ifndef INSERT_SEVERAL_STRINGS_H
#define INSERT_SEVERAL_STRINGS_H

#include <QDialog>

namespace Ui {
class insert_several_strings;
}

class insert_several_strings : public QDialog
{
    Q_OBJECT

public:
    explicit insert_several_strings(QWidget *parent = nullptr);
    ~insert_several_strings();

private slots:
    void on_button_insert_several_strings_clicked();

private:
    Ui::insert_several_strings *ui;
};

#endif // INSERT_SEVERAL_STRINGS_H
