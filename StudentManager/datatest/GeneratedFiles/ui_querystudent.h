/********************************************************************************
** Form generated from reading UI file 'querystudent.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYSTUDENT_H
#define UI_QUERYSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QUERY
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *le_id;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *le_name;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_4;
    QTableView *tableView;

    void setupUi(QDialog *QUERY)
    {
        if (QUERY->objectName().isEmpty())
            QUERY->setObjectName(QStringLiteral("QUERY"));
        QUERY->resize(547, 337);
        QUERY->setMinimumSize(QSize(547, 337));
        QUERY->setMaximumSize(QSize(547, 337));
        verticalLayout = new QVBoxLayout(QUERY);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(QUERY);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 22pt \"Agency FB\";"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(QUERY);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        le_id = new QLineEdit(QUERY);
        le_id->setObjectName(QStringLiteral("le_id"));

        horizontalLayout->addWidget(le_id);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_ok = new QPushButton(QUERY);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout->addWidget(btn_ok);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(QUERY);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        le_name = new QLineEdit(QUERY);
        le_name->setObjectName(QStringLiteral("le_name"));

        horizontalLayout_2->addWidget(le_name);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btn_cancel = new QPushButton(QUERY);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        horizontalLayout_2->addWidget(btn_cancel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(QUERY);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMinimumSize(QSize(501, 192));
        tableView->setMaximumSize(QSize(600, 192));

        verticalLayout->addWidget(tableView);


        retranslateUi(QUERY);

        QMetaObject::connectSlotsByName(QUERY);
    } // setupUi

    void retranslateUi(QDialog *QUERY)
    {
        QUERY->setWindowTitle(QApplication::translate("QUERY", "Dialog", 0));
        label_3->setText(QApplication::translate("QUERY", "\345\255\246\347\224\237\344\277\241\346\201\257\346\237\245\350\257\242", 0));
        label_2->setText(QApplication::translate("QUERY", "\350\257\267\350\276\223\345\205\245\346\237\245\350\257\242\345\255\246\347\224\237\347\232\204\345\255\246\345\217\267\357\274\232", 0));
        btn_ok->setText(QApplication::translate("QUERY", "ok", 0));
        label->setText(QApplication::translate("QUERY", "\350\257\267\350\276\223\345\205\245\346\237\245\350\257\242\345\255\246\347\224\237\347\232\204\345\247\223\345\220\215\357\274\232", 0));
        btn_cancel->setText(QApplication::translate("QUERY", "cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class QUERY: public Ui_QUERY {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYSTUDENT_H
