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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managefuc
{
public:
    QLabel *label;
    QPushButton *returnback;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *deletein;
    QPushButton *getw;
    QPushButton *getp;
    QPushButton *addp;
    QPushButton *mod;
    QPushButton *addw;

    void setupUi(QWidget *managefuc)
    {
        if (managefuc->objectName().isEmpty())
            managefuc->setObjectName(QString::fromUtf8("managefuc"));
        managefuc->resize(400, 300);
        label = new QLabel(managefuc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 371, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\235\250\344\273\273\344\270\234\347\253\271\347\237\263\344\275\223-Medium"));
        font.setPointSize(20);
        label->setFont(font);
        returnback = new QPushButton(managefuc);
        returnback->setObjectName(QString::fromUtf8("returnback"));
        returnback->setGeometry(QRect(290, 250, 91, 41));
        layoutWidget = new QWidget(managefuc);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 361, 191));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        deletein = new QPushButton(layoutWidget);
        deletein->setObjectName(QString::fromUtf8("deletein"));

        gridLayout->addWidget(deletein, 2, 1, 1, 1);

        getw = new QPushButton(layoutWidget);
        getw->setObjectName(QString::fromUtf8("getw"));

        gridLayout->addWidget(getw, 0, 1, 1, 1);

        getp = new QPushButton(layoutWidget);
        getp->setObjectName(QString::fromUtf8("getp"));

        gridLayout->addWidget(getp, 1, 1, 1, 1);

        addp = new QPushButton(layoutWidget);
        addp->setObjectName(QString::fromUtf8("addp"));

        gridLayout->addWidget(addp, 1, 0, 1, 1);

        mod = new QPushButton(layoutWidget);
        mod->setObjectName(QString::fromUtf8("mod"));

        gridLayout->addWidget(mod, 2, 0, 1, 1);

        addw = new QPushButton(layoutWidget);
        addw->setObjectName(QString::fromUtf8("addw"));

        gridLayout->addWidget(addw, 0, 0, 1, 1);


        retranslateUi(managefuc);

        QMetaObject::connectSlotsByName(managefuc);
    } // setupUi

    void retranslateUi(QWidget *managefuc)
    {
        managefuc->setWindowTitle(QCoreApplication::translate("managefuc", "\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("managefuc", "\344\277\241\346\201\257\347\256\241\347\220\206\347\256\241\347\220\206", nullptr));
        returnback->setText(QCoreApplication::translate("managefuc", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        deletein->setText(QCoreApplication::translate("managefuc", "\346\233\264\346\224\271\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        getw->setText(QCoreApplication::translate("managefuc", "\346\237\245\350\257\242\345\214\273\346\212\244\344\272\272\345\221\230\344\277\241\346\201\257", nullptr));
        getp->setText(QCoreApplication::translate("managefuc", "\346\237\245\350\257\242\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        addp->setText(QCoreApplication::translate("managefuc", "\346\267\273\345\212\240\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        mod->setText(QCoreApplication::translate("managefuc", "\346\233\264\346\224\271\345\214\273\346\210\267\344\272\272\345\221\230\344\277\241\346\201\257", nullptr));
        addw->setText(QCoreApplication::translate("managefuc", "\346\267\273\345\212\240\345\214\273\346\212\244\344\272\272\345\221\230\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managefuc: public Ui_managefuc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEFUC_H
