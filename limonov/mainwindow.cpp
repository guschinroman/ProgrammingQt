#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->saveButton,SIGNAL(clicked()),this,SLOT(saveHuman()));
    connect(ui->cancelButton,SIGNAL(clicked()), this, SLOT(cancelHuman()));
    connect(ui->addButton, SIGNAL(clicked()), this, SLOT(addCitizenship()));
    connect(ui->deleteButton, SIGNAL(clicked()), this, SLOT(deleteCitizenship()));
}

void MainWindow::saveHuman()
{
    human.setName(ui->name->text());
    human.setSurname(ui->surname->text());
    human.setAge(ui->age->value());
}

void MainWindow::cancelHuman()
{
    ui->name->setText(human.getName());
    ui->surname->setText(human.getSurname());
    ui->age->setValue(human.getAge());
}

void MainWindow::addCitizenship()
{
    Citizenship newCitizenship;
    newCitizenship.setCitizenship(ui->citizenship->text());
    human.addCitizenship(newCitizenship);
    ui->citizenshipList->addItem(ui->citizenship->text());
}

void MainWindow::deleteCitizenship()
{
    int deleteCitizenship;
    deleteCitizenship = ui->citizenshipList->currentRow();
    if (deleteCitizenship == -1)
        return;
    human.removeCitizenship(deleteCitizenship);
    ui->citizenshipList->takeItem(deleteCitizenship);
}
MainWindow::~MainWindow()
{
    delete ui;
}

