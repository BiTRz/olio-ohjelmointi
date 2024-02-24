#include "form2.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui=nullptr;
}

void MainWindow::on_btnTest_clicked()
{
    x++;
    QString s = QString::number(x);
    qDebug()<<"Painiketta painettu";
    ui->labelResult->setText("Painiketta painettu: "+s+" kertaa");
}


void MainWindow::on_btnSave_clicked()
{
    fname=ui->textFname->text();
    lname=ui->textLname->text();
    ui->labelMessage->setText("Terve "+fname+" "+lname);
}


void MainWindow::on_tbnOpenForm2_clicked()
{
    qDebug()<<"btnOpenForm2 klikattu";
    //QString fname=ui->textFname->text();
    Form2 *objectForm2=new Form2(this);
    objectForm2->setFname(fname);
    objectForm2->setLname(lname);
    //objectForm2->open(); //Mainwindow:n ei voi kirjoittaa, jos Form2 auki
    objectForm2->show(); // Mainwindow:n voi kirjoittaa jos Form2 auki
}

