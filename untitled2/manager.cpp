#include "manager.h"
#include "ui_manager.h"
#include"QFile"
#include"QTextStream"
#include"QMessageBox"
#include"QDebug"
#include"QPaintEvent"
#include"QPainter"
#pragma execution_character_set("utf-8")
int flag=1;
manager::manager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::manager)
{
    ui->setupUi(this);
    connect(&mfuc,&managefuc::sentsignals,this,&manager::show);
}
void manager::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect q(0,0,1920,1080);
    QRect q1(0,0,q.width(),q.height());//参数（目标大小，图片，截取的大小）
    QPixmap map(":/new/prefix1/113338nzjuyx9sdsmycc0y.jpg");
    painter.drawPixmap(q1,map,q);
}
manager::~manager()
{
    delete ui;
}
int manager::readfromfile()
{
    QFile file("manager.txt");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
        return -1;
    QTextStream in(&file);   //将文件里面的东西读出；
    while(!in.atEnd())
    {
        QString line=in.readLine();
        manager_lines.append(line);
    }
    file.close();
    return 0;
}
void manager::on_log_clicked()
{
    password=this->ui->passwordya->text();

    if(readfromfile()==-1)
    {
        QMessageBox::critical(this,"错误","密码不匹配，可能未录入管理员信息或者信息缺失");
    }
    else {
      for(int i=0;i<manager_lines.length();i++)
      {
          QString line=manager_lines.at(i);
          line=line.trimmed();//去除首位多余空格换行符
          QStringList linesplit=line.split(" "); //以空格分隔;
          if(password==linesplit.at(0))
          {
              flag=0;
              this->hide();
              mfuc.show();
          }

      }
      if(flag==1)
      {
              QMessageBox::critical(this,"错误","密码不匹配,请重新输入");
              this->ui->passwordya->clear();
      }
    }


}
void manager::on_return_2_clicked()
{
    sentsignals();
    this->ui->passwordya->clear();
    this->close();

}
