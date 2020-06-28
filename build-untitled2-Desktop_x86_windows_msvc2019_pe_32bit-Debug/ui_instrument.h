/********************************************************************************
** Form generated from reading UI file 'instrument.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUMENT_H
#define UI_INSTRUMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_instrument
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableView;

    void setupUi(QWidget *instrument)
    {
        if (instrument->objectName().isEmpty())
            instrument->setObjectName(QString::fromUtf8("instrument"));
        instrument->resize(800, 600);
        instrument->setMinimumSize(QSize(800, 600));
        instrument->setMaximumSize(QSize(800, 600));
        widget = new QWidget(instrument);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 0, 781, 591));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Sans Serif"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        tableView = new QTableView(widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 1, 0, 1, 1);


        retranslateUi(instrument);

        QMetaObject::connectSlotsByName(instrument);
    } // setupUi

    void retranslateUi(QWidget *instrument)
    {
        instrument->setWindowTitle(QCoreApplication::translate("instrument", "\346\237\245\350\257\242\347\263\273\347\273\237", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("instrument", "\350\257\267\350\276\223\345\205\245\347\233\270\345\205\263\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("instrument", "\347\247\221\345\256\244\347\273\217\350\264\271\346\237\245\350\257\242", nullptr));
        pushButton->setText(QCoreApplication::translate("instrument", "\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("instrument", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class instrument: public Ui_instrument {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUMENT_H
