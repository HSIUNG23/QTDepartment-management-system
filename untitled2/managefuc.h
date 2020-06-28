#ifndef MANAGEFUC_H
#define MANAGEFUC_H
#include"addpatient.h"
#include"addworker.h"
#include"getpatient.h"
#include"getworker.h"
#include"modify.h"
#include"deleteinf.h"
#include <QWidget>

namespace Ui {
class managefuc;
}

class managefuc : public QWidget
{
    Q_OBJECT

public:
    explicit managefuc(QWidget *parent = nullptr);
    ~managefuc();
     void paintEvent(QPaintEvent *event);
private slots:
    void on_addw_clicked();
    void on_addp_clicked();
    void on_getw_clicked();
    void on_getp_clicked();
    void on_deletein_clicked();
    void on_mod_clicked();
    void on_returnback_clicked();
signals:
    void sentsignals();

private:
    Ui::managefuc *ui;
    addpatient adp;
    addworker adw;
    getworker getw;
    getpatient getp;
    deleteinf del;
    modify mod;


};

#endif // MANAGEFUC_H
