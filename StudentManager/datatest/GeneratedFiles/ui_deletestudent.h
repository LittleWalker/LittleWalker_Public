/********************************************************************************
** Form generated from reading UI file 'deletestudent.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETESTUDENT_H
#define UI_DELETESTUDENT_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteStu
{
public:
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_ok;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *le_id;

    void setupUi(QDialog *DeleteStu)
    {
        if (DeleteStu->objectName().isEmpty())
            DeleteStu->setObjectName(QStringLiteral("DeleteStu"));
        DeleteStu->resize(429, 240);
        DeleteStu->setMinimumSize(QSize(429, 240));
        DeleteStu->setMaximumSize(QSize(429, 240));
        label_2 = new QLabel(DeleteStu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 20, 121, 61));
        label_2->setStyleSheet(QLatin1String("\n"
"font: 20pt \"Agency FB\";"));
        label_2->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(DeleteStu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 180, 301, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_ok = new QPushButton(layoutWidget);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout->addWidget(btn_ok);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_cancel = new QPushButton(layoutWidget);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        horizontalLayout->addWidget(btn_cancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 4);
        horizontalLayout->setStretch(3, 3);
        horizontalLayout->setStretch(4, 1);
        layoutWidget1 = new QWidget(DeleteStu);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 110, 301, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        le_id = new QLineEdit(layoutWidget1);
        le_id->setObjectName(QStringLiteral("le_id"));

        horizontalLayout_2->addWidget(le_id);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 9);

        retranslateUi(DeleteStu);

        QMetaObject::connectSlotsByName(DeleteStu);
    } // setupUi

    void retranslateUi(QDialog *DeleteStu)
    {
        DeleteStu->setWindowTitle(QApplication::translate("DeleteStu", "Dialog", 0));
        label_2->setText(QApplication::translate("DeleteStu", "\345\210\240\351\231\244\345\255\246\347\224\237", 0));
        btn_ok->setText(QApplication::translate("DeleteStu", "ok", 0));
        btn_cancel->setText(QApplication::translate("DeleteStu", "cancel", 0));
        label->setText(QApplication::translate("DeleteStu", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\345\255\246\345\217\267\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class DeleteStu: public Ui_DeleteStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETESTUDENT_H
