#ifndef WORKERLOGIN_H
#define WORKERLOGIN_H
#include"worker.h"
#include <QWidget>

namespace Ui {
class workerlogin;
}

class workerlogin : public QWidget
{
    Q_OBJECT

public:
    explicit workerlogin(QWidget *parent = nullptr);
    ~workerlogin();
     void paintEvent(QPaintEvent *event);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
signals:
    void sentsignals();
private:
    Ui::workerlogin *ui;
    QList<QString> stu_lines;
    worker work;
};

#endif // WORKERLOGIN_H
