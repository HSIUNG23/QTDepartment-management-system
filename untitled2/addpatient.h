#ifndef ADDPATIENT_H
#define ADDPATIENT_H

#include <QWidget>

namespace Ui {
class addpatient;
}

class addpatient : public QWidget
{
    Q_OBJECT

public:
    explicit addpatient(QWidget *parent = nullptr);
    ~addpatient();
     void paintEvent(QPaintEvent *event);
private slots:
    void on_add1_clicked();
    void on_returnback_clicked();
signals:
    void sentsignals();

private:
    Ui::addpatient *ui;
    QList<QString> add_lines;
    void writetofile(QString cnt);
    void clearinput();
    int a[100];
};

#endif // ADDPATIENT_H
