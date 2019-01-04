/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <mytextedit.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionPrint;
    QWidget *centralWidget;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLineEdit *lineEdit_10;
    QTextEdit *textEdit_10;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_8;
    QTextEdit *textEdit_7;
    MyTextEdit *textEdit_3;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_9;
    MyTextEdit *textEdit;
    QGroupBox *groupBox_6;
    QGroupBox *groupBox_5;
    QLineEdit *lineEdit_Desc;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit_77;
    QLabel *label_3;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_Fr;
    QLabel *label;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_78;
    QComboBox *comboBox_2;
    QLabel *label_13;
    QLineEdit *lineEdit_79;
    QLabel *label_14;
    QGroupBox *groupBox_3;
    QComboBox *comboBox;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuRun;
    QMenu *menuPort;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(853, 514);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/new"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/openfile"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave->setCheckable(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/saveas"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCut->setCheckable(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/cut"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon3);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionCopy->setCheckable(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/copy"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/paste"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon5);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/printer"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 130, 621, 121));
        layoutWidget = new QWidget(groupBox_7);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 601, 24));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setAlignment(Qt::AlignCenter);
        lineEdit_7->setReadOnly(true);

        horizontalLayout_7->addWidget(lineEdit_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_6->addWidget(label_12);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setAlignment(Qt::AlignCenter);
        lineEdit_8->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_8);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        lineEdit_9 = new QLineEdit(layoutWidget);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setAlignment(Qt::AlignCenter);
        lineEdit_9->setReadOnly(true);

        horizontalLayout_7->addWidget(lineEdit_9);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_5->addWidget(label_11);

        lineEdit_10 = new QLineEdit(layoutWidget);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setAlignment(Qt::AlignCenter);
        lineEdit_10->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_10);


        horizontalLayout_7->addLayout(horizontalLayout_5);

        textEdit_10 = new QTextEdit(groupBox_7);
        textEdit_10->setObjectName(QStringLiteral("textEdit_10"));
        textEdit_10->setGeometry(QRect(10, 50, 41, 41));
        textEdit_10->setReadOnly(true);
        textEdit_2 = new QTextEdit(groupBox_7);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(140, 40, 31, 71));
        textEdit_2->setReadOnly(true);
        textEdit_4 = new QTextEdit(groupBox_7);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(240, 40, 31, 71));
        textEdit_4->setReadOnly(true);
        textEdit_8 = new QTextEdit(groupBox_7);
        textEdit_8->setObjectName(QStringLiteral("textEdit_8"));
        textEdit_8->setGeometry(QRect(460, 40, 51, 71));
        textEdit_8->setReadOnly(true);
        textEdit_7 = new QTextEdit(groupBox_7);
        textEdit_7->setObjectName(QStringLiteral("textEdit_7"));
        textEdit_7->setGeometry(QRect(400, 40, 51, 71));
        textEdit_7->setReadOnly(true);
        textEdit_3 = new MyTextEdit(groupBox_7);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(180, 40, 51, 71));
        textEdit_3->setReadOnly(true);
        textEdit_5 = new QTextEdit(groupBox_7);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setGeometry(QRect(280, 40, 51, 71));
        textEdit_5->setReadOnly(true);
        textEdit_6 = new QTextEdit(groupBox_7);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setGeometry(QRect(340, 40, 51, 71));
        textEdit_6->setReadOnly(true);
        textEdit_9 = new QTextEdit(groupBox_7);
        textEdit_9->setObjectName(QStringLiteral("textEdit_9"));
        textEdit_9->setGeometry(QRect(520, 40, 41, 71));
        textEdit_9->setReadOnly(true);
        textEdit = new MyTextEdit(groupBox_7);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(80, 40, 51, 71));
        textEdit->setReadOnly(true);
        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 10, 571, 111));
        groupBox_5 = new QGroupBox(groupBox_6);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(130, 0, 431, 51));
        lineEdit_Desc = new QLineEdit(groupBox_5);
        lineEdit_Desc->setObjectName(QStringLiteral("lineEdit_Desc"));
        lineEdit_Desc->setGeometry(QRect(10, 20, 411, 20));
        groupBox_2 = new QGroupBox(groupBox_6);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(130, 50, 111, 51));
        lineEdit_77 = new QLineEdit(groupBox_2);
        lineEdit_77->setObjectName(QStringLiteral("lineEdit_77"));
        lineEdit_77->setGeometry(QRect(10, 20, 71, 20));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 20, 21, 16));
        groupBox = new QGroupBox(groupBox_6);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 111, 51));
        lineEdit_Fr = new QLineEdit(groupBox);
        lineEdit_Fr->setObjectName(QStringLiteral("lineEdit_Fr"));
        lineEdit_Fr->setGeometry(QRect(10, 20, 71, 20));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 20, 21, 16));
        groupBox_4 = new QGroupBox(groupBox_6);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(250, 50, 311, 52));
        horizontalLayout = new QHBoxLayout(groupBox_4);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_78 = new QLineEdit(groupBox_4);
        lineEdit_78->setObjectName(QStringLiteral("lineEdit_78"));

        horizontalLayout->addWidget(lineEdit_78);

        comboBox_2 = new QComboBox(groupBox_4);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);

        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout->addWidget(label_13);

        lineEdit_79 = new QLineEdit(groupBox_4);
        lineEdit_79->setObjectName(QStringLiteral("lineEdit_79"));

        horizontalLayout->addWidget(lineEdit_79);

        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout->addWidget(label_14);

        groupBox_3 = new QGroupBox(groupBox_6);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 50, 111, 51));
        comboBox = new QComboBox(groupBox_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 20, 91, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 853, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuRun = new QMenu(menuBar);
        menuRun->setObjectName(QStringLiteral("menuRun"));
        menuPort = new QMenu(menuBar);
        menuPort->setObjectName(QStringLiteral("menuPort"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuRun->menuAction());
        menuBar->addAction(menuPort->menuAction());
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPrint);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionNew->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", 0));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272", 0));
#endif // QT_NO_TOOLTIP
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0));
#endif // QT_NO_TOOLTIP
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0));
#endif // QT_NO_TOOLTIP
        actionCut->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207", 0));
