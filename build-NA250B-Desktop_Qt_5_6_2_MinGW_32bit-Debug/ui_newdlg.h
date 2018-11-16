/********************************************************************************
** Form generated from reading UI file 'newdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWDLG_H
#define UI_NEWDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Newdlg
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnStandard;
    QPushButton *btnSweep;
    QPushButton *btnCancel;

    void setupUi(QDialog *Newdlg)
    {
        if (Newdlg->objectName().isEmpty())
            Newdlg->setObjectName(QStringLiteral("Newdlg"));
        Newdlg->resize(371, 133);
        widget = new QWidget(Newdlg);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 50, 291, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnStandard = new QPushButton(widget);
        btnStandard->setObjectName(QStringLiteral("btnStandard"));

        horizontalLayout->addWidget(btnStandard);

        btnSweep = new QPushButton(widget);
        btnSweep->setObjectName(QStringLiteral("btnSweep"));

        horizontalLayout->addWidget(btnSweep);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        retranslateUi(Newdlg);

        QMetaObject::connectSlotsByName(Newdlg);
    } // setupUi

    void retranslateUi(QDialog *Newdlg)
    {
        Newdlg->setWindowTitle(QApplication::translate("Newdlg", "Dialog", 0));
        btnStandard->setText(QApplication::translate("Newdlg", "Standard", 0));
        btnSweep->setText(QApplication::translate("Newdlg", "Sweep", 0));
        btnCancel->setText(QApplication::translate("Newdlg", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Newdlg: public Ui_Newdlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWDLG_H
