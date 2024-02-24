#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QPushButton>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnNum0, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->btnNum1, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->btnNum2, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->btnNum3, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->btnNum4, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->btnNum5, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->btnNum6, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->btnNum7, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->btnNum8, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->btnNum9, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->btnAdd, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->btnSub, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->btnMul, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->btnDiv, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->btnClear, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
    connect(ui->btnEnter, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton* button = (QPushButton*)sender();
    // Haetaan painetun näppäimen numero
    int number = button->text().toInt();
    // Lisätään numero oikeaan QStringiin
    if (state == 1) {
        number1.append(QString::number(number));
        ui->num1->setText(number1); // Päivitä num1 QLineEdit-olio reaaliajassa
    } else {
        number2.append(QString::number(number));
        ui->num2->setText(number2); // Päivitä num2 QLineEdit-olio reaaliajassa
    }
    qDebug() << "Number1: " << number1;
    qDebug() << "Number2: " << number2;
}




void MainWindow::clearAndEnterClickHandler()
{
    QPushButton* button = (QPushButton*)sender();
    // Jos painettu nappi oli Clear, nollataan kaikki
    if (button->text() == "Clear") {
        state = 1;
        number1 = "";
        number2 = "";
        ui->num1->clear();
        ui->num2->clear();
        ui->result->clear();
        // Jos painettu nappi oli Enter, suoritetaan laskutoimitus
    } else if (button->text() == "Enter") {
        float num1 = number1.toFloat();
        float num2 = number2.toFloat();
        if (operand == 0) {
            result = num1 + num2;
        } else if (operand == 1) {
            result = num1 - num2;
        } else if (operand == 2) {
            result = num1 * num2;
        } else if (operand == 3) {
            result = num1 / num2;
        }
        ui->result->setText(QString::number(result));
    }
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton* button = (QPushButton*)sender();
    // Haetaan painetun näppäimen operaatio
    QString operation = button->text();
    // Tallennetaan operaatio operand-muuttujaan
    if (operation == "+") {
        operand = 0;
    } else if (operation == "-") {
        operand = 1;
    } else if (operation == "*") {
        operand = 2;
    } else if (operation == "/") {
        operand = 3;
    }
    // Vaihdetaan tila
    state = 2;

}


