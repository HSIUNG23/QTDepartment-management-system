/********************************************************************************
** Form generated from reading UI file 'addworker.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWORKER_H
#define UI_ADDWORKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addworker
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_5;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *add1;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *returnback;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *addworker)
    {
        if (addworker->objectName().isEmpty())
            addworker->setObjectName(QString::fromUtf8("addworker"));
        addworker->resize(800, 600);
        addworker->setMinimumSize(QSize(800, 600));
        addworker->setMaximumSize(QSize(800, 600));
        widget = new QWidget(addworker);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 30, 461, 381));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAutoFillBackground(true);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 3, 1, 1);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 3, 1, 1);

        lineEdit_5 = new QLineEdit(widget1);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 4, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 3, 1, 1);

        lineEdit_4 = new QLineEdit(widget1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 3, 3, 1, 1);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 3);


        gridLayout_2->addWidget(widget1, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        add1 = new QPushButton(widget);
        add1->setObjectName(QString::fromUtf8("add1"));

        horizontalLayout->addWidget(add1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        returnback = new QPushButton(widget);
        returnback->setObjectName(QString::fromUtf8("returnback"));

        horizontalLayout->addWidget(returnback);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout_2->addLayout(horizontalLayout, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 0, 1, 1);


        retranslateUi(addworker);

        QMetaObject::connectSlotsByName(addworker);
    } // setupUi

    void retranslateUi(QWidget *addworker)
    {
        addworker->setWindowTitle(QCoreApplication::translate("addworker", "\347\256\241\350\267\257\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("addworker", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("addworker", "\345\267\245\345\217\267", nullptr));
        label_5->setText(QCoreApplication::translate("addworker", "\345\257\206\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("addworker", "\347\224\265\350\257\235", nullptr));
        label_3->setText(QCoreApplication::translate("addworker", "\350\201\214\344\275\215", nullptr));
        add1->setText(QCoreApplication::translate("addworker", "\346\267\273\345\212\240", nullptr));
        returnback->setText(QCoreApplication::translate("addworker", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addworker: public Ui_addworker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWORKER_H
