#include "worker.h"
#include "ui_worker.h"
#include"QFile"
#include"QTextStream"
#include"QMessageBox"
#include"QPaintEvent"
#include"QPainter"
#pragma execution_character_set("utf-8")
worker::worker(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::worker)
{
    ui->setupUi(this);
    connect(&ins,&instrument::sentsignals,this,&worker::show);
    connect(&getp,&getpatient::sentsignals_2,this,&worker::show);
    connect(&getw,&getworker::sentsignals_2,this,&worker::show);
    connect(&del,&deleteinf::sentsignals_2,this,&worker::show);

}
void worker::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect q(0,0,1920,1080);
    QRect q1(0,0,q.width(),q.height());//参数（目标大小，图片，截取的大小）
    QPixmap map(":/new/prefix1/113338nzjuyx9sdsmycc0y.jpg");
    painter.drawPixmap(q1,map,q);
}
worker::~worker()
{
    delete ui;
}
void worker::on_pushButton_3_clicked()
{
    this->hide();
    ins.show();
}
void worker::on_pushButton_clicked()
{
    this->close();
    getp.show();
}
void worker::on_pushButton_4_clicked()
{
    this->close();
    del.show();
}
void worker::on_pushButton_2_clicked()
{
    this->close();
    getw.show();
}
void worker::on_returnback_clicked()
{
    sentsignals();
    this->close();
}


