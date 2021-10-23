#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cat.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Cat cats[20];
    int lastCatIndex = 0;
    Ui::MainWindow *ui;
    void saveCat(int index);
    void showCat(int index);
    void insertToListWidget(int index);
    int getIndex(Cat cat);

private slots:
    void addCat();
    void showCat();
    void deleteCat();
    void changeCat();
};
#endif // MAINWINDOW_H
