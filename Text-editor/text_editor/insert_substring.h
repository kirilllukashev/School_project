#ifndef INSERT_SUBSTRING_H
#define INSERT_SUBSTRING_H

#include <QDialog>

namespace Ui {
class insert_substring;
}

class insert_substring : public QDialog
{
    Q_OBJECT

public:
    explicit insert_substring(QWidget *parent = nullptr);
    ~insert_substring();

private slots:
    void on_pushButton_clicked();

private:
    Ui::insert_substring *ui;
};

#endif // INSERT_SUBSTRING_H
