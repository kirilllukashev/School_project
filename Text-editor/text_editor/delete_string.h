#ifndef DELETE_STRING_H
#define DELETE_STRING_H

#include <QDialog>

namespace Ui {
class delete_string;
}

class delete_string : public QDialog
{
    Q_OBJECT

public:
    explicit delete_string(QWidget *parent = nullptr);
    ~delete_string();

private slots:
    void on_pushButton_clicked();

private:
    Ui::delete_string *ui;
};

#endif // DELETE_STRING_H
