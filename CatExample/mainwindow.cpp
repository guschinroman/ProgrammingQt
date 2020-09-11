#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->save, SIGNAL(clicked()), this, SLOT(save()));
    connect(ui->load, SIGNAL(clicked()), this, SLOT(load()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::save()
{
    this->cat.name = ui->name->text();
    this->cat.weigth = ui->weigth->value();
    QMessageBox mBox;
    mBox.setText("Saved");
    mBox.exec();
}

void MainWindow::load()
{
    ui->name->setText(this->cat.name);
    ui->weigth->setValue(this->cat.weigth);
    QMessageBox mBox;
    mBox.setText("Loaded");
    mBox.exec();
}

