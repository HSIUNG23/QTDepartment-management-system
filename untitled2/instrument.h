#ifndef INSTRUMENT_H
#define INSTRUMENT_H
#include"QStandardItemModel"
#include <QWidget>

namespace Ui {
class instrument;
}

class instrument : public QWidget
{
    Q_OBJECT

public:
    explicit instrument(QWidget *parent = nullptr);
    ~instrument();
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

private:
    Ui::instrument *ui;
    QStandardItemModel*model;
    QList<QString> stu_lines;

};

#endif // INSTRUMENT_H
