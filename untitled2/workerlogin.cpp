#include "workerlogin.h"
#include "ui_workerlogin.h"
#include"QFile"
#include"QTextStream"
#include"QMessageBox"
#include"QPaintEvent"
#include"QPainter"
#pragma execution_character_set("utf-8")
int flag4=1;
workerlogin::workerlogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::workerlogin)
{
    ui->setupUi(this);
    connect(&work,&worker::sentsignals,this,&workerlogin::show);
}
void workerlogin::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect q(0,0,1920,1080);
    QRect q1(0,0,q.width(),q.height());//参数（目标大小，图片，截取的大小）
    QPixmap map(":/new/prefix1/113338nzjuyx9sdsmycc0y.jpg");
    painter.drawPixmap(q1,map,q);
}
void workerlogin::on_pushButton_clicked()
{
    QFile file("worker.txt");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
    { QMessageBox::critical(this,"错误","密码不匹配，可能未录入管理员信息或者信息缺失");
        return;
    }
    else {
    QTextStream in(&file);   //将文件里面的东西读出；
    while(!in.atEnd())
    {
        QString line=in.readLine();
        stu_lines.append(line);
    }
    file.close();
    QString id=this->ui->lineEdit->text();
    QString password=this->ui->lineEdit_2->text();
    for(int i=0;i<stu_lines.length();i++)
      {
          QString line=stu_lines.at(i);
          line=line.trimmed();//去除首位多余空格换行符
          QStringList linesplit=line.split(" "); //以空格分隔;
          if(id==linesplit.at(1)&&password==linesplit.at(4))
          {
              flag4=0;
              this->hide();
              work.show();
          }

      }
      if(flag4==1)
      {
              QMessageBox::critical(this,"错误","工号密码不匹配,请重新输入");
              this->ui->lineEdit->clear();
              this->ui->lineEdit_2->clear();
              this->ui->lineEdit->setFocus();
      }
    }

}
void workerlogin::on_pushButton_2_clicked()
{
    sentsignals();
    this->close();
}
workerlogin::~workerlogin()
{
    delete ui;
}
