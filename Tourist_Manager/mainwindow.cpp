#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrAddPackage = new AddPackage();
    ptrRegisterTourist = new RegisterTourist();
    ptrFindPackge = new FindPackage();
    ptrFindTourist = new FindTourist();
}

MainWindow::~MainWindow()
{
    delete ptrAddPackage;
    delete ptrRegisterTourist;
    delete ptrFindPackge;
    delete ptrFindTourist;

    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ptrAddPackage->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    ptrRegisterTourist->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    ptrFindPackge->show();
}


void MainWindow::on_pushButton_4_clicked()
{
    ptrFindTourist->show();
}

