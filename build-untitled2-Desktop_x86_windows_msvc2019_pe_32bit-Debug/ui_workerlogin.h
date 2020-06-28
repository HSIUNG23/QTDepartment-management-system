/********************************************************************************
** Form generated from reading UI file 'workerlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKERLOGIN_H
#define UI_WORKERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_workerlogin
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *workerlogin)
    {
        if (workerlogin->objectName().isEmpty())
            workerlogin->setObjectName(QString::fromUtf8("workerlogin"));
        workerlogin->resize(800, 600);
        workerlogin->setMinimumSize(QSize(800, 600));
        workerlogin->setMaximumSize(QSize(800, 600));
        widget = new QWidget(workerlogin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(200, 50, 441, 361));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 2, 1, 1);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(lineEdit, 2, 2, 1, 1);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 4, 2, 1, 1);

        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAutoFillBackground(true);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(22);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 1, 1, 1);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAutoFillBackground(true);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 2, 1, 1);


        gridLayout_3->addWidget(widget1, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 4, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);


        retranslateUi(workerlogin);

        QMetaObject::connectSlotsByName(workerlogin);
    } // setupUi

    void retranslateUi(QWidget *workerlogin)
    {
        workerlogin->setWindowTitle(QCoreApplication::translate("workerlogin", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        lineEdit->setText(QString());
        label->setText(QCoreApplication::translate("workerlogin", "\345\267\245\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("workerlogin", "\345\260\212\346\225\254\347\232\204\345\214\273\347\224\237/\346\212\244\345\243\253\357\274\214\n"
"\346\202\250\345\245\275~ \350\257\267\347\231\273\345\275\225", nullptr));
        label_2->setText(QCoreApplication::translate("workerlogin", "\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("workerlogin", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("workerlogin", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class workerlogin: public Ui_workerlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKERLOGIN_H
