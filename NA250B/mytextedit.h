#ifndef MYTEXTEDIT_H
#define MYTEXTEDIT_H

#include <QWidget>
#include <QTextEdit>
#include "testtypedialog.h"

class MyTextEdit : public QTextEdit
{
    Q_OBJECT
public:
    explicit MyTextEdit(QWidget *parent = 0);

    TestTypeDialog *testtypedlg;

signals:

public slots:

private:
    void mouseDoubleClickEvent(QMouseEvent *event);
};

#endif // MYTEXTEDIT_H
