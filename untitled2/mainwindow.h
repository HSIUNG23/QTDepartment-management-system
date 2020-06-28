#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"workerlogin.h"
#include"patientlogin.h"
#include"manager.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_worker_clicked();
    void on_people_clicked();
    void on_manager_clicked();
private:
    Ui::MainWindow *ui;
    workerlogin wloginmenu;
    patientlogin ploginmenu;
    manager mlohinmenu;
    void paintEvent(QPaintEvent *event);
};

#endif // MAINWINDOW_H
