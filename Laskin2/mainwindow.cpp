#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->N0, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N1, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N2, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N3, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N4, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N5, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N6, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N7, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N8, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N9, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);



    connect(ui->add, &QPushButton::clicked, this, &MainWindow::operationClickedHandler);
    connect(ui->sub, &QPushButton::clicked, this, &MainWindow::operationClickedHandler);
    connect(ui->mul, &QPushButton::clicked, this, &MainWindow::operationClickedHandler);
    connect(ui->div, &QPushButton::clicked, this, &MainWindow::operationClickedHandler);



    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::clearClickedHandler);
    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::enterClickedHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    qDebug() << "Button name:" << button->objectName();
    if (state == 1) {
        number1.append(button->text());
        ui->num1->setText(number1);
        qDebug() << "Number 1 = " << number1;
    } else if (state == 2) {
        number2.append(button->text());
        ui->num2->setText(number2);
        qDebug() << "Number 2 = " << number2;
    }
}

void MainWindow::operationClickedHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    qDebug() << "Operation:" << button->text();
    if (button->text() == "+") {
        operand = 0;
    } else if (button->text() == "-") {
        operand = 1;
    } else if (button->text() == "*") {
        operand = 2;
    } else if (button->text() == "/") {
        operand = 3;
    }
    state = 2;
}
void MainWindow::clearClickedHandler()
{
    state = 1;
    number1.clear();
    number2.clear();
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}

void MainWindow::enterClickedHandler()
{
    float n1 = number1.toFloat();
    float n2 = number2.toFloat();
    float res;
    switch(operand) {
    case 0:
        res = n1 + n2;
        break;
    case 1:
        res = n1 - n2;
        break;
    case 2:
        res = n1 * n2;
        break;
    case 3:
        if (n2 != 0) {
            res = n1 / n2;
        } else {
            qDebug() << "Division by zero!";
            return;
        }
        break;
    }
    ui->result->setText(QString::number(res));
    qDebug() << "Result = " << res;
}
