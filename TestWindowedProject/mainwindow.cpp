#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    bool isConnected = connect(ui->add, SIGNAL(clicked()), this, SLOT(addNumbers()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addNumbers()
{
    int firstNumber = ui->firstNumber->value();
    int secondNumber = ui->secondNumber->value();

    ui->result->setValue(firstNumber + secondNumber);
}


void MainWindow::subNumbers()
{
    QMessageBox mBox;
    mBox.setText("Hey!");
    mBox.show();
}

void MainWindow::multNumbers()
{
    QMessageBox mBox;
    mBox.setText("Hey!");
    mBox.show();
}

void MainWindow::divNumbers()
{
    QMessageBox mBox;
    mBox.setText("Hey!");
    mBox.show();
}
