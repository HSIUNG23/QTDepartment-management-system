#include "getpatient.h"
#include "ui_getpatient.h"
#include"QFile"
#include"QTextStream"
#include"QMessageBox"
#include"QVariant"
#include"QPaintEvent"
#include"QPainter"
#pragma execution_character_set("utf-8")

getpatient::getpatient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::getpatient)
{
    ui->setupUi(this);
    this->model=new QStandardItemModel;
    this->ui->tableView->setSortingEnabled(true);
    this->model->setHorizontalHeaderItem(0,new QStandardItem("姓名"));
    this->model->setHorizontalHeaderItem(1,new QStandardItem("病房号"));
    this->model->setHorizontalHeaderItem(2,new QStandardItem("床号"));
    this->model->setHorizontalHeaderItem(3,new QStandardItem("年龄"));
     this->model->setHorizontalHeaderItem(4,new QStandardItem("联系方式"));
    this->model->setHorizontalHeaderItem(5,new QStandardItem("病录"));

    this->ui->tableView->setModel(model);//将表格放入文本框中
    this->ui->tableView->setColumnWidth(0,100);
    this->ui->tableView->setColumnWidth(1,100);
    this->ui->tableView->setColumnWidth(2,100);
    this->ui->tableView->setColumnWidth(3,100); //给足够大小才能显示文字
    this->ui->tableView->setColumnWidth(4,200);
    this->ui->tableView->setColumnWidth(5,600);
    //this->ui->tableView->setColumnHidden(5,true);
}
void getpatient::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QRect q(0,0,1920,1080);
    QRect q1(0,0,q.width(),q.height());//参数（目标大小，图片，截取的大小）
    QPixmap map(":/new/prefix1/113338nzjuyx9sdsmycc0y.jpg");
    painter.drawPixmap(q1,map,q);
}
getpatient::~getpatient()
{
    delete ui;

}
int getpatient::readfromfile()
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
    return 0;
}
void getpatient::on_pushButton_clicked()
{
    this->model->clear();
    this->model=new QStandardItemModel;
    this->model->setHorizontalHeaderItem(0,new QStandardItem("姓名"));
    this->model->setHorizontalHeaderItem(1,new QStandardItem("病房号"));
    this->model->setHorizontalHeaderItem(2,new QStandardItem("床号"));
    this->model->setHorizontalHeaderItem(3,new QStandardItem("年龄"));
    this->model->setHorizontalHeaderItem(4,new QStandardItem("联系方式"));
    this->model->setHorizontalHeaderItem(5,new QStandardItem("病录"));
    this->ui->tableView->setModel(model);//将表格放入文本框中
    this->ui->tableView->setColumnWidth(0,100);
    this->ui->tableView->setColumnWidth(1,100);
    this->ui->tableView->setColumnWidth(2,100);
    this->ui->tableView->setColumnWidth(3,100); //给足够大小才能显示文字
    this->ui->tableView->setColumnWidth(4,200);
    this->ui->tableView->setColumnWidth(5,600);
    if(readfromfile()==-1)
    {
        QMessageBox::critical(this,"错误","获取信息失败");
    }
    else {
        int index=this->ui->comboBox->currentIndex();
        QString name=this->ui->lineEdit->text();
        pipei(index,name);
    }
}
void getpatient::pipei(int index,QString cnt)
{
    int row=0;
    int row2=0;
    for(int i=0;i<stu_lines.length();i++)
    {

        QString lines=stu_lines.at(i);
        lines.trimmed();
        QStringList linesplit=lines.split(" ");
        switch (index) {//CaseSensitive 匹配的时候区分大小写
       case(1):if(linesplit.at(0).contains(cnt,Qt::CaseSensitive))
                    display(row++,linesplit);
                break;
       case(0):
            displayall(stu_lines);
            break;
       case(2):
            if(linesplit.at(1)==cnt)
                 display(row2++,linesplit);
            break;
       default:
            break;
        }
    }

}
void getpatient::display(int row,QStringList subs)
{

    //this->ui->tableView->setColumnHidden(5,true);

    for(int i=0;i<subs.length();i++)
    {
        this->model->setItem(row,i,new QStandardItem(subs.at(i)));
    }
}
void getpatient::displayall(QStringList lines)
{
    for(int i=0;i<lines.length();i++)
    {
        QString lines=stu_lines.at(i);
        lines=lines.trimmed();
        QStringList linesplit=lines.split(" ");
        for(int a=0;a<linesplit.length();a++)
        {
            if(a==1||a==2||a==3)
            {
            QStandardItem *Item=new QStandardItem;
            Item->setData(QVariant(linesplit.at(a).toInt()),Qt::EditRole);    //转化为数字存储
            this->model->setItem(i,a,Item);
             }
            else {
            this->model->setItem(i,a,new QStandardItem(linesplit.at(a)));
        }

    }
    }
}

void getpatient::on_pushButton_2_clicked()
{
    sentsignals();
    sentsignals_2();
    this->hide();
}
