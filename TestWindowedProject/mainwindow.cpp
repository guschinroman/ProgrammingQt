#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fraction.h"
#include <QMessageBox>
#include <QDebug>
#include <QListIterator>
#include <QLinkedList>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QVector<int> vector;
    QLinkedList<QString> list;
    QMap<QString, int> cities;

    cities.insert("Волгоград", 1080000);
    cities.insert("Волжский", 320000);
    cities.insert("Заозерск", 3);

    QMapIterator<QString, int> cities_it_const(cities);
    QMutableMapIterator<QString, int> cities_it(cities);

    QMap<QString,int>::const_iterator cities_stl_const;
    QMap<QString, int>::iterator cities_stl;

    cities_stl_const = cities.constBegin();
    cities_stl = cities.end();

    for(cities_stl = cities.begin(); cities_stl != cities.end(); cities_stl++)
    {
        if(*(cities_stl) < 1000)
            cities.erase(cities_stl);
    }

    for(cities_stl = cities.begin(); cities_stl != cities.end(); cities_stl++)
    {
        qDebug() << cities_stl.key() << " " << cities_stl.value();
    }

    qDebug() << cities_stl_const.key() << " " << cities_stl_const.value();
    cities_stl_const++;
    qDebug() << cities_stl_const.key() << " " << cities_stl_const.value();

    while(cities_it_const.hasNext())
    {
        cities_it_const.next();
        qDebug() << cities_it_const.key();
    }

    while(cities_it.hasNext())
    {
        cities_it.next();
        if (cities_it.value() > 1000)
            cities_it.remove();
    }

    qDebug() << "------------------------------";
    cities_it.toFront();
    while(cities_it.hasNext())
    {
        cities_it.next();
        qDebug() << cities_it.key();
    }

    vector << 1 << 2 << 456 << 9;
    for(int i = 0; i < vector.size(); i++)
    {
        qDebug() << vector[i];
        list << QString::number(vector[i]);
    }

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
