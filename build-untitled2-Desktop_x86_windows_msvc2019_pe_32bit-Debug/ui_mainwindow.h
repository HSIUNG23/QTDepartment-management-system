/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QRadioButton *people;
    QRadioButton *worker;
    QRadioButton *manager;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\235\250\344\273\273\344\270\234\347\253\271\347\237\263\344\275\223-Medium"));
        font.setPointSize(20);
        MainWindow->setFont(font);
        MainWindow->setMouseTracking(true);
        MainWindow->setTabletTracking(true);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(500, 500));
        centralWidget->setMaximumSize(QSize(500, 500));
        centralWidget->setCursor(QCursor(Qt::OpenHandCursor));
        centralWidget->setMouseTracking(true);
        centralWidget->setTabletTracking(true);
        centralWidget->setFocusPolicy(Qt::ClickFocus);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 60, 641, 481));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(20);
        font1.setUnderline(true);
        label->setFont(font1);
        label->setAutoFillBackground(true);

        gridLayout->addWidget(label, 0, 0, 2, 1);

        people = new QRadioButton(widget);
        people->setObjectName(QString::fromUtf8("people"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(12);
        font2.setUnderline(true);
        people->setFont(font2);
        people->setAutoFillBackground(true);
        people->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(people, 1, 1, 1, 1);

        worker = new QRadioButton(widget);
        worker->setObjectName(QString::fromUtf8("worker"));
        worker->setFont(font2);
        worker->setMouseTracking(false);
        worker->setFocusPolicy(Qt::NoFocus);
        worker->setContextMenuPolicy(Qt::NoContextMenu);
        worker->setAutoFillBackground(true);
        worker->setIconSize(QSize(50, 50));

        gridLayout->addWidget(worker, 0, 1, 1, 1);

        manager = new QRadioButton(widget);
        manager->setObjectName(QString::fromUtf8("manager"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font3.setPointSize(12);
        font3.setUnderline(true);
        manager->setFont(font3);
        manager->setFocusPolicy(Qt::NoFocus);
        manager->setContextMenuPolicy(Qt::NoContextMenu);
        manager->setAutoFillBackground(true);
        manager->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(manager, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\247\221\345\256\244\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\247\221\345\256\244\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        people->setText(QCoreApplication::translate("MainWindow", "\344\275\217\351\231\242\346\202\243\350\200\205", nullptr));
        worker->setText(QCoreApplication::translate("MainWindow", "\345\214\273\346\212\244\344\272\272\345\221\230", nullptr));
        manager->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
