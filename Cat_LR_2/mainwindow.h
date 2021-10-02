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
    Cat cats[2];
    Ui::MainWindow *ui;
    void saveCat(int index);
    void showCat(int index);

private slots:
    void showFirstCat();
    void showSecondCat();
    void saveFirstCat();
    void saveSecondCat();
};
#endif // MAINWINDOW_H
