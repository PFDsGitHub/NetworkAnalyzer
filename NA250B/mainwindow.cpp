#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "config.h"
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QFileDialog>
//#include <QPushButton>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(800,700);

    configobj = new Config("../NA250B/ConfigFiles/Default.ini");
    getSettingInfo(configobj);

    newdialog = new Newdlg();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getSettingInfo(Config* configobj)
{
    // set init configinfo to ui
    this->setWindowTitle(configobj->Get("file", "filename").toString());
    ui->lineEdit_Fr->setText(configobj->Get("part1","Reference_Fr").toString());
    ui->lineEdit_Desc->setText(configobj->Get("part1","Description").toString());

}

void MainWindow::setSettingInfo(Config* configobj, QString strfilename)
{
    QFileInfo temp = QFileInfo(strfilename);
    configobj->Set("user","name","admin");
    configobj->Set("user","password","123");
    configobj->Set("file","filename",temp.fileName());
    configobj->Set("part1","Reference_Fr",ui->lineEdit_Fr->text());
    configobj->Set("part1","Description",ui->lineEdit_Desc->text());
    configobj->Set("part1","Mode","Measured FL");
    configobj->Set("part1","Reference_CL",12.000);
    configobj->Set("part1","Power_Applied_1",1000.0);
    configobj->Set("part1","Power_Applied_2","nW");
    configobj->Set("part1","Power_Applied_3",36);

}
//打开
void MainWindow::on_actionOpen_triggered()
{
    qDebug()<<"打开槽函数";
    qDebug()<<isNewfile;
    QString filename = QFileDialog::getOpenFileName(this,tr("Open File"),tr("../NA250B/ConfigFiles"),tr("*ini"));
    if(filename == ""){
        qDebug()<<"打开失败";
    }else{
        configobj = new Config(filename);
        getSettingInfo(configobj);

    }



}
//新建
void MainWindow::on_actionNew_triggered()
{
    newdialog->exec();
}
//保存
void MainWindow::on_actionSave_triggered()
{
    qDebug()<<"保存槽函数";
    if(isNewfile){
        QString filename = QFileDialog::getSaveFileName(this,tr("Save File"),tr("../NA250B/ConfigFiles"),tr("(*.ini)"));
        configobj = new Config(filename);

    }else{

    }
    setSettingInfo(configobj, configobj->strFileName);
    QMessageBox msgBox;
    msgBox.setText("Save Successfully.");
    msgBox.exec();

}
