#include "modify.h"
#include "ui_modify.h"
#include"QFile"
#include"QTextStream"
#include"QMessageBox"
#include"QPaintEvent"
#include"QPainter"
#pragma execution_character_set("utf-8")
modify::modify(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modify)
{
    ui->setupUi(this);
}
void modify::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect q(0,0,1920,1080);
    QRect q1(0,0,q.width(),q.height());//参数（目标大小，图片，截取的大小）
    QPixmap map(":/new/prefix1/113338nzjuyx9sdsmycc0y.jpg");
    painter.drawPixmap(q1,map,q);
}
modify::~modify()
{
    delete ui;
}
void modify::writein(QString information)
{
    this->ui->lineEdit->clear();
    this->ui->lineEdit_2->clear();
    this->ui->lineEdit_3->clear();
    this->ui->lineEdit_4->clear();
    this->ui->lineEdit_5->clear();
    QFile file("worker.txt");
    if(!file.open(QIODevice::Append|QIODevice::Text))
    {
        QMessageBox::critical(this,"Wrong","信息打开失败");
        return;
    }
    QTextStream out(&file);
    out<<information<<"\n";
    file.flush();//把缓冲区的确保读入
    file.close();
}
int modify::readfile()
{
    QFile file("worker.txt");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
        return -1;
    QTextStream in(&file);
    stu_lines.clear();
    while(!in.atEnd())
    {
        QString lines=in.readLine();
        stu_lines.append(lines);
    }
    file.close();
}
void modify::on_pushButton_clicked()
{
    QString name=this->ui->lineEdit->text();
    QString id=this->ui->lineEdit_2->text();
    QString location=this->ui->lineEdit_3->text();
    QString tel=this->ui->lineEdit_4->text();
    QString password=this->ui->lineEdit_5->text();
    QString information=name+" "+id+" "+location+" "+tel+" "+password;
    if(readfile()==-1)
    {
          QMessageBox::critical(this,"错误","信息读取失败");
    }
    else
    {
        QMessageBox msgbox;
        msgbox.setText("姓名："+name+"\n"+"工号："+id+"\n"+"职位："+location+"\n"+"电话: "+tel+"\n"+"登录密码: "+password+"\n");
        msgbox.addButton("确定",QMessageBox::AcceptRole);
        msgbox.addButton("取消",QMessageBox::RejectRole);
        int ret=msgbox.exec(); //点那个按键返回编号从左到右0开始
    //qDebug()<<ret;
        if(ret==0)
        {
            for (int i=0;i<stu_lines.length();i++)
            {
                QString line=stu_lines.at(i);
                line=line.trimmed();
                QStringList linesplit=line.split(" ");
                if(name!=linesplit.at(0))
                {
                     QFile file("worker_temp.txt");
                     if(!file.open(QIODevice::Append|QIODevice::Text))
                     {
                         QMessageBox::critical(this,"错误","信息读取失败");
                         return;
                     }
                     QTextStream out(&file);
                     out<<line+"\n";
                     file.close();
                 }
              }
            QFile file_old("worker.txt");
            QFile file_new("worker_temp.txt");
            if(file_old.exists())
            {
                file_old.remove();
                file_new.rename("worker.txt");
                writein(information);
            }
            else{
                QMessageBox::critical(this,"错误","信息读取失败");
            }
            QMessageBox::information(this,"消息","修改成功！");

        }

    }

}
void modify::on_pushButton_2_clicked()
{   QString name=this->ui->lineEdit->text();
    if(readfile()==-1)
    {
        QMessageBox::critical(this,"错误","信息读取失败");
    }
    else{
    QMessageBox msgbox;
    msgbox.setText("确认要删除"+name+"的信息吗？");
    msgbox.addButton("确定",QMessageBox::AcceptRole);
    msgbox.addButton("取消",QMessageBox::RejectRole);
    int ret=msgbox.exec();
    if(ret==0)
    {
        for (int i=0;i<stu_lines.length();i++)
        {
            QString line=stu_lines.at(i);
            line=line.trimmed();
            QStringList linesplit=line.split(" ");
            if(name!=linesplit.at(0))
            {
                 QFile file("worker_temp.txt");
                 if(!file.open(QIODevice::Append|QIODevice::Text))
                 {
                     QMessageBox::critical(this,"wrong","File reading failed, information not changed","ok");
                     return;
                 }
                 QTextStream out(&file);
                 out<<line+"\n";
                 file.close();
             }
          }
        QFile file_old("worker.txt");
        QFile file_new("worker_temp.txt");
        if(file_old.exists())
        {
            file_old.remove();
            file_new.rename("worker.txt");
        }
        else{
            QMessageBox::critical(this,"错误","信息读取失败");
        }
        QMessageBox::information(this,"消息","删除成功！");

     }
    }
}
void modify::on_pushButton_3_clicked()
{
    sentmysignal();
    this->close();
}
