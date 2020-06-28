#include "managefuc.h"
#include "ui_managefuc.h"
#include"QPaintEvent"
#include"QPainter"
managefuc::managefuc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::managefuc)
{
    ui->setupUi(this);
    connect(&mod,&modify::sentmysignal,this,&managefuc::show);
    connect(&adp,&addpatient::sentsignals,this,&managefuc::show);
    connect(&adw,&addworker::sentsignals,this,&managefuc::show);
    connect(&getw,&getworker::sentsignals,this,&managefuc::show);
    connect(&getp,&getpatient::sentsignals,this,&managefuc::show); //返回到父窗口
    connect(&del,&deleteinf::sentmysignal,this,&managefuc::show);

}
void managefuc::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect q(0,0,1920,1080);
    QRect q1(0,0,q.width(),q.height());//参数（目标大小，图片，截取的大小）
    QPixmap map(":/new/prefix1/113338nzjuyx9sdsmycc0y.jpg");
    painter.drawPixmap(q1,map,q);
}
managefuc::~managefuc()
{
    delete ui;
}
void managefuc::on_addw_clicked()
{
    this->hide();
    adw.show();
}
void managefuc::on_addp_clicked()
{
    this->close();
    adp.show();
}
void managefuc::on_getw_clicked()
{
    this->close();
    getw.show();
}
void managefuc::on_getp_clicked()
{
    this->close();
    getp.show();
}
void managefuc::on_deletein_clicked()
{
    this->close();
    del.show();
}
void managefuc::on_mod_clicked()
{
    this->close();
    mod.show();
}
void  managefuc::on_returnback_clicked()
{
    sentsignals();

    this->close();
}

