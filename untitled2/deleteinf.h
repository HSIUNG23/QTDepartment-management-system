#ifndef DELETEINF_H
#define DELETEINF_H

#include <QWidget>

namespace Ui {
class deleteinf;
}

class deleteinf : public QWidget
{
    Q_OBJECT

public:
    explicit deleteinf(QWidget *parent = nullptr);
    ~deleteinf();
    int readfile();
    void writein(QString information);
     void paintEvent(QPaintEvent *event);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
signals:
    void sentmysignal();
    void sentsignals_2();


private:
    Ui::deleteinf *ui;
    QList<QString> stu_lines;
};

#endif // DELETEINF_H
