#ifndef GETWORKER_H
#define GETWORKER_H

#include <QWidget>
#include<QStandardItemModel>
namespace Ui {
class getworker;
}

class getworker : public QWidget
{
    Q_OBJECT

public:
    explicit getworker(QWidget *parent = nullptr);
    ~getworker();
    int readfromfile();
    void pipei(int index,QString cnt);
    void display(int row,QStringList subs);
    void displayall(QStringList lines);
     void paintEvent(QPaintEvent *event);
private slots:
    void on_search_clicked();
    void on_returnback_clicked();
signals:
    void sentsignals();
    void sentsignals_2();
private:
    Ui::getworker *ui;
    QList<QString>stu_lines;
    QStandardItemModel*model;
};

#endif // GETWORKER_H
