/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *radius_label;
    QLabel *area_label01;
    QLabel *area_label02;
    QPushButton *calcuate_pushButton;
    QLineEdit *radius_lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        radius_label = new QLabel(centralwidget);
        radius_label->setObjectName(QString::fromUtf8("radius_label"));
        radius_label->setGeometry(QRect(60, 200, 67, 17));
        area_label01 = new QLabel(centralwidget);
        area_label01->setObjectName(QString::fromUtf8("area_label01"));
        area_label01->setGeometry(QRect(240, 210, 67, 17));
        area_label02 = new QLabel(centralwidget);
        area_label02->setObjectName(QString::fromUtf8("area_label02"));
        area_label02->setGeometry(QRect(300, 210, 67, 17));
        calcuate_pushButton = new QPushButton(centralwidget);
        calcuate_pushButton->setObjectName(QString::fromUtf8("calcuate_pushButton"));
        calcuate_pushButton->setGeometry(QRect(170, 260, 89, 25));
        radius_lineEdit = new QLineEdit(centralwidget);
        radius_lineEdit->setObjectName(QString::fromUtf8("radius_lineEdit"));
        radius_lineEdit->setGeometry(QRect(110, 200, 113, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        radius_label->setText(QApplication::translate("MainWindow", "\345\215\212\345\276\204\357\274\232", nullptr));
        area_label01->setText(QApplication::translate("MainWindow", "\351\235\242\347\247\257\357\274\232", nullptr));
        area_label02->setText(QString());
        calcuate_pushButton->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
