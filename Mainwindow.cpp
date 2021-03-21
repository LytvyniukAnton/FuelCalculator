#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setStyleSheet("background-color: blue;");
    //ui->doubleSpinBoxDistance->setStyleSheet("background-color: yellow;");
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    this->setStyleSheet("{background-image: url(C:\\Users\\admin\\Desktop\\vaz09001.jpg)}");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonCalc_clicked()
{
    double distance = ui->doubleSpinBoxDistance->value();
    double spend = ui->doubleSpinBoxSpend->value();
    double quantyty = distance * spend / 100.0;

    ui->lineEditNumberOfLiters->setText(QString::number(quantyty));
}

void MainWindow::on_doubleSpinBoxSpend_editingFinished(){}

void MainWindow::on_lineEditNumberOfLiters_cursorPositionChanged(int arg1, int arg2){}

void MainWindow::on_pushButtonCalc_2_clicked()
{
    double price = ui->doubleSpinBoxPrice->value();
    double distance = ui->doubleSpinBoxDistance->value();
    double spend = ui->doubleSpinBoxSpend->value();
    double quantyty = distance * spend / 100.0;
    double cost = price * quantyty;

    ui->lineEditNumberOfLiters_2->setText(QString::number(cost));
}

void MainWindow::on_actionExit_3_triggered()
{
    close();
}

void MainWindow::on_pushButton_clicked()
{
    double distance1 = ui->doubleSpinBoxDistance_2->value();
    double inCar = ui->doubleSpinBoxSpend_2->value();
    double spend1 = inCar * 100.0 / distance1;

    ui->lineEditNumberOfLiters_4->setText(QString::number(spend1));
}

void MainWindow::on_doubleSpinBoxDistance_2_editingFinished(){}

void MainWindow::on_lineEditNumberOfLiters_3_cursorPositionChanged(int arg1, int arg2){}

void MainWindow::on_lineEditNumberOfLiters_4_cursorPositionChanged(int arg1, int arg2){}

void MainWindow::on_doubleSpinBoxSpend_2_editingFinished(){}

void MainWindow::on_lineEditNumberOfLiters_5_cursorPositionChanged(int arg1, int arg2){}

void MainWindow::on_pushButtonCalc_3_clicked()
{
    double price1 = ui->doubleSpinBoxPrice_2->value();
    double haveLitrs = ui->doubleSpinBoxPrice_3->value();
    double cost2 = price1 * haveLitrs;

    ui->lineEditNumberOfLiters_3->setText(QString::number(cost2));
}

void MainWindow::on_doubleSpinBoxPrice_2_editingFinished(){}

void MainWindow::on_doubleSpinBoxPrice_3_editingFinished(){}

void MainWindow::on_lineEditNumberOfLiters_2_cursorPositionChanged(int arg1, int arg2){}
