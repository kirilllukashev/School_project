#ifndef CHANGE_CHARACTER_H
#define CHANGE_CHARACTER_H

#include <QDialog>

namespace Ui {
class change_character;
}

class change_character : public QDialog
{
    Q_OBJECT

public:
    explicit change_character(QWidget *parent = nullptr);
    ~change_character();

private slots:
    void on_pushButton_clicked();

private:
    Ui::change_character *ui;
};

#endif // CHANGE_CHARACTER_H
