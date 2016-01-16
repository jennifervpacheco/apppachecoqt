/********************************************************************************
** Form generated from reading UI file 'apppacheco.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPPACHECO_H
#define UI_APPPACHECO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_apppacheco
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *apppacheco)
    {
        if (apppacheco->objectName().isEmpty())
            apppacheco->setObjectName(QStringLiteral("apppacheco"));
        apppacheco->resize(533, 351);
        centralWidget = new QWidget(apppacheco);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 10, 121, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 80, 71, 20));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 80, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(374, 80, 101, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 240, 75, 23));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 30, 91, 16));
        apppacheco->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(apppacheco);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 533, 21));
        apppacheco->setMenuBar(menuBar);
        mainToolBar = new QToolBar(apppacheco);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        apppacheco->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(apppacheco);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        apppacheco->setStatusBar(statusBar);

        retranslateUi(apppacheco);
        QObject::connect(pushButton_3, SIGNAL(clicked()), apppacheco, SLOT(close()));

        QMetaObject::connectSlotsByName(apppacheco);
    } // setupUi

    void retranslateUi(QMainWindow *apppacheco)
    {
        apppacheco->setWindowTitle(QApplication::translate("apppacheco", "apppacheco", 0));
        label->setText(QApplication::translate("apppacheco", "Sistema de Votacion", 0));
        label_2->setText(QApplication::translate("apppacheco", "Base de datos", 0));
        pushButton->setText(QApplication::translate("apppacheco", "acceso", 0));
        pushButton_2->setText(QApplication::translate("apppacheco", "Iniciar asamblea", 0));
        pushButton_3->setText(QApplication::translate("apppacheco", "cerrar", 0));
        label_3->setText(QApplication::translate("apppacheco", "Pagina Principal", 0));
    } // retranslateUi

};

namespace Ui {
    class apppacheco: public Ui_apppacheco {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPPACHECO_H
