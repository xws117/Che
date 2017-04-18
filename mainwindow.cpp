#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "con.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget_big->tabBar()->hide();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->tabWidget_big->setCurrentIndex(0);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->tabWidget_big->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->tabWidget_big->setCurrentIndex(2);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->tabWidget_big->setCurrentIndex(3);
}
