#include "newdlg.h"
#include "ui_newdlg.h"

Newdlg::Newdlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Newdlg)
{
    ui->setupUi(this);
    this->setWindowTitle("New");
}

Newdlg::~Newdlg()
{
    delete ui;
}

void Newdlg::on_btnStandard_clicked()
{

}

void Newdlg::on_btnSweep_clicked()
{

}

void Newdlg::on_btnCancel_clicked()
{
    this->close();
}
