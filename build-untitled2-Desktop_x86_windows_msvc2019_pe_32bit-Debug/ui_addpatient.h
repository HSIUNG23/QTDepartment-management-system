/********************************************************************************
** Form generated from reading UI file 'addpatient.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPATIENT_H
#define UI_ADDPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addpatient
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *add1;
    QPushButton *returnback;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *addpatient)
    {
        if (addpatient->objectName().isEmpty())
            addpatient->setObjectName(QString::fromUtf8("addpatient"));
        addpatient->resize(800, 600);
        addpatient->setMinimumSize(QSize(800, 600));
        widget = new QWidget(addpatient);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 0, 471, 571));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        add1 = new QPushButton(widget);
        add1->setObjectName(QString::fromUtf8("add1"));

        gridLayout_2->addWidget(add1, 0, 3, 1, 1);

        returnback = new QPushButton(widget);
        returnback->setObjectName(QString::fromUtf8("returnback"));

        gridLayout_2->addWidget(returnback, 0, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 2, 1, 1);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 2, 1, 1);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 2, 1, 1);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_4 = new QLineEdit(widget1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 3, 2, 1, 1);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 2);

        lineEdit_5 = new QLineEdit(widget1);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 4, 2, 1, 1);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        textEdit = new QTextEdit(widget1);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 5, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget1, 0, 1, 1, 1);


        retranslateUi(addpatient);

        QMetaObject::connectSlotsByName(addpatient);
    } // setupUi

    void retranslateUi(QWidget *addpatient)
    {
        addpatient->setWindowTitle(QCoreApplication::translate("addpatient", "\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        add1->setText(QCoreApplication::translate("addpatient", "\346\267\273\345\212\240", nullptr));
        returnback->setText(QCoreApplication::translate("addpatient", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("addpatient", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("addpatient", "\347\227\205\346\210\277\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("addpatient", "\345\272\212\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("addpatient", "\345\271\264\351\276\204", nullptr));
        label_6->setText(QCoreApplication::translate("addpatient", "\350\201\224\347\263\273\346\226\271\345\274\217", nullptr));
        label_5->setText(QCoreApplication::translate("addpatient", "\347\227\205\345\206\265", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("addpatient", "\350\257\267\345\241\253\345\206\231\347\227\205\344\272\272\347\232\204\345\237\272\346\234\254\344\277\241\346\201\257\345\222\214\350\272\253\344\275\223\347\212\266\345\206\265\357\274\232\345\246\202\345\205\245\351\231\242\346\227\266\351\227\264\347\255\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addpatient: public Ui_addpatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPATIENT_H
