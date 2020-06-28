/********************************************************************************
** Form generated from reading UI file 'getpatient.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETPATIENT_H
#define UI_GETPATIENT_H

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

class Ui_getpatient
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableView;

    void setupUi(QWidget *getpatient)
    {
        if (getpatient->objectName().isEmpty())
            getpatient->setObjectName(QString::fromUtf8("getpatient"));
        getpatient->resize(800, 600);
        getpatient->setMinimumSize(QSize(800, 600));
        getpatient->setMaximumSize(QSize(800, 600));
        widget = new QWidget(getpatient);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 0, 771, 581));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        comboBox = new QComboBox(widget1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);


        gridLayout_2->addWidget(widget1, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 0, 1, 1, 1);

        tableView = new QTableView(widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 1, 0, 1, 2);


        retranslateUi(getpatient);

        QMetaObject::connectSlotsByName(getpatient);
    } // setupUi

    void retranslateUi(QWidget *getpatient)
    {
        getpatient->setWindowTitle(QCoreApplication::translate("getpatient", "\346\237\245\350\257\242\347\263\273\347\273\237", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("getpatient", "\350\257\267\350\276\223\345\205\245\347\227\205\344\272\272\344\277\241\346\201\257", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("getpatient", "\346\230\276\347\244\272\345\205\250\351\203\250", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("getpatient", "\345\247\223\345\220\215", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("getpatient", "\346\210\277\345\217\267", nullptr));

        pushButton->setText(QCoreApplication::translate("getpatient", "\346\220\234\347\264\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("getpatient", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class getpatient: public Ui_getpatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETPATIENT_H
