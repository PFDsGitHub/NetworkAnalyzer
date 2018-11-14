#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "config.h"
#include <QFileInfo>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    Config* configobj;

    bool isNewfile = false;

    void getSettingInfo(Config*);

    void setSettingInfo(Config *, QString);

private slots:
    void on_actionOpen_triggered();

    void on_actionNew_triggered();

    void on_actionSave_triggered();

private:
    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H
