/********************************************************************************
** Form generated from reading UI file 'dmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DMANAGER_H
#define UI_DMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dmanager
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_daily;
    QPushButton *btn_goals;

    void setupUi(QMainWindow *Dmanager)
    {
        if (Dmanager->objectName().isEmpty())
            Dmanager->setObjectName(QStringLiteral("Dmanager"));
        Dmanager->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dmanager->sizePolicy().hasHeightForWidth());
        Dmanager->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(Dmanager);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn_daily = new QPushButton(centralWidget);
        btn_daily->setObjectName(QStringLiteral("btn_daily"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_daily->sizePolicy().hasHeightForWidth());
        btn_daily->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_daily, 0, 0, 1, 1);

        btn_goals = new QPushButton(centralWidget);
        btn_goals->setObjectName(QStringLiteral("btn_goals"));
        sizePolicy1.setHeightForWidth(btn_goals->sizePolicy().hasHeightForWidth());
        btn_goals->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btn_goals, 1, 0, 1, 1);

        Dmanager->setCentralWidget(centralWidget);

        retranslateUi(Dmanager);

        QMetaObject::connectSlotsByName(Dmanager);
    } // setupUi

    void retranslateUi(QMainWindow *Dmanager)
    {
        Dmanager->setWindowTitle(QApplication::translate("Dmanager", "Dmanager", 0));
        btn_daily->setText(QApplication::translate("Dmanager", "Daily", 0));
        btn_goals->setText(QApplication::translate("Dmanager", "Goals", 0));
    } // retranslateUi

};

namespace Ui {
    class Dmanager: public Ui_Dmanager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DMANAGER_H
