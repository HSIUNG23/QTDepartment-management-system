#include "patientfuc.h"
#include "ui_patientfuc.h"
#include"QFile"
#include"QTextStream"
#include"QMessageBox"
#include"QVariant"
#include"QDebug"
#include"QPaintEvent"
#include"QPainter"
static int flag6=0;
#pragma execution_character_set("utf-8")
patientfuc::patientfuc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::patientfuc)
{
    ui->setupUi(this);
    this->model=new QStandardItemModel;
    this->ui->tableView->setSortingEnabled(true);
    this->model->setHorizontalHeaderItem(0,new QStandardItem("时间"));
    this->model->setHorizontalHeaderItem(1,new QStandardItem("已接受治疗(开的药品)"));
    this->model->setHorizontalHeaderItem(2,new QStandardItem("花费金额"));
    this->ui->tableView->setModel(model);
    this->ui->tableView->setColumnWidth(0,200);
    this->ui->tableView->setColumnWidth(1,250);
    this->ui->tableView->setColumnWidth(2,200);
    if(readfromfile()==-1)
    {
        QMessageBox::critical(this,"错误","信息读取失败");
    }
}
void patientfuc::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect q(0,0,1920,1080);
    QRect q1(0,0,q.width(),q.height());//参数（目标大小，图片，截取的大小）
    QPixmap map(":/new/prefix1/113338nzjuyx9sdsmycc0y.jpg");
    painter.drawPixmap(q1,map,q);
}
QString patientfuc::timetonum(QString time)
 {
     QString temp=(time.mid(0,4)+time.mid(5,2)+time.mid(8,2));
     return temp;
 }
int patientfuc::readfromfile()
{

    QFile file("patientcost.txt");
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
    for(int i=0;i<stu_lines.length();i++)
    {
        QString lines=stu_lines.at(i);
        lines=lines.trimmed();
        QStringList linesplit=lines.split(" ");
        for(int a=0;a<linesplit.length();a++)
            this->model->setItem(i,a,new QStandardItem(linesplit.at(a)));
    }
    this->ui->tableView->setColumnHidden(3,true);
    return 0;
}
void  patientfuc::display()
{
    this->model=new QStandardItemModel;//每一次再新建一张表
    this->ui->tableView->setSortingEnabled(true);
    this->model->setHorizontalHeaderItem(0,new QStandardItem("时间"));
    this->model->setHorizontalHeaderItem(1,new QStandardItem("已接受治疗(开的药品)"));
    this->model->setHorizontalHeaderItem(2,new QStandardItem("花费金额"));
    this->ui->tableView->setModel(model);
    this->ui->tableView->setColumnWidth(0,200);
    this->ui->tableView->setColumnWidth(1,250);
    this->ui->tableView->setColumnWidth(2,200);
}
void  patientfuc::on_pushButton_clicked()
{
    display();  ////每一次再新建一张表
    readfromfile();
    int ret=this->ui->comboBox->currentIndex();
    switch (ret) {
       case 0: model->sort(3,Qt::AscendingOrder);break;
        case 1: model->sort(3,Qt::DescendingOrder);break;
        default:break;

    }
}


void patientfuc::on_pushButton_2_clicked()
{
    sentsignals();
    this->hide();
}
patientfuc::~patientfuc()
{
    delete ui;
}
