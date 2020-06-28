#include "instrument.h"
#include "ui_instrument.h"
#include"QFile"
#include"QTextStream"
#include"QMessageBox"
#include"QVariant"
#include"QPaintEvent"
#include"QPainter"
#pragma execution_character_set("utf-8")
instrument::instrument(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::instrument)
{
    ui->setupUi(this);
    this->model=new QStandardItemModel;
    this->ui->tableView->setSortingEnabled(true);
    this->model->setHorizontalHeaderItem(0,new QStandardItem("经费去向"));
    this->model->setHorizontalHeaderItem(1,new QStandardItem("花费金额"));
    this->model->setHorizontalHeaderItem(2,new QStandardItem("负责人"));
    this->ui->tableView->setModel(model);
    this->ui->tableView->setColumnWidth(0,200);
    this->ui->tableView->setColumnWidth(1,200);
    this->ui->tableView->setColumnWidth(2,200);
    if(readfromfile()==-1)
    {
        QMessageBox::critical(this,"错误","信息读取失败");
    }
    else
    {
        displayall(stu_lines);
    }
}
void instrument::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect q(0,0,1920,1080);
    QRect q1(0,0,q.width(),q.height());//参数（目标大小，图片，截取的大小）
    QPixmap map(":/new/prefix1/113338nzjuyx9sdsmycc0y.jpg");
    painter.drawPixmap(q1,map,q);
}
int instrument::readfromfile()
{

    QFile file("spend.txt");
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
void instrument::on_pushButton_clicked()
{
    this->model->clear();
    this->model->setHorizontalHeaderItem(0,new QStandardItem("经费去向"));
    this->model->setHorizontalHeaderItem(1,new QStandardItem("花费金额"));
    this->model->setHorizontalHeaderItem(2,new QStandardItem("负责人"));
    this->ui->tableView->setModel(model);
    this->ui->tableView->setColumnWidth(0,200);
    this->ui->tableView->setColumnWidth(1,200);
    this->ui->tableView->setColumnWidth(2,200);
    int row=0;
    stu_lines.clear();
    if(readfromfile()==-1)
    {
        QMessageBox::critical(this,"错误","信息读取失败");
        return;
    }
    else
    {

      QString cnt=this->ui->lineEdit->text();
      for(int i=0;i<stu_lines.length();i++)
        {
            QString lines=stu_lines.at(i);
            lines.trimmed();
            QStringList linesplit=lines.split(" ");
            if(linesplit.at(0).contains(cnt,Qt::CaseSensitive))
                 display(row++,linesplit);
        }
    }
}
void instrument::display(int row,QStringList subs)
{
    for(int i=0;i<subs.length();i++)
    {
        this->model->setItem(row,i,new QStandardItem(subs.at(i)));
    }
}
void instrument::displayall(QStringList lines)
{
    for(int i=0;i<lines.length();i++)
    {
        QString lines=stu_lines.at(i);
        lines=lines.trimmed();
        QStringList linesplit=lines.split(" ");
        for(int a=0;a<linesplit.length();a++)
        {
            if(a==1)
            {
            QStandardItem *Item=new QStandardItem;
            Item->setData(QVariant(linesplit.at(a).toInt()),Qt::EditRole);    //转化为数字存储，方便排序
            this->model->setItem(i,a,Item);
            }
            else
            {
            this->model->setItem(i,a,new QStandardItem(linesplit.at(a)));
            }

    }
    }
}
void instrument::on_pushButton_2_clicked()
{
    sentsignals();
    this->hide();
}
instrument::~instrument()
{
    delete ui;

}
