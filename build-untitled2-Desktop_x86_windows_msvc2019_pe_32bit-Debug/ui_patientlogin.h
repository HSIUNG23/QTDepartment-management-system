/********************************************************************************
** Form generated from reading UI file 'patientlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTLOGIN_H
#define UI_PATIENTLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_patientlogin
{
public:
    QLabel *label_2;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;

    void setupUi(QWidget *patientlogin)
    {
        if (patientlogin->objectName().isEmpty())
            patientlogin->setObjectName(QString::fromUtf8("patientlogin"));
        patientlogin->resize(800, 600);
        patientlogin->setMinimumSize(QSize(800, 600));
        patientlogin->setMaximumSize(QSize(800, 600));
        label_2 = new QLabel(patientlogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(352, -188, 160, 23));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font.setPointSize(20);
        label_2->setFont(font);
        label_2->setAutoFillBackground(false);
        widget = new QWidget(patientlogin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 40, 822, 381));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font1.setPointSize(20);
        label_3->setFont(font1);

        gridLayout_2->addWidget(label_3, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(600, 50));
        lineEdit->setAutoFillBackground(true);
        lineEdit->setFrame(true);
        lineEdit->setCursorMoveStyle(Qt::LogicalMoveStyle);

        gridLayout_2->addWidget(lineEdit, 1, 4, 1, 1);

        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 4, 1, 1);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget1, 2, 2, 1, 3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Agency FB"));
        font2.setPointSize(16);
        label->setFont(font2);
        label->setAutoFillBackground(true);

        gridLayout_2->addWidget(label, 1, 3, 1, 1);


        retranslateUi(patientlogin);

        QMetaObject::connectSlotsByName(patientlogin);
    } // setupUi

    void retranslateUi(QWidget *patientlogin)
    {
        patientlogin->setWindowTitle(QCoreApplication::translate("patientlogin", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        label_2->setText(QCoreApplication::translate("patientlogin", "\346\202\243\350\200\205\350\264\271\347\224\250\346\237\245\350\257\242\347\263\273\347\273\237", nullptr));
        label_3->setText(QCoreApplication::translate("patientlogin", "\345\214\273\350\215\257\350\264\271\346\237\245\350\257\242\347\263\273\347\273\237", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("patientlogin", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\347\224\265\350\257\235\345\217\267\347\240\201\346\235\245\350\277\233\350\241\214\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("patientlogin", "\351\200\200\345\207\272", nullptr));
        pushButton->setText(QCoreApplication::translate("patientlogin", "\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("patientlogin", "\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class patientlogin: public Ui_patientlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTLOGIN_H
