#ifndef ADDWORKER_H
#define ADDWORKER_H

#include <QWidget>

namespace Ui {
class addworker;
}

class addworker : public QWidget
{
    Q_OBJECT

public:
    explicit addworker(QWidget *parent = nullptr);
    ~addworker();
     void paintEvent(QPaintEvent *event);
private slots:
    void on_add1_clicked();
    void on_returnback_clicked();
signals:
    void sentsignals();

private:
    Ui::addworker *ui;
    QList<QString> add_line,have_line;//新增的和已有的判断
    void writetofile(QString cnt);
    void clearinput();
};

#endif // ADDWORKER_H
