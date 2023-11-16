#ifndef CONTEXTUAL_REPLACEMENT_H
#define CONTEXTUAL_REPLACEMENT_H

#include <QDialog>

namespace Ui {
class contextual_replacement;
}

class contextual_replacement : public QDialog
{
    Q_OBJECT

public:
    explicit contextual_replacement(QWidget *parent = nullptr);
    ~contextual_replacement();

private slots:
    void on_pushButton_clicked();

private:
    Ui::contextual_replacement *ui;
};

#endif // CONTEXTUAL_REPLACEMENT_H
