#include "patientlogin.h"
#include "ui_patientlogin.h"
#include"QFile"
#include"QTextStream"
#include"QMessageBox"
#include"QPaintEvent"
#include"QPainter"
#pragma execution_character_set("utf-8")
int flag5=1;
patientlogin::patientlogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::patientlogin)
{
    ui->setupUi(this);
    connect(&pat,&patientfuc::sentsignals,this,&patientlogin::show);
}
void patientlogin::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect q(0,0,1920,1080);
    QRect q1(0,0,q.width(),q.height());//参数（目标大小，图片，截取的大小）
    QPixmap map(":/new/prefix1/113338nzjuyx9sdsmycc0y.jpg");
    painter.drawPixmap(q1,map,q);
}

void patientlogin::on_pushButton_clicked()
{
    QFile file("patient.txt");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
    { QMessageBox::critical(this,"错误","信息缺失");
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
    QString tel=this->ui->lineEdit->text();
    for(int i=0;i<stu_lines.length();i++)
      {
          QString line=stu_lines.at(i);
          line=line.trimmed();//去除首位多余空格换行符
          QStringList linesplit=line.split(" "); //以空格分隔;
          if(tel==linesplit.at(4))
          {
              flag5=0;
              this->hide();
              pat.show();
          }

      }
      if(flag5==1)
      {
              QMessageBox::critical(this,"错误","未查询到相关信息");
              this->ui->lineEdit->clear();
              this->ui->lineEdit->setFocus();
      }
    }

}
void patientlogin::on_pushButton_2_clicked()
{
    sentsignals();
    this->close();
}
patientlogin::~patientlogin()
{
    delete ui;
}
