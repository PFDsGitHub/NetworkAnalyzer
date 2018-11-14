#include "config.h"
#include <QtCore/QtCore>
#include <QDebug>

Config::Config(const QString FileName)
{

    if(FileName.isEmpty()){
        strFileName = QCoreApplication::applicationDirPath()+ "/Default.ini";
    }else{
        strFileName = FileName;
    }

    settingobj = new QSettings(strFileName, QSettings::IniFormat);

}

Config::~Config()
{
    delete settingobj;
    qDebug()<<"析构";
}

void Config::Set(QString strnodename, QString strkeyname, QVariant varvalue)
{
    settingobj->setValue(QString("/%1/%2").arg(strnodename).arg(strkeyname), varvalue);
}

QVariant Config::Get(QString strnodename, QString strkeyname)
{
    QVariant var = settingobj->value(QString("/%1/%2").arg(strnodename).arg(strkeyname));
    return var;
}
