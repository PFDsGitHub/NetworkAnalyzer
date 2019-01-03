#ifndef TESTTYPEDIALOG_H
#define TESTTYPEDIALOG_H

#include <QDialog>

namespace Ui {
class TestTypeDialog;
}

class TestTypeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TestTypeDialog(QWidget *parent = 0);
    ~TestTypeDialog();

private:
    Ui::TestTypeDialog *ui;
};

#endif // TESTTYPEDIALOG_H
