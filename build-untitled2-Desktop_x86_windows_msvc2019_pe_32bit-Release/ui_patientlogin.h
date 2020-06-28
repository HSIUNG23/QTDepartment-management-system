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
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *patientlogin)
    {
        if (patientlogin->objectName().isEmpty())
            patientlogin->setObjectName(QString::fromUtf8("patientlogin"));
        patientlogin->resize(400, 300);
        widget = new QWidget(patientlogin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 200, 251, 51));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        widget1 = new QWidget(patientlogin);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 0, 361, 181));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font.setPointSize(20);
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 2);

        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(16);
        label->setFont(font1);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFrame(true);
        lineEdit->setCursorMoveStyle(Qt::LogicalMoveStyle);

        gridLayout_2->addWidget(lineEdit, 1, 1, 1, 1);


        retranslateUi(patientlogin);

        QMetaObject::connectSlotsByName(patientlogin);
    } // setupUi

    void retranslateUi(QWidget *patientlogin)
    {
        patientlogin->setWindowTitle(QCoreApplication::translate("patientlogin", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        pushButton->setText(QCoreApplication::translate("patientlogin", "\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("patientlogin", "\351\200\200\345\207\272", nullptr));
        label_2->setText(QCoreApplication::translate("patientlogin", "\346\202\243\350\200\205\350\264\271\347\224\250\346\237\245\350\257\242\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("patientlogin", "\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("patientlogin", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\347\224\265\350\257\235\345\217\267\347\240\201\346\235\245\350\277\233\350\241\214\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class patientlogin: public Ui_patientlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTLOGIN_H
