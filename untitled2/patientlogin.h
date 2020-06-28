#ifndef PATIENTLOGIN_H
#define PATIENTLOGIN_H
#include"patientfuc.h"
#include <QWidget>

namespace Ui {
class patientlogin;
}

class patientlogin : public QWidget
{
    Q_OBJECT

public:
    explicit patientlogin(QWidget *parent = nullptr);
    ~patientlogin();
     void paintEvent(QPaintEvent *event);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
signals:
    void sentsignals();

private:
    Ui::patientlogin *ui;
    QList<QString> stu_lines;
    patientfuc pat;
};

#endif // PATIENTLOGIN_H
