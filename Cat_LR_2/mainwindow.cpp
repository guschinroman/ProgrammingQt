#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->saveFirstCat, SIGNAL(clicked(bool)), this, SLOT(saveFirstCat()));
    connect(ui->saveSecondCat, SIGNAL(clicked(bool)), this, SLOT(saveSecondCat()));
    connect(ui->showFirstCat, SIGNAL(clicked(bool)), this, SLOT(showFirstCat()));
    connect(ui->showSecondCat, SIGNAL(clicked(bool)), this, SLOT(showSecondCat()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::saveFirstCat()
{
    qDebug() << "save first cat clicked";
    saveCat(0);
}

void MainWindow::saveSecondCat()
{
    qDebug() << "save second cat clicked";
    saveCat(1);
}

void MainWindow::showFirstCat()
{
    qDebug() << "show first cat";
    showCat(0);
}

void MainWindow::showSecondCat()
{
    qDebug() << "show second cat";
    showCat(1);
}

void MainWindow::saveCat(int index)
{
    cats[index].setAge(ui->age->value());
    cats[index].setName(ui->name->text());
}

void MainWindow::showCat(int index)
{
    ui->age->setValue(cats[index].getAge());
    ui->name->setText(cats[index].getName());
}
