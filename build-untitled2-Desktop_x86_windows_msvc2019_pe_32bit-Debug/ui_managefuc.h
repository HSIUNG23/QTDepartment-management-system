/********************************************************************************
** Form generated from reading UI file 'managefuc.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEFUC_H
#define UI_MANAGEFUC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managefuc
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *getp;
    QPushButton *addw;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QPushButton *getw;
    QSpacerItem *verticalSpacer_2;
    QPushButton *deletein;
    QPushButton *addp;
    QPushButton *mod;
    QSpacerItem *verticalSpacer_4;
    QPushButton *returnback;
    QLabel *label;

    void setupUi(QWidget *managefuc)
    {
        if (managefuc->objectName().isEmpty())
            managefuc->setObjectName(QString::fromUtf8("managefuc"));
        managefuc->resize(800, 600);
        managefuc->setMinimumSize(QSize(800, 600));
        managefuc->setMaximumSize(QSize(800, 600));
        managefuc->setAutoFillBackground(false);
        managefuc->setStyleSheet(QString::fromUtf8("#QWidget{background-image: url(:/new/prefix1/13jg59.jpg);}"));
        widget = new QWidget(managefuc);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(180, 40, 371, 471));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        getp = new QPushButton(widget);
        getp->setObjectName(QString::fromUtf8("getp"));

        gridLayout->addWidget(getp, 3, 1, 1, 1);

        addw = new QPushButton(widget);
        addw->setObjectName(QString::fromUtf8("addw"));

        gridLayout->addWidget(addw, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 0, 1, 1);

        getw = new QPushButton(widget);
        getw->setObjectName(QString::fromUtf8("getw"));

        gridLayout->addWidget(getw, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 1);

        deletein = new QPushButton(widget);
        deletein->setObjectName(QString::fromUtf8("deletein"));

        gridLayout->addWidget(deletein, 5, 1, 1, 1);

        addp = new QPushButton(widget);
        addp->setObjectName(QString::fromUtf8("addp"));

        gridLayout->addWidget(addp, 3, 0, 1, 1);

        mod = new QPushButton(widget);
        mod->setObjectName(QString::fromUtf8("mod"));

        gridLayout->addWidget(mod, 5, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        returnback = new QPushButton(widget);
        returnback->setObjectName(QString::fromUtf8("returnback"));

        gridLayout_2->addWidget(returnback, 2, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(20);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        retranslateUi(managefuc);

        QMetaObject::connectSlotsByName(managefuc);
    } // setupUi

    void retranslateUi(QWidget *managefuc)
    {
        managefuc->setWindowTitle(QCoreApplication::translate("managefuc", "\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        getp->setText(QCoreApplication::translate("managefuc", "\346\237\245\350\257\242\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        addw->setText(QCoreApplication::translate("managefuc", "\346\267\273\345\212\240\345\214\273\346\212\244\344\272\272\345\221\230\344\277\241\346\201\257", nullptr));
        getw->setText(QCoreApplication::translate("managefuc", "\346\237\245\350\257\242\345\214\273\346\212\244\344\272\272\345\221\230\344\277\241\346\201\257", nullptr));
        deletein->setText(QCoreApplication::translate("managefuc", "\346\233\264\346\224\271\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        addp->setText(QCoreApplication::translate("managefuc", "\346\267\273\345\212\240\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        mod->setText(QCoreApplication::translate("managefuc", "\346\233\264\346\224\271\345\214\273\346\210\267\344\272\272\345\221\230\344\277\241\346\201\257", nullptr));
        returnback->setText(QCoreApplication::translate("managefuc", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("managefuc", "\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managefuc: public Ui_managefuc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEFUC_H
