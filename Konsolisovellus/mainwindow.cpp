#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    qDebug()<<"Luku kasvaa";
    count++;
    ui->lineEdit->setText(QString::number(count));
}


void MainWindow::on_btnReset_clicked()
{
    qDebug()<<"Luku nollaantuu";
    count = 0;
    ui->lineEdit->setText(QString::number(count));
}

