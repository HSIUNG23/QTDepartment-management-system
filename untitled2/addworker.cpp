#include "addworker.h"
#include "ui_addworker.h"
#include"QMessageBox"
#include"QFile"
#include"QTextStream"
#include"QDebug"
#include"QPaintEvent"
#include"QPainter"
#pragma execution_character_set("utf-8")
int flag2=1;
addworker::addworker(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addworker)
{
    ui->setupUi(this);
}
void addworker::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect q(0,0,1920,1080);
    QRect q1(0,0,q.width(),q.height());//参数（目标大小，图片，截取的大小）
    QPixmap map(":/new/prefix1/113338nzjuyx9sdsmycc0y.jpg");
    painter.drawPixmap(q1,map,q);
}
addworker::~addworker()
{
    delete ui;
}
void addworker::clearinput()
{
    this->ui->lineEdit->clear();
    this->ui->lineEdit_2->clear();  //清空不加test
    this->ui->lineEdit_3->clear();
    this->ui->lineEdit_4->clear();
    this->ui->lineEdit_5->clear();
    this->ui->lineEdit->setFocus(); //重新到第一行上面
}
void addworker::on_add1_clicked()
{
    QString name=this->ui->lineEdit->text();
    QString id=this->ui->lineEdit_2->text();
    QString location=this->ui->lineEdit_3->text();
    QString tel=this->ui->lineEdit_4->text();
    QString password=this->ui->lineEdit_5->text();
    QString cnt=name+" "+id+" "+location+" "+tel+" "+password+"\n";

    if(id.length()!=3)
    {
        QMessageBox::critical(this,"错误","请输入三位工号");
    }
    else
    {  //将原来已经有的id号查重
       QFile file("worker.txt");
       if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
            return;
       QTextStream in(&file);
       while(!in.atEnd())
       {
           QString line=in.readLine();
           have_line.append(line);
       }
       file.close();
       for(int i=0;i<have_line.length();i++)
       {
           flag2=1;
           QString hangline=have_line.at(i);
           hangline=hangline.trimmed();
           QStringList linesplit=hangline.split(" ");
           //qDebug()<<linesplit.at(0);
           if(id==linesplit.at(1))
           {
               flag2=0;
               QMessageBox::critical(this,"错误","工号已被使用，请重新输入");
               this->ui->lineEdit_2->clear();
               this->ui->lineEdit_2->setFocus();
               break;
           }
       }
       if(flag2)
       {
       QMessageBox msgbox;
       msgbox.setText("姓名："+name+"\n"+"工号："+id+"\n"+"职位："+location+"\n"+"电话: "+tel+"\n"+"登录密码: "+password+"\n");
       msgbox.addButton("确定",QMessageBox::AcceptRole);
       msgbox.addButton("取消",QMessageBox::RejectRole);
       int ret=msgbox.exec(); //点那个按键返回编号从左到右0开始
       //qDebug()<<ret;
       if(ret==0)
       {
            clearinput();
            writetofile(cnt);
       }
      }
    }
}
void addworker::on_returnback_clicked()
{
    sentsignals();
    this->close();
}
void addworker::writetofile(QString cnt)
{
    QFile file("worker.txt");
    if(!file.open(QIODevice::Append|QIODevice::Text))
    {
        return;
    }
    QTextStream out(&file);
    out<<cnt;

}
