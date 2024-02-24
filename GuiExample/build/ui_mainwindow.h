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
    QPushButton *btnTest;
    QLabel *labelResult;
    QLabel *label;
    QLineEdit *textFname;
    QLabel *label_2;
    QLineEdit *textLname;
    QPushButton *btnSave;
    QLabel *labelMessage;
    QPushButton *tbnOpenForm2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btnTest = new QPushButton(centralwidget);
        btnTest->setObjectName("btnTest");
        btnTest->setGeometry(QRect(80, 80, 241, 121));
        QFont font;
        font.setPointSize(18);
        btnTest->setFont(font);
        labelResult = new QLabel(centralwidget);
        labelResult->setObjectName("labelResult");
        labelResult->setGeometry(QRect(80, 200, 411, 61));
        labelResult->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 270, 201, 31));
        label->setFont(font);
        textFname = new QLineEdit(centralwidget);
        textFname->setObjectName("textFname");
        textFname->setGeometry(QRect(190, 280, 113, 20));
        textFname->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 300, 201, 31));
        label_2->setFont(font);
        textLname = new QLineEdit(centralwidget);
        textLname->setObjectName("textLname");
        textLname->setGeometry(QRect(190, 310, 113, 20));
        textLname->setFont(font);
        btnSave = new QPushButton(centralwidget);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(190, 360, 121, 51));
        btnSave->setFont(font);
        labelMessage = new QLabel(centralwidget);
        labelMessage->setObjectName("labelMessage");
        labelMessage->setGeometry(QRect(70, 450, 281, 31));
        tbnOpenForm2 = new QPushButton(centralwidget);
        tbnOpenForm2->setObjectName("tbnOpenForm2");
        tbnOpenForm2->setGeometry(QRect(190, 460, 121, 51));
        tbnOpenForm2->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnTest->setText(QCoreApplication::translate("MainWindow", "Testaa", nullptr));
        labelResult->setText(QCoreApplication::translate("MainWindow", "ALOITUS", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Etunimi", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Sukunimi", nullptr));
        btnSave->setText(QCoreApplication::translate("MainWindow", "Tallenna", nullptr));
        labelMessage->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tbnOpenForm2->setText(QCoreApplication::translate("MainWindow", "Avaa Form2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
