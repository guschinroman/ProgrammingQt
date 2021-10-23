#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->addButton, SIGNAL(clicked(bool)), this, SLOT(addCat()));
    connect(ui->changeButton, SIGNAL(clicked(bool)), this, SLOT(changeCat()));
    connect(ui->petsList, SIGNAL(currentRowChanged(int)), this, SLOT(showCat()));
    connect(ui->deleteButton, SIGNAL(clicked(bool)), this, SLOT(deleteCat()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addCat()
{
    qDebug() << "add cat clicked";
    int indexAdd = 0;
    Cat curCat;
    curCat.setAge(ui->age->value());
    curCat.setName(ui->name->text());
    while (indexAdd < lastCatIndex && !(curCat < cats[indexAdd])){
        indexAdd++;
    }

    if (lastCatIndex == 20){
        qDebug() << "Error";
        return;
    }
    lastCatIndex++;
    for (int i = indexAdd; i < lastCatIndex - 1; ++i){
        cats[i + 1] = cats[i];
    }
    cats[indexAdd] = curCat;

    ui->petsList->insertItem(indexAdd, curCat.getName());
}

void MainWindow::changeCat()
{
    qDebug() << "change cat clicked";

    int index = ui->petsList->currentRow();
    int saver = index;
    cats[index].setAge(ui->age->value());
    cats[index].setName(ui->name->text());

    Cat temp;
    while(index != 0 && !(cats[index-1] < cats[index])){
        temp = cats[index-1];
        cats[index-1]=cats[index];
        cats[index]=temp;
        index--;
    }

    while(index+1 != lastCatIndex && cats[index+1] < cats[index]){
        temp = cats[index+1];
        cats[index+1]=cats[index];
        cats[index]=temp;
        index++;
    }

    int pasteIndex;

    if(saver>index){
        pasteIndex = index + 1;
    } else {
        pasteIndex = index - 1;
    }
    delete ui->petsList->takeItem(ui->petsList->currentRow());
    ui->petsList->insertItem(pasteIndex, cats[pasteIndex].getName());

}

void MainWindow::showCat()
{
    qDebug() << "show current cat";
    showCat(ui->petsList->currentRow());
}

void MainWindow::deleteCat()
{
    qDebug() << "delete cat :(((";
    int index = ui->petsList->currentRow();

    if(!lastCatIndex){
        return;
    }

    for(int i = index; i<lastCatIndex-1; i++){
        cats[i] = cats[i+1];
    }

    delete ui->petsList->takeItem(ui->petsList->currentRow());

    lastCatIndex--;
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



