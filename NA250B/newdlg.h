#ifndef NEWDLG_H
#define NEWDLG_H

#include <QDialog>

namespace Ui {
class Newdlg;
}

class Newdlg : public QDialog
{
    Q_OBJECT

public:
    explicit Newdlg(QWidget *parent = 0);
    ~Newdlg();

private slots:
    void on_btnStandard_clicked();

    void on_btnSweep_clicked();

    void on_btnCancel_clicked();

private:
    Ui::Newdlg *ui;
};

#endif // NEWDLG_H
