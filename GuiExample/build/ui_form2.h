/********************************************************************************
** Form generated from reading UI file 'form2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM2_H
#define UI_FORM2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Form2
{
public:
    QLabel *label;
    QLabel *labelFname;
    QLabel *labelLname;

    void setupUi(QDialog *Form2)
    {
        if (Form2->objectName().isEmpty())
            Form2->setObjectName("Form2");
        Form2->resize(496, 336);
        label = new QLabel(Form2);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 50, 201, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        labelFname = new QLabel(Form2);
        labelFname->setObjectName("labelFname");
        labelFname->setGeometry(QRect(100, 160, 171, 31));
        QFont font1;
        font1.setPointSize(16);
        labelFname->setFont(font1);
        labelLname = new QLabel(Form2);
        labelLname->setObjectName("labelLname");
        labelLname->setGeometry(QRect(100, 200, 171, 31));
        labelLname->setFont(font1);

        retranslateUi(Form2);

        QMetaObject::connectSlotsByName(Form2);
    } // setupUi

    void retranslateUi(QDialog *Form2)
    {
        Form2->setWindowTitle(QCoreApplication::translate("Form2", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Form2", "Toinen ikkuna", nullptr));
        labelFname->setText(QCoreApplication::translate("Form2", "TextLabel", nullptr));
        labelLname->setText(QCoreApplication::translate("Form2", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form2: public Ui_Form2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM2_H
