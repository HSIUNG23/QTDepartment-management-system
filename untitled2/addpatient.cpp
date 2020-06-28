#include "addpatient.h"
#include "ui_addpatient.h"
#include"QFile"
#include"QMessageBox"
#include"QTextStream"
#include"QPaintEvent"
#include"QPainter"
#pragma execution_character_set("utf-8")
int flag3=1;
addpatient::addpatient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addpatient)
{
    ui->setupUi(this);
}

addpatient::~addpatient()
{
    delete ui;
}
void addpatient::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect q(0,0,1920,1080);
    QRect q1(0,0,q.width(),q.height());//参数（目标大小，图片，截取的大小）
    QPixmap map(":/new/prefix1/113338nzjuyx9sdsmycc0y.jpg");
    painter.drawPixmap(q1,map,q);
}
void addpatient::on_add1_clicked()
{
    QString name=this->ui->lineEdit->text();
    QString roomid=this->ui->lineEdit_2->text();
    QString bedid=this->ui->lineEdit_3->text();
    QString age=this->ui->lineEdit_4->text();
    QString tel=this->ui->lineEdit_5->text();
    QString condition=this->ui->textEdit->toPlainText();     //attention
    QString cnt=name+" "+roomid+" "+bedid+" "+age+" "+tel+" "+condition+"\n";
    QFile file("patient.txt");
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
        return;
    QTextStream in(&file);
    while(!in.atEnd())
    {
        QString line=in.readLine();
        add_lines.append(line);
    }
    file.close();
    for(int i=0;i<add_lines.length();i++)
    {
        flag3=1;
        QString hangline=add_lines.at(i);
        hangline=hangline.trimmed();
        QStringList linesplit=hangline.split(" ");
        if(roomid==linesplit.at(1)&&bedid==linesplit.at(2))
        {
            flag3=0;
            QMessageBox::critical(this,"错误","该房号病床已有病人,请重新输入");
            this->ui->lineEdit_2->clear();
            this->ui->lineEdit_3->clear();
            this->ui->lineEdit_2->setFocus();
            break;
        }
    }
    if(flag3)
    {
        QMessageBox tishi;
        tishi.setText("姓名："+name+"\n"+"病房号："+roomid+"\n"+"床号："+bedid+"\n"+"年龄: "+age+"\n"+"联系方式: "+tel+"\n"+"病况: "+condition+"\n");
        tishi.addButton("确定",QMessageBox::AcceptRole);
        tishi.addButton("取消",QMessageBox::RejectRole);
        int ret=tishi.exec();
        if(ret==0)
        {
            int tmp=roomid.toInt();
            a[tmp]++;
            clearinput();
            writetofile(cnt);
        }
    }

}
void addpatient::on_returnback_clicked()
{
    sentsignals();
    this->close();
}
void addpatient::writetofile(QString cnt)
{
    QFile file("patient.txt");
    if(!file.open(QIODevice::Append|QIODevice::Text))
        return;
    QTextStream out(&file);
    out<<cnt;
    file.flush();
}
void addpatient::clearinput()
{

    this->ui->lineEdit->clear();
    this->ui->lineEdit_2->clear();
    this->ui->lineEdit_3->clear();
    this->ui->lineEdit_4->clear();
    this->ui->lineEdit_5->clear();
    this->ui->textEdit->clear();
    this->ui->lineEdit->setFocus();
}
