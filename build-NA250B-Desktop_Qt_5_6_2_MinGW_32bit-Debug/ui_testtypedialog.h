/********************************************************************************
** Form generated from reading UI file 'testtypedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTTYPEDIALOG_H
#define UI_TESTTYPEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestTypeDialog
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QGroupBox *groupBox_4;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QGroupBox *groupBox_5;
    QGroupBox *groupBox_6;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_6;
    QLabel *label_9;
    QGroupBox *groupBox_7;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_7;
    QLabel *label_11;
    QGroupBox *groupBox_10;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_8;
    QLabel *label_12;
    QGroupBox *groupBox_9;
    QLineEdit *lineEdit_9;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *TestTypeDialog)
    {
        if (TestTypeDialog->objectName().isEmpty())
            TestTypeDialog->setObjectName(QStringLiteral("TestTypeDialog"));
        TestTypeDialog->resize(629, 411);
        groupBox = new QGroupBox(TestTypeDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 131, 121));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 109, 80));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(TestTypeDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(150, 10, 131, 121));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 111, 51));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 91, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 60, 111, 51));
        widget1 = new QWidget(groupBox_4);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 20, 91, 22));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_4->addWidget(lineEdit_2);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        groupBox_3->raise();
        groupBox_4->raise();
        groupBox_3->raise();
        groupBox_4->raise();
        groupBox_5 = new QGroupBox(TestTypeDialog);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 220, 601, 80));
        groupBox_6 = new QGroupBox(groupBox_5);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 20, 261, 51));
        widget2 = new QWidget(groupBox_6);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(10, 20, 241, 22));
        horizontalLayout_6 = new QHBoxLayout(widget2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_4 = new QLineEdit(widget2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_6->addWidget(lineEdit_4);

        label_7 = new QLabel(widget2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        label_8 = new QLabel(widget2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_6->addWidget(label_8);

        lineEdit_6 = new QLineEdit(widget2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_6->addWidget(lineEdit_6);

        label_9 = new QLabel(widget2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_6->addWidget(label_9);

        label_6->raise();
        lineEdit_4->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        lineEdit_6->raise();
        groupBox_5->raise();
        groupBox_7 = new QGroupBox(groupBox_5);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(280, 20, 111, 51));
        widget3 = new QWidget(groupBox_7);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(10, 20, 81, 22));
        horizontalLayout_7 = new QHBoxLayout(widget3);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        lineEdit_7 = new QLineEdit(widget3);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        horizontalLayout_7->addWidget(lineEdit_7);

        label_11 = new QLabel(widget3);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_7->addWidget(label_11);

        groupBox_10 = new QGroupBox(groupBox_5);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(400, 20, 111, 51));
        layoutWidget_2 = new QWidget(groupBox_10);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 20, 89, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        lineEdit_8 = new QLineEdit(layoutWidget_2);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        horizontalLayout_8->addWidget(lineEdit_8);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_8->addWidget(label_12);

        groupBox_9 = new QGroupBox(groupBox_5);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(520, 20, 71, 51));
        lineEdit_9 = new QLineEdit(groupBox_9);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(10, 20, 51, 20));
        widget4 = new QWidget(TestTypeDialog);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(10, 360, 601, 25));
        horizontalLayout_9 = new QHBoxLayout(widget4);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget4);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_9->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_9->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_9->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_9->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_9->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_9->addWidget(pushButton_6);

        groupBox->raise();
        label->raise();
        comboBox->raise();
        layoutWidget->raise();
        layoutWidget_2->raise();
        layoutWidget->raise();
        groupBox_2->raise();
        label_2->raise();
        lineEdit_2->raise();
        groupBox_5->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();

        retranslateUi(TestTypeDialog);

        QMetaObject::connectSlotsByName(TestTypeDialog);
    } // setupUi

    void retranslateUi(QDialog *TestTypeDialog)
    {
        TestTypeDialog->setWindowTitle(QApplication::translate("TestTypeDialog", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("TestTypeDialog", "Measurement", 0));
        label->setText(QApplication::translate("TestTypeDialog", "Type", 0));
        label_5->setText(QApplication::translate("TestTypeDialog", "Name", 0));
        label_4->setText(QApplication::translate("TestTypeDialog", "Units", 0));
        groupBox_2->setTitle(QApplication::translate("TestTypeDialog", "Limits", 0));
        groupBox_3->setTitle(QApplication::translate("TestTypeDialog", "Low", 0));
        label_3->setText(QApplication::translate("TestTypeDialog", "ppm", 0));
        groupBox_4->setTitle(QApplication::translate("TestTypeDialog", "High", 0));
        label_2->setText(QApplication::translate("TestTypeDialog", "ppm", 0));
        groupBox_5->setTitle(QApplication::translate("TestTypeDialog", "High Q/High Time Constant", 0));
        groupBox_6->setTitle(QApplication::translate("TestTypeDialog", "Sweep", 0));
        label_6->setText(QApplication::translate("TestTypeDialog", "Start", 0));
        lineEdit_4->setText(QString());
        label_7->setText(QApplication::translate("TestTypeDialog", "ppm", 0));
        label_8->setText(QApplication::translate("TestTypeDialog", "Stop", 0));
        lineEdit_6->setText(QString());
        label_9->setText(QApplication::translate("TestTypeDialog", "ppm", 0));
        groupBox_7->setTitle(QApplication::translate("TestTypeDialog", "Search Step", 0));
        lineEdit_7->setText(QString());
        label_11->setText(QApplication::translate("TestTypeDialog", "ppm", 0));
        groupBox_10->setTitle(QApplication::translate("TestTypeDialog", "Delay", 0));
        lineEdit_8->setText(QString());
        label_12->setText(QApplication::translate("TestTypeDialog", "seconds", 0));
        groupBox_9->setTitle(QApplication::translate("TestTypeDialog", "Averages", 0));
        lineEdit_9->setText(QString());
        pushButton->setText(QApplication::translate("TestTypeDialog", "Overwrite", 0));
        pushButton_2->setText(QApplication::translate("TestTypeDialog", "Delete", 0));
        pushButton_3->setText(QApplication::translate("TestTypeDialog", "Insert", 0));
        pushButton_4->setText(QApplication::translate("TestTypeDialog", "Add", 0));
        pushButton_5->setText(QApplication::translate("TestTypeDialog", "Move", 0));
        pushButton_6->setText(QApplication::translate("TestTypeDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class TestTypeDialog: public Ui_TestTypeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTTYPEDIALOG_H
