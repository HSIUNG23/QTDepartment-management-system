/********************************************************************************
** Form generated from reading UI file 'patientfuc.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTFUC_H
#define UI_PATIENTFUC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_patientfuc
{
public:
    QTableView *tableView;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *patientfuc)
    {
        if (patientfuc->objectName().isEmpty())
            patientfuc->setObjectName(QString::fromUtf8("patientfuc"));
        patientfuc->resize(607, 568);
        tableView = new QTableView(patientfuc);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 60, 571, 481));
        widget = new QWidget(patientfuc);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 0, 451, 51));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 3, 1, 1);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        retranslateUi(patientfuc);

        QMetaObject::connectSlotsByName(patientfuc);
    } // setupUi

    void retranslateUi(QWidget *patientfuc)
    {
        patientfuc->setWindowTitle(QCoreApplication::translate("patientfuc", "\345\214\273\347\226\227\350\264\271\347\224\250\346\230\216\347\273\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("patientfuc", "\351\200\200\345\207\272", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("patientfuc", "\346\214\211\347\205\247\346\227\266\351\227\264\344\273\216\346\227\251\345\210\260\346\231\232\346\216\222\345\272\217", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("patientfuc", "\346\214\211\347\205\247\346\227\266\351\227\264\344\273\216\346\231\232\345\210\260\346\227\251\346\216\222\345\272\217", nullptr));

        pushButton->setText(QCoreApplication::translate("patientfuc", "\346\237\245\347\234\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class patientfuc: public Ui_patientfuc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTFUC_H
