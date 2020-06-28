#ifndef GETPATIENT_H
#define GETPATIENT_H
#include"QStandardItemModel"
#include <QWidget>

namespace Ui {
class getpatient;
}

class getpatient : public QWidget
{
    Q_OBJECT

public:
    explicit getpatient(QWidget *parent = nullptr);
    ~getpatient();
    int readfromfile();
    void pipei(int index,QString cnt);
    void display(int row,QStringList subs);
    void displayall(QStringList lines);
     void paintEvent(QPaintEvent *event);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
signals:
    void sentsignals();
    void sentsignals_2();

private:
    Ui::getpatient *ui;
    QList<QString> stu_lines;
    QStandardItemModel*model;
};

#endif // GETPATIENT_H
