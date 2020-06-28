#ifndef MANAGER_H
#define MANAGER_H
#include"managefuc.h"
#include <QWidget>

namespace Ui {
class manager;
}

class manager : public QWidget
{
    Q_OBJECT

public:
    explicit manager(QWidget *parent = nullptr);
    ~manager();
     int readfromfile();
     QString password;
     void paintEvent(QPaintEvent *event);
private slots:
     void on_log_clicked();
     void on_return_2_clicked();
signals:
     void sentsignals();
private:
    Ui::manager *ui;
    managefuc mfuc;
    QList<QString> manager_lines;
};

#endif // MANAGER_H
