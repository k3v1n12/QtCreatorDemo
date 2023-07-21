#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void inputText();
    ~MainWindow();

private slots:
    void on_btnAdd_clicked();

    void on_btnMinus_clicked();

    void on_btnDivision_clicked();

    void on_btnMultiply_clicked();

private:
    Ui::MainWindow *ui;
    int firstNumber, secondNumber, result;
};
#endif // MAINWINDOW_H
