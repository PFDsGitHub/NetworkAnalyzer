#ifndef CONFIG_H
#define CONFIG_H

#include <QSettings>
#include <QVariant>

class Config
{
public:

    Config(const QString qstrfilename = "");
    ~Config();

    void Set(QString, QString, QVariant);
    QVariant Get(QString, QString);

    QString strFileName;

private:
    QSettings *settingobj;



};

#endif // CONFIG_H
