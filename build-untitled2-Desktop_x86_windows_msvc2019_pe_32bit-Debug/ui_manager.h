/********************************************************************************
** Form generated from reading UI file 'manager.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manager
{
public:
    QLabel *label_3;
    QWidget *widget;
    QWidget *widget1;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *passwordya;
    QGridLayout *gridLayout_2;
    QPushButton *return_2;
    QPushButton *log;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *manager)
    {
        if (manager->objectName().isEmpty())
            manager->setObjectName(QString::fromUtf8("manager"));
        manager->resize(800, 600);
        manager->setMinimumSize(QSize(800, 600));
        manager->setMaximumSize(QSize(800, 600));
        label_3 = new QLabel(manager);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 160, 16, 16));
        widget = new QWidget(manager);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(270, 80, 311, 351));
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 6, 311, 301));
        gridLayout_3 = new QGridLayout(widget1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(20);
        label->setFont(font);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        passwordya = new QLineEdit(widget1);
        passwordya->setObjectName(QString::fromUtf8("passwordya"));
        passwordya->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordya, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 2, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        return_2 = new QPushButton(widget1);
        return_2->setObjectName(QString::fromUtf8("return_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        return_2->setFont(font2);

        gridLayout_2->addWidget(return_2, 1, 2, 1, 1);

        log = new QPushButton(widget1);
        log->setObjectName(QString::fromUtf8("log"));
        log->setFont(font2);

        gridLayout_2->addWidget(log, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 1, 0, 1, 1);


        retranslateUi(manager);

        QMetaObject::connectSlotsByName(manager);
    } // setupUi

    void retranslateUi(QWidget *manager)
    {
        manager->setWindowTitle(QCoreApplication::translate("manager", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("manager", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        label_2->setText(QCoreApplication::translate("manager", "\345\257\206\347\240\201", nullptr));
        return_2->setText(QCoreApplication::translate("manager", "\350\277\224\345\233\236", nullptr));
        log->setText(QCoreApplication::translate("manager", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manager: public Ui_manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
