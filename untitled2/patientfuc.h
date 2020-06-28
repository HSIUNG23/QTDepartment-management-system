#ifndef PATIENTFUC_H
#define PATIENTFUC_H
#include"QStandardItemModel"
#include <QWidget>

namespace Ui {
class patientfuc;
}

class patientfuc : public QWidget
{
    Q_OBJECT

public:
    explicit patientfuc(QWidget *parent = nullptr);
    ~patientfuc();
    int readfromfile();
    void pipei(int index,QString cnt);
    void display();
    QString timetonum(QString time);
    void paintEvent(QPaintEvent *event);

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
signals:
    void sentsignals();
    void sentsignals_2();

private:
    Ui::patientfuc *ui;
    QList<QString> stu_lines;
    QStandardItemModel*model;
};

#endif // PATIENTFUC_H
