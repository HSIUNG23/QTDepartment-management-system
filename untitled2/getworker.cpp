#include "getworker.h"
#include "ui_getworker.h"
#include"QStandardItem"
#include"QStandardItemModel"
#include"QFile"
#include"QTextStream"
#include"QDebug"
#include"QMessageBox"
#include"QPaintEvent"
#include"QPainter"
#pragma execution_character_set("utf-8")

getworker::getworker(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::getworker)
{
    ui->setupUi(this);
    this->model=new QStandardItemModel;
    this->model->setHorizontalHeaderItem(0,new QStandardItem("姓名."));
    this->model->setHorizontalHeaderItem(1,new QStandardItem("工号."));
    this->model->setHorizontalHeaderItem(2,new QStandardItem("职务."));
    this->model->setHorizontalHeaderItem(3,new QStandardItem("联系方式."));
    this->model->setHorizontalHeaderItem(4,new QStandardItem("登录密码."));

    this->ui->tableView->setModel(model);//将表格放入文本框中
    this->ui->tableView->setColumnWidth(0,100);
    this->ui->tableView->setColumnWidth(1,100);
    this->ui->tableView->setColumnWidth(2,100);
    this->ui->tableView->setColumnWidth(3,200);
    this->ui->tableView->setColumnWidth(4,500);

}
void getworker::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect q(0,0,1920,1080);
    QRect q1(0,0,q.width(),q.height());//参数（目标大小，图片，截取的大小）
    QPixmap map(":/new/prefix1/113338nzjuyx9sdsmycc0y.jpg");
    painter.drawPixmap(q1,map,q);
}
getworker::~getworker()
{
    delete ui;
}
int getworker::readfromfile()
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
//    for(int i=0;i<stu_lines.length();i++)
//    {
//        qDebug()<<stu_lines.at(i);
//    }
//    return 0;
    return 0;
}
void getworker::on_search_clicked()
{
    this->model->clear();
    this->model=new QStandardItemModel;
    this->model->setHorizontalHeaderItem(0,new QStandardItem("姓名."));
    this->model->setHorizontalHeaderItem(1,new QStandardItem("工号."));
    this->model->setHorizontalHeaderItem(2,new QStandardItem("职务."));
    this->model->setHorizontalHeaderItem(3,new QStandardItem("联系方式."));
    this->model->setHorizontalHeaderItem(4,new QStandardItem("登录密码."));
    this->ui->tableView->setModel(model);//将表格放入文本框中
    this->ui->tableView->setColumnWidth(0,100);
    this->ui->tableView->setColumnWidth(1,100);
    this->ui->tableView->setColumnWidth(2,100);
    this->ui->tableView->setColumnWidth(3,200);
    this->ui->tableView->setColumnWidth(4,200);
    if(readfromfile()==-1)
    {
        QMessageBox::critical(this,"错误","获取信息失败");
    }
    else {
        int index=this->ui->select->currentIndex();
        QString name=this->ui->lineEdit->text();
        pipei(index,name);
    }

}
void getworker::pipei(int index,QString name)
{
    int row=0;
    for(int i=0;i<stu_lines.length();i++)
    {
        QString lines=stu_lines.at(i);
        lines=lines.trimmed();
        QStringList linesplit=lines.split(" ");
        switch(index)
        {
        case(1):if(linesplit.at(0).contains(name,Qt::CaseSensitive))   //包含大小写输入法
                    display(row++,linesplit);  break;
        case(0):
            displayall(stu_lines);
            break;
        default:
            break;
        }
    }

}
void getworker::display(int row,QStringList subs)
{
    for(int i=0;i<subs.length();i++)
    {
        this->model->setItem(row,i,new QStandardItem(subs.at(i)));
    }
}
void getworker::displayall(QStringList lines)
{
    for(int i=0;i<lines.length();i++)
    {
        QString lines=stu_lines.at(i);
        lines=lines.trimmed();
        QStringList linesplit=lines.split(" ");
        for(int a=0;a<linesplit.length();a++)
            this->model->setItem(i,a,new QStandardItem(linesplit.at(a)));
    }

}
void getworker::on_returnback_clicked()
{
    sentsignals();
    sentsignals_2();
    this->close();
}
