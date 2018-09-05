/********************************************************************************
** Form generated from reading UI file 'addstudent.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENT_H
#define UI_ADDSTUDENT_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddStudents
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_6;
    QLineEdit *le_id;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *le_name;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLineEdit *le_age;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_4;
    QLineEdit *le_mobile;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_5;
    QLineEdit *le_college;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *btn_ok;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_15;

    void setupUi(QDialog *AddStudents)
    {
        if (AddStudents->objectName().isEmpty())
            AddStudents->setObjectName(QStringLiteral("AddStudents"));
        AddStudents->resize(521, 375);
        AddStudents->setMinimumSize(QSize(521, 375));
        AddStudents->setMaximumSize(QSize(521, 375));
        verticalLayout = new QVBoxLayout(AddStudents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_10 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        label = new QLabel(AddStudents);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QStringLiteral("font: 14pt \"Agency FB\";"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_9 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        label_6 = new QLabel(AddStudents);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("font: 11pt \"Agency FB\";\n"
"font: 9pt \"Baskerville Old Face\";"));

        horizontalLayout_4->addWidget(label_6);

        le_id = new QLineEdit(AddStudents);
        le_id->setObjectName(QStringLiteral("le_id"));

        horizontalLayout_4->addWidget(le_id);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(2, 1);
        horizontalLayout_4->setStretch(3, 3);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(AddStudents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: 11pt \"Agency FB\";"));

        horizontalLayout->addWidget(label_2);

        le_name = new QLineEdit(AddStudents);
        le_name->setObjectName(QStringLiteral("le_name"));

        horizontalLayout->addWidget(le_name);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 3);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_3 = new QLabel(AddStudents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 11pt \"Agency FB\";"));

        horizontalLayout_2->addWidget(label_3);

        le_age = new QLineEdit(AddStudents);
        le_age->setObjectName(QStringLiteral("le_age"));

        horizontalLayout_2->addWidget(le_age);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 3);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_4 = new QLabel(AddStudents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font: 11pt \"Agency FB\";"));

        horizontalLayout_3->addWidget(label_4);

        le_mobile = new QLineEdit(AddStudents);
        le_mobile->setObjectName(QStringLiteral("le_mobile"));

        horizontalLayout_3->addWidget(le_mobile);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(2, 2);
        horizontalLayout_3->setStretch(3, 2);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_8 = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        label_5 = new QLabel(AddStudents);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("font: 11pt \"Agency FB\";"));

        horizontalLayout_6->addWidget(label_5);

        le_college = new QLineEdit(AddStudents);
        le_college->setObjectName(QStringLiteral("le_college"));

        horizontalLayout_6->addWidget(le_college);

        horizontalSpacer_7 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(2, 2);
        horizontalLayout_6->setStretch(3, 2);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);

        btn_ok = new QPushButton(AddStudents);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout_7->addWidget(btn_ok);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);

        btn_cancel = new QPushButton(AddStudents);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        horizontalLayout_7->addWidget(btn_cancel);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_15);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(AddStudents);

        QMetaObject::connectSlotsByName(AddStudents);
    } // setupUi

    void retranslateUi(QDialog *AddStudents)
    {
        AddStudents->setWindowTitle(QApplication::translate("AddStudents", "Dialog", 0));
        label->setText(QApplication::translate("AddStudents", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\344\277\241\346\201\257", 0));
        label_6->setText(QApplication::translate("AddStudents", "     ID\357\274\232 ", 0));
        le_id->setPlaceholderText(QApplication::translate("AddStudents", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267", 0));
        label_2->setText(QApplication::translate("AddStudents", "\345\247\223\345\220\215\357\274\232", 0));
        le_name->setPlaceholderText(QApplication::translate("AddStudents", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215", 0));
        label_3->setText(QApplication::translate("AddStudents", "\345\271\264\351\276\204\357\274\232", 0));
        le_age->setPlaceholderText(QApplication::translate("AddStudents", "\350\257\267\350\276\223\345\205\245\345\271\264\351\276\204", 0));
        label_4->setText(QApplication::translate("AddStudents", "\347\224\265\350\257\235\357\274\232", 0));
        le_mobile->setPlaceholderText(QApplication::translate("AddStudents", "\350\257\267\350\276\223\345\205\24511\344\275\215\347\224\265\350\257\235\345\217\267\347\240\201", 0));
        label_5->setText(QApplication::translate("AddStudents", "\345\255\246\351\231\242\357\274\232", 0));
        le_college->setPlaceholderText(QApplication::translate("AddStudents", "\350\257\267\350\276\223\345\205\245\351\231\242\347\263\273", 0));
        btn_ok->setText(QApplication::translate("AddStudents", "ok", 0));
        btn_cancel->setText(QApplication::translate("AddStudents", "cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AddStudents: public Ui_AddStudents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENT_H
