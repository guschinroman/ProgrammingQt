#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cat.h"
#include "fraction.h"
#include <QDate>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->save, SIGNAL(clicked()), this, SLOT(save()));
    connect(ui->load, SIGNAL(clicked()), this, SLOT(load()));

    this->cat.Meow();
    this->cat.Meow("Hey!");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::save()
{
    //this->cat.name = ui->name->text();
    this->cat.setWeigth(ui->weigth->value());
    QMessageBox mBox;
    Cat cat;
    Cat catTwo("name1", 23);

    QString str1("AAAAAAAAAAAAAAA");
    QString str2(15, 'A');

    QDate date1;

    date1.day(); // динамический

    QDate::isValid(2020, 13, 20); //статический

    QString FIO(""); // ФИО
    QString fisrtName("Козлов"); // фамилия
    QString name("Андрей"); // имя
    QString patronymic("Петрович"); // отчество

    FIO.append(fisrtName)
            .append(name)
            .append(patronymic);

    QDate stringDate = QDate::currentDate();
    int cyDate = stringDate.daysInYear();

    QString strDate = stringDate
            .toString("dd.MM.yyyy")
            .prepend("Today is ");

    QString strCat("кот, который живет на крыше");
    auto indexCatFirst = strCat.indexOf(QString("тор"));
    auto indexCatSecond = strCat.indexOf(QString("тор"), 10);

    auto N = 50;
    auto secondNameArr = new QString[N];
    auto oneStr = new QString("23423");

    secondNameArr[0] = "Test Testov Testovich";

    delete [] secondNameArr;

    Fraction f1, f2;

    f1.setNumerator(23);
    f1.setDenominator(15);
    auto value = f1.toDouble();

    mBox.setText(strDate + cyDate);

    mBox.exec();
}

void MainWindow::load()
{
    //ui->name->setText(this->cat.name);
    //ui->weigth->setValue(this->cat.weigth);
    QMessageBox mBox;

    Cat catTwo;
    mBox.setText("Loaded");
    mBox.exec();
}

