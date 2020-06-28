/********************************************************************************
** Form generated from reading UI file 'worker.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKER_H
#define UI_WORKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_worker
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *returnback;

    void setupUi(QWidget *worker)
    {
        if (worker->objectName().isEmpty())
            worker->setObjectName(QString::fromUtf8("worker"));
        worker->resize(800, 600);
        worker->setMinimumSize(QSize(800, 600));
        worker->setMaximumSize(QSize(800, 600));
        layoutWidget = new QWidget(worker);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(250, 60, 321, 421));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 0, 1, 1);

        returnback = new QPushButton(layoutWidget);
        returnback->setObjectName(QString::fromUtf8("returnback"));

        gridLayout->addWidget(returnback, 4, 0, 1, 1);


        retranslateUi(worker);

        QMetaObject::connectSlotsByName(worker);
    } // setupUi

    void retranslateUi(QWidget *worker)
    {
        worker->setWindowTitle(QCoreApplication::translate("worker", "\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        pushButton->setText(QCoreApplication::translate("worker", "\346\237\245\350\257\242\347\227\205\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton_4->setText(QCoreApplication::translate("worker", "\344\277\256\346\224\271\347\227\205\344\272\272\344\277\241\346\201\257", nullptr));
        pushButton_3->setText(QCoreApplication::translate("worker", "\347\247\221\345\256\244\347\273\217\350\264\271\346\230\216\347\273\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("worker", "\346\237\245\350\257\242\345\214\273\346\212\244\344\272\272\345\221\230\344\277\241\346\201\257", nullptr));
        returnback->setText(QCoreApplication::translate("worker", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class worker: public Ui_worker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKER_H
