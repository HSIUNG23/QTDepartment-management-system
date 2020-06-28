/********************************************************************************
** Form generated from reading UI file 'getworker.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETWORKER_H
#define UI_GETWORKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_getworker
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *search;
    QComboBox *select;
    QPushButton *returnback;
    QTableView *tableView;

    void setupUi(QWidget *getworker)
    {
        if (getworker->objectName().isEmpty())
            getworker->setObjectName(QString::fromUtf8("getworker"));
        getworker->resize(800, 600);
        getworker->setMinimumSize(QSize(800, 600));
        getworker->setMaximumSize(QSize(800, 600));
        widget = new QWidget(getworker);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 771, 571));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFocusPolicy(Qt::StrongFocus);
        lineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        search = new QPushButton(widget1);
        search->setObjectName(QString::fromUtf8("search"));

        gridLayout->addWidget(search, 0, 2, 1, 1);

        select = new QComboBox(widget1);
        select->addItem(QString());
        select->addItem(QString());
        select->setObjectName(QString::fromUtf8("select"));

        gridLayout->addWidget(select, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget1, 0, 0, 1, 1);

        returnback = new QPushButton(widget);
        returnback->setObjectName(QString::fromUtf8("returnback"));

        gridLayout_2->addWidget(returnback, 0, 1, 1, 1);

        tableView = new QTableView(widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 1, 0, 1, 2);


        retranslateUi(getworker);

        QMetaObject::connectSlotsByName(getworker);
    } // setupUi

    void retranslateUi(QWidget *getworker)
    {
        getworker->setWindowTitle(QCoreApplication::translate("getworker", "\346\237\245\350\257\242\347\263\273\347\273\237", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("getworker", "\350\257\267\350\276\223\345\205\245\346\203\263\350\246\201\346\237\245\346\211\276\347\232\204\345\214\273\345\212\241\344\272\272\345\221\230\345\247\223\345\220\215", nullptr));
        search->setText(QCoreApplication::translate("getworker", "\346\220\234\347\264\242", nullptr));
        select->setItemText(0, QCoreApplication::translate("getworker", "\346\230\276\347\244\272\345\205\250\351\203\250", nullptr));
        select->setItemText(1, QCoreApplication::translate("getworker", "\346\214\211\345\247\223\345\220\215\346\237\245\346\211\276", nullptr));

        returnback->setText(QCoreApplication::translate("getworker", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class getworker: public Ui_getworker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETWORKER_H
