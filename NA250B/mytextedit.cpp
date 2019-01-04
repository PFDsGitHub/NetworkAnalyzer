#include "mytextedit.h"

MyTextEdit::MyTextEdit(QWidget *parent) : QTextEdit(parent)
{
    //testtypedlg
}

void MyTextEdit::mouseDoubleClickEvent(QMouseEvent *event)
{
    testtypedlg = new TestTypeDialog();
    testtypedlg->show();
}
