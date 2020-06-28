#ifndef WORKER_H
#define WORKER_H
#include"instrument.h"
#include"getpatient.h"
#include"getworker.h"
#include"deleteinf.h"
#include <QWidget>

namespace Ui {
class worker;
}

class worker : public QWidget
{
    Q_OBJECT

public:
    explicit worker(QWidget *parent = nullptr);
    ~worker();
     void paintEvent(QPaintEvent *event);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_returnback_clicked();
signals:
    void sentsignals();



private:
    Ui::worker *ui;
    instrument ins;
    getworker getw;
    getpatient getp;
    deleteinf del;
};

#endif // WORKER_H
