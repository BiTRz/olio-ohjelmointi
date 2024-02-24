/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnNum1;
    QPushButton *btnNum4;
    QPushButton *btnNum7;
    QPushButton *btnNum0;
    QPushButton *btnNum2;
    QPushButton *btnNum5;
    QPushButton *btnNum8;
    QPushButton *btnClear;
    QPushButton *btnNum3;
    QPushButton *btnNum6;
    QPushButton *btnNum9;
    QPushButton *btnEnter;
    QPushButton *btnSub;
    QPushButton *btnMul;
    QPushButton *btnDiv;
    QPushButton *btnAdd;
    QLabel *num1;
    QLabel *num2;
    QLabel *result;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(355, 266);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btnNum1 = new QPushButton(centralwidget);
        btnNum1->setObjectName("btnNum1");
        btnNum1->setGeometry(QRect(30, 70, 61, 21));
        btnNum4 = new QPushButton(centralwidget);
        btnNum4->setObjectName("btnNum4");
        btnNum4->setGeometry(QRect(30, 100, 61, 21));
        btnNum7 = new QPushButton(centralwidget);
        btnNum7->setObjectName("btnNum7");
        btnNum7->setGeometry(QRect(30, 130, 61, 21));
        btnNum0 = new QPushButton(centralwidget);
        btnNum0->setObjectName("btnNum0");
        btnNum0->setGeometry(QRect(30, 160, 61, 21));
        btnNum2 = new QPushButton(centralwidget);
        btnNum2->setObjectName("btnNum2");
        btnNum2->setGeometry(QRect(110, 70, 61, 21));
        btnNum5 = new QPushButton(centralwidget);
        btnNum5->setObjectName("btnNum5");
        btnNum5->setGeometry(QRect(110, 100, 61, 21));
        btnNum8 = new QPushButton(centralwidget);
        btnNum8->setObjectName("btnNum8");
        btnNum8->setGeometry(QRect(110, 130, 61, 21));
        btnClear = new QPushButton(centralwidget);
        btnClear->setObjectName("btnClear");
        btnClear->setGeometry(QRect(110, 160, 61, 21));
        btnNum3 = new QPushButton(centralwidget);
        btnNum3->setObjectName("btnNum3");
        btnNum3->setGeometry(QRect(190, 70, 61, 21));
        btnNum6 = new QPushButton(centralwidget);
        btnNum6->setObjectName("btnNum6");
        btnNum6->setGeometry(QRect(190, 100, 61, 21));
        btnNum9 = new QPushButton(centralwidget);
        btnNum9->setObjectName("btnNum9");
        btnNum9->setGeometry(QRect(190, 130, 61, 21));
        btnEnter = new QPushButton(centralwidget);
        btnEnter->setObjectName("btnEnter");
        btnEnter->setGeometry(QRect(190, 160, 61, 21));
        btnSub = new QPushButton(centralwidget);
        btnSub->setObjectName("btnSub");
        btnSub->setGeometry(QRect(270, 100, 61, 21));
        btnMul = new QPushButton(centralwidget);
        btnMul->setObjectName("btnMul");
        btnMul->setGeometry(QRect(270, 130, 61, 21));
        btnDiv = new QPushButton(centralwidget);
        btnDiv->setObjectName("btnDiv");
        btnDiv->setGeometry(QRect(270, 160, 61, 21));
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(270, 70, 61, 21));
        num1 = new QLabel(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(30, 0, 71, 20));
        QFont font;
        font.setPointSize(11);
        num1->setFont(font);
        num2 = new QLabel(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(130, 0, 71, 20));
        num2->setFont(font);
        result = new QLabel(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(230, 0, 71, 20));
        result->setFont(font);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 30, 71, 21));
        lineEdit->setReadOnly(true);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(130, 30, 71, 21));
        lineEdit_2->setReadOnly(true);
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(230, 30, 71, 21));
        lineEdit_3->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 355, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Laskin", nullptr));
        btnNum1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btnNum4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btnNum7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btnNum0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnNum2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btnNum5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btnNum8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        btnNum3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btnNum6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btnNum9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btnEnter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        btnSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnMul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btnDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        num1->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        num2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
