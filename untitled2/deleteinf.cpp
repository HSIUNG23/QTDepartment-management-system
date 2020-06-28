#include "deleteinf.h"
#include "ui_deleteinf.h"
#include"QFile"
#include"QTextStream"
#include"QMessageBox"
#include"QPaintEvent"
#include"QPainter"
#pragma execution_character_set("utf-8")
deleteinf::deleteinf(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deleteinf)
{
    ui->setupUi(this);
}
void deleteinf::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect q(0,0,1920,1080);
    QRect q1(0,0,q.width(),q.height());//参数（目标大小，图片，截取的大小）
    QPixmap map(":/new/prefix1/113338nzjuyx9sdsmycc0y.jpg");
    painter.drawPixmap(q1,map,q);
}
deleteinf::~deleteinf()
{
    delete ui;
}
int deleteinf::readfile()
{
    QFile file("patient.txt");
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
void deleteinf::writein(QString information)
{
    this->ui->lineEdit->clear();
    this->ui->lineEdit_2->clear();
    this->ui->lineEdit_3->clear();
    this->ui->lineEdit_4->clear();
    this->ui->lineEdit_5->clear();
    this->ui->textEdit->clear();
    QFile file("patient.txt");
    if(!file.open(QIODevice::Append|QIODevice::Text))
        return ;
    QTextStream out(&file);
    out<<information+"\n";
    file.flush();
    file.close();
}
void deleteinf::on_pushButton_clicked()
{
    QString name=this->ui->lineEdit->text();
    QString roomid=this->ui->lineEdit_2->text();
    QString bedid=this->ui->lineEdit_3->text();
    QString age=this->ui->lineEdit_4->text();
    QString tel=this->ui->lineEdit_5->text();
    QString condition=this->ui->textEdit->toPlainText();
    QString information=name+" "+roomid+" "+bedid+" "+age+" "+tel+" "+condition;
    if(readfile()==-1)
        QMessageBox::critical(this,"错误","信息读取失败");
    else{
        QMessageBox qss;
        qss.setText("姓名："+name+"\n"+"病房号："+roomid+"\n"+"床号："+bedid+"\n"+"年龄: "+age+"\n"+"联系方式: "+tel+"\n"+"病况: "+condition+"\n");
        qss.addButton("确定",QMessageBox::AcceptRole);
        qss.addButton("取消",QMessageBox::RejectRole);
        int ret=qss.exec();
        if(ret==0)
        {
            for(int i=0;i<stu_lines.length();i++)
               {
                QString line=stu_lines.at(i);
                line=line.trimmed();
                QStringList linesplit=line.split(" ");
                if(name!=linesplit.at(0))
                {
                    QFile file("patient_temp.txt");
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
            QFile file_old("patient.txt");
            QFile file_new("patient_temp.txt");
            if(file_old.exists())
            {
                file_old.remove();
                file_new.rename("patient.txt");
                writein(information);
            }
            else
            {
            QMessageBox::critical(this,"错误","信息读取失败");
            }
        QMessageBox::information(this,"消息","修改成功！");
        }
    }
}

void deleteinf::on_pushButton_2_clicked()
{
       QString name=this->ui->lineEdit->text();
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
                     QFile file("patient_temp.txt");
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
            QFile file_old("patient.txt");
            QFile file_new("patient_temp.txt");
            if(file_old.exists())
            {
                file_old.remove();
                file_new.rename("patient.txt");
            }
            else{
                QMessageBox::critical(this,"错误","信息读取失败");
            }
            QMessageBox::information(this,"消息","删除成功！");

         }
        }
}

void deleteinf::on_pushButton_3_clicked()
{
    sentmysignal();
    sentsignals_2();
    this->close();
}
