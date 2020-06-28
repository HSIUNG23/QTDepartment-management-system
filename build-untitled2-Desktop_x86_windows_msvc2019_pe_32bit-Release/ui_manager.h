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
    QLabel *label;
    QLabel *label_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *passwordya;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QPushButton *log;
    QPushButton *return_2;

    void setupUi(QWidget *manager)
    {
        if (manager->objectName().isEmpty())
            manager->setObjectName(QString::fromUtf8("manager"));
        manager->resize(400, 300);
        label = new QLabel(manager);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 381, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(20);
        label->setFont(font);
        label_3 = new QLabel(manager);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 130, 41, 9));
        widget = new QWidget(manager);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(70, 70, 251, 111));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        passwordya = new QLineEdit(widget);
        passwordya->setObjectName(QString::fromUtf8("passwordya"));
        passwordya->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordya, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        log = new QPushButton(manager);
        log->setObjectName(QString::fromUtf8("log"));
        log->setGeometry(QRect(70, 210, 101, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        log->setFont(font2);
        return_2 = new QPushButton(manager);
        return_2->setObjectName(QString::fromUtf8("return_2"));
        return_2->setGeometry(QRect(210, 210, 111, 41));
        return_2->setFont(font2);

        retranslateUi(manager);

        QMetaObject::connectSlotsByName(manager);
    } // setupUi

    void retranslateUi(QWidget *manager)
    {
        manager->setWindowTitle(QCoreApplication::translate("manager", "\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("manager", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        label_3->setText(QString());
        label_2->setText(QCoreApplication::translate("manager", "\345\257\206\347\240\201", nullptr));
        log->setText(QCoreApplication::translate("manager", "\347\231\273\345\275\225", nullptr));
        return_2->setText(QCoreApplication::translate("manager", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manager: public Ui_manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
