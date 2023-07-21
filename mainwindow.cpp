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
}


void MainWindow::inputText()
{
    firstNumber = ui->txtFirstNum->text().toInt();
    secondNumber = ui->txtSecondNum->text().toInt();
}


void MainWindow::on_btnAdd_clicked()
{
    inputText();
    result = firstNumber + secondNumber;
    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_btnMinus_clicked()
{
    inputText();
    result = firstNumber - secondNumber;
    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_btnDivision_clicked()
{
    inputText();
    result = firstNumber / secondNumber;
    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_btnMultiply_clicked()
{
    inputText();
    result = firstNumber * secondNumber;
    ui->txtResult->setText(QString::number(result));
}

