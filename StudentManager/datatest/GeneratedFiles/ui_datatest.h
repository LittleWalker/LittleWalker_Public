/********************************************************************************
** Form generated from reading UI file 'datatest.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATATEST_H
#define UI_DATATEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_datatestClass
{
public:
    QAction *act_add;
    QAction *act_delete;
    QAction *act_find;
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *btn_add;
    QPushButton *btn_delete;
    QPushButton *btn_find;
    QLabel *label_time;
    QMenuBar *menuBar;
    QMenu *menuChoices;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *datatestClass)
    {
        if (datatestClass->objectName().isEmpty())
            datatestClass->setObjectName(QStringLiteral("datatestClass"));
        datatestClass->resize(600, 400);
        datatestClass->setMinimumSize(QSize(600, 400));
        datatestClass->setMaximumSize(QSize(600, 400));
        datatestClass->setStyleSheet(QStringLiteral(""));
        act_add = new QAction(datatestClass);
        act_add->setObjectName(QStringLiteral("act_add"));
        act_delete = new QAction(datatestClass);
        act_delete->setObjectName(QStringLiteral("act_delete"));
        act_find = new QAction(datatestClass);
        act_find->setObjectName(QStringLiteral("act_find"));
        centralWidget = new QWidget(datatestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 30, 521, 201));
        label->setStyleSheet(QStringLiteral("font: 32pt \"Agency FB\";"));
        btn_add = new QPushButton(centralWidget);
        btn_add->setObjectName(QStringLiteral("btn_add"));
        btn_add->setGeometry(QRect(80, 260, 75, 23));
        btn_delete = new QPushButton(centralWidget);
        btn_delete->setObjectName(QStringLiteral("btn_delete"));
        btn_delete->setGeometry(QRect(240, 260, 91, 23));
        btn_find = new QPushButton(centralWidget);
        btn_find->setObjectName(QStringLiteral("btn_find"));
        btn_find->setGeometry(QRect(430, 260, 91, 23));
        label_time = new QLabel(centralWidget);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setGeometry(QRect(470, 20, 181, 41));
        label_time->setStyleSheet(QStringLiteral("font: 12pt \"Agency FB\";"));
        datatestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(datatestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menuChoices = new QMenu(menuBar);
        menuChoices->setObjectName(QStringLiteral("menuChoices"));
        datatestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(datatestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        datatestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(datatestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        datatestClass->setStatusBar(statusBar);

        menuBar->addAction(menuChoices->menuAction());
        menuChoices->addAction(act_add);
        menuChoices->addAction(act_delete);
        menuChoices->addAction(act_find);

        retranslateUi(datatestClass);

        QMetaObject::connectSlotsByName(datatestClass);
    } // setupUi

    void retranslateUi(QMainWindow *datatestClass)
    {
        datatestClass->setWindowTitle(QApplication::translate("datatestClass", "datatest", 0));
        act_add->setText(QApplication::translate("datatestClass", "AddStudent", 0));
        act_delete->setText(QApplication::translate("datatestClass", "DeleteStudent", 0));
        act_find->setText(QApplication::translate("datatestClass", "FindStudent", 0));
        label->setText(QApplication::translate("datatestClass", "\346\254\242\350\277\216\350\277\233\345\205\245\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        btn_add->setText(QApplication::translate("datatestClass", "\346\267\273\345\212\240\345\255\246\347\224\237", 0));
        btn_delete->setText(QApplication::translate("datatestClass", "\345\210\240\351\231\244\345\255\246\347\224\237", 0));
        btn_find->setText(QApplication::translate("datatestClass", "\346\237\245\346\211\276\345\255\246\347\224\237", 0));
        label_time->setText(QApplication::translate("datatestClass", "TextLabel", 0));
        menuChoices->setTitle(QApplication::translate("datatestClass", "\351\200\211\351\241\271", 0));
    } // retranslateUi

};

namespace Ui {
    class datatestClass: public Ui_datatestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATATEST_H
