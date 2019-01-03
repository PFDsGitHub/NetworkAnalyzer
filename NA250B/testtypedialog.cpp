#include "testtypedialog.h"
#include "ui_testtypedialog.h"

TestTypeDialog::TestTypeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestTypeDialog)
{
    ui->setupUi(this);

    this->setWindowTitle("Test Type");
}

TestTypeDialog::~TestTypeDialog()
{
    delete ui;
}
