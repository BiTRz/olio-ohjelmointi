#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer(this);
    connect(pQTimer, &QTimer::timeout, this, &MainWindow::timeout);
    player1Time = 0;
    player2Time = 0;
    currentPlayer = 1;
    gameTime = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeout()
{
    if(currentPlayer == 1) {
        if(player1Time > 0) {
            player1Time--;
        } else {
            pQTimer->stop();
            setGameInfoText("Pelaaja 2 voitti!!", 12);
            return;
        }
    } else {
        if(player2Time > 0) {
            player2Time--;
        } else {
            pQTimer->stop();
            setGameInfoText("Pelaaja 1 voitti!!", 12);
            return;
        }
    }
    updateProgressBar();

}

void MainWindow::updateProgressBar()
{
    ui->progressBarPlayer1->setValue((player1Time / (float)gameTime) * 100);
    ui->progressBarPlayer2->setValue((player2Time / (float)gameTime) * 100);
}

void MainWindow::setGameInfoText(QString text, short fontSize)
{
    QFont font = ui->labelGameInfo->font();
    font.setPointSize(fontSize);
    ui->labelGameInfo->setFont(font);
    ui->labelGameInfo->setText(text);
}


void MainWindow::on_btnSwitch1_clicked()
{
    currentPlayer = 2;
    pQTimer->start(1000);
    setGameInfoText("Vuoro: Pelaaja 2", 12);
}


void MainWindow::on_btnSwitch2_clicked()
{
    currentPlayer = 1;
    pQTimer->start(1000);
    setGameInfoText("Vuoro: Pelaaja 1", 12);
}


void MainWindow::on_btn120sec_clicked()
{
    gameTime = player1Time = player2Time = 120;
    updateProgressBar();
    setGameInfoText("Valittu peliaika: 120 sekunttia", 12);
}


void MainWindow::on_btn5min_clicked()
{
    gameTime = player1Time = player2Time = 300;
    updateProgressBar();
    setGameInfoText("Valittu peliaika: 5 minuuttia", 12);
}


void MainWindow::on_btnStart_clicked()
{
    pQTimer->start(1000);
    setGameInfoText("Peli on alkanut Pelaaja 1:n vuoro!", 12);
}


void MainWindow::on_btnStop_clicked()
{
    pQTimer->stop();
    setGameInfoText("Peli on pysäytetty. Aloita uusi peli valitsemalla peliaika ja painamalla START GAME.", 12);
}

