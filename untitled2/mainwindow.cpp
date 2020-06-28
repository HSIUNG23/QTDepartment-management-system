#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QMessageBox>
#include <QFileDialog>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <QStringList>
#include <QDebug>
#include<QPainter>
#include"QPaintEvent"
#include"QPainter"
#pragma execution_character_set("utf-8")
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(&mlohinmenu,&manager::sentsignals,this,&managefuc::show);
    connect(&wloginmenu,&workerlogin::sentsignals,this,&managefuc::show);
    connect(&ploginmenu,&patientlogin::sentsignals,this,&managefuc::show);


}
void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect q(400,200,1200,800);
    QRect q1(0,0,q.width(),q.height());//参数（目标大小，图片，截取的大小）
    QPixmap map(":/new/prefix1/113338nzjuyx9sdsmycc0y.jpg");
    painter.drawPixmap(q1,map,q);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_worker_clicked()
{
    this->close();
    wloginmenu.show();
}
void MainWindow::on_people_clicked()
{
    this->close();
    ploginmenu.show();
}
void MainWindow::on_manager_clicked()
{
    this->close();
    mlohinmenu.show();
}

