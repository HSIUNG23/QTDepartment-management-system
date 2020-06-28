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
    QTableView *tableView;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *instrument)
    {
        if (instrument->objectName().isEmpty())
            instrument->setObjectName(QString::fromUtf8("instrument"));
        instrument->resize(596, 530);
        tableView = new QTableView(instrument);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 150, 531, 371));
        layoutWidget = new QWidget(instrument);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(51, 1, 521, 141));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Sans Serif"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);


        retranslateUi(instrument);

        QMetaObject::connectSlotsByName(instrument);
    } // setupUi

    void retranslateUi(QWidget *instrument)
    {
        instrument->setWindowTitle(QCoreApplication::translate("instrument", "\346\237\245\350\257\242\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("instrument", "\347\247\221\345\256\244\347\273\217\350\264\271\346\237\245\350\257\242", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("instrument", "\350\257\267\350\276\223\345\205\245\347\233\270\345\205\263\344\277\241\346\201\257", nullptr));
        pushButton->setText(QCoreApplication::translate("instrument", "\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("instrument", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class instrument: public Ui_instrument {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUMENT_H
