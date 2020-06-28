#ifndef MODIFY_H
#define MODIFY_H

#include <QWidget>

namespace Ui {
class modify;
}

class modify : public QWidget
{
    Q_OBJECT

public:
    explicit modify(QWidget *parent = nullptr);
    void writein(QString information);
    int readfile();
    ~modify();
     void paintEvent(QPaintEvent *event);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
signals:
    void sentmysignal();
private:
    Ui::modify *ui;
    QList<QString> stu_lines;
};

#endif // MODIFY_H
