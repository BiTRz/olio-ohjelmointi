#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void numberClickedHandler();
    void operationClickedHandler();
    void clearClickedHandler();
    void enterClickedHandler();

private:
    Ui::MainWindow *ui;
    QString number1, number2;
    int state = 1;
    int operand;
};

#endif // MAINWINDOW_H
