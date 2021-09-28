#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <human.h>

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
    Ui::MainWindow *ui;
    Human human;

private slots:
    void saveHuman();
    void cancelHuman();
    void addCitizenship();
    void deleteCitizenship();
};
#endif // MAINWINDOW_H
