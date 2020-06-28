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
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *add1;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *returnback;

    void setupUi(QWidget *addworker)
    {
        if (addworker->objectName().isEmpty())
            addworker->setObjectName(QString::fromUtf8("addworker"));
        addworker->resize(503, 308);
        widget = new QWidget(addworker);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 20, 301, 191));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 3, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 3);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 3, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 3, 1, 1);

        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 4, 3, 1, 1);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 3, 3, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        layoutWidget = new QWidget(addworker);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 230, 281, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        add1 = new QPushButton(layoutWidget);
        add1->setObjectName(QString::fromUtf8("add1"));

        horizontalLayout->addWidget(add1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        returnback = new QPushButton(layoutWidget);
        returnback->setObjectName(QString::fromUtf8("returnback"));

        horizontalLayout->addWidget(returnback);


        retranslateUi(addworker);

        QMetaObject::connectSlotsByName(addworker);
    } // setupUi

    void retranslateUi(QWidget *addworker)
    {
        addworker->setWindowTitle(QCoreApplication::translate("addworker", "\347\256\241\350\267\257\347\263\273\347\273\237", nullptr));
        label_5->setText(QCoreApplication::translate("addworker", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("addworker", "\350\201\214\344\275\215", nullptr));
        label->setText(QCoreApplication::translate("addworker", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("addworker", "\345\267\245\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("addworker", "\347\224\265\350\257\235", nullptr));
        add1->setText(QCoreApplication::translate("addworker", "\346\267\273\345\212\240", nullptr));
        returnback->setText(QCoreApplication::translate("addworker", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addworker: public Ui_addworker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWORKER_H
