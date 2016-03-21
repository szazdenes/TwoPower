/********************************************************************************
** Form generated from reading UI file 'twopower.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWOPOWER_H
#define UI_TWOPOWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TwoPower
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TwoPower)
    {
        if (TwoPower->objectName().isEmpty())
            TwoPower->setObjectName(QStringLiteral("TwoPower"));
        TwoPower->resize(400, 300);
        centralWidget = new QWidget(TwoPower);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout_2->addWidget(listWidget, 1, 0, 1, 1);

        TwoPower->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TwoPower);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        TwoPower->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TwoPower);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TwoPower->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TwoPower);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TwoPower->setStatusBar(statusBar);

        retranslateUi(TwoPower);

        QMetaObject::connectSlotsByName(TwoPower);
    } // setupUi

    void retranslateUi(QMainWindow *TwoPower)
    {
        TwoPower->setWindowTitle(QApplication::translate("TwoPower", "TwoPower", 0));
        pushButton->setText(QApplication::translate("TwoPower", "Start", 0));
    } // retranslateUi

};

namespace Ui {
    class TwoPower: public Ui_TwoPower {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWOPOWER_H