#ifndef QT_NO_TOOLTIP
        actionCut->setToolTip(QApplication::translate("MainWindow", "\345\211\252\345\210\207", 0));
#endif // QT_NO_TOOLTIP
        actionCopy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266", 0));
#ifndef QT_NO_TOOLTIP
        actionCopy->setToolTip(QApplication::translate("MainWindow", "\345\244\215\345\210\266", 0));
#endif // QT_NO_TOOLTIP
        actionPaste->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264", 0));
#ifndef QT_NO_TOOLTIP
        actionPaste->setToolTip(QApplication::translate("MainWindow", "\347\262\230\350\264\264", 0));
#endif // QT_NO_TOOLTIP
        actionPrint->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260", 0));
#ifndef QT_NO_TOOLTIP
        actionPrint->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\215\260", 0));
#endif // QT_NO_TOOLTIP
        groupBox_7->setTitle(QString());
        lineEdit_7->setText(QApplication::translate("MainWindow", "Port A", 0));
        label_12->setText(QApplication::translate("MainWindow", "PL:", 0));
        lineEdit_8->setText(QApplication::translate("MainWindow", "No Load", 0));
        lineEdit_9->setText(QApplication::translate("MainWindow", "12.5 0hm PI", 0));
        label_11->setText(QApplication::translate("MainWindow", "Standard:", 0));
        lineEdit_10->setText(QApplication::translate("MainWindow", "Internal", 0));
        groupBox_6->setTitle(QString());
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Description", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Reference CL", 0));
        label_3->setText(QApplication::translate("MainWindow", "pF", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Reference Fr", 0));
        label->setText(QApplication::translate("MainWindow", "Hz", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Power Applied", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "nW", 0)
        );
        label_13->setText(QApplication::translate("MainWindow", "into", 0));
        label_14->setText(QApplication::translate("MainWindow", "0hms", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Mode", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Measured FL", 0)
        );
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0));
        menuRun->setTitle(QApplication::translate("MainWindow", "Run", 0));
        menuPort->setTitle(QApplication::translate("MainWindow", "Port", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
