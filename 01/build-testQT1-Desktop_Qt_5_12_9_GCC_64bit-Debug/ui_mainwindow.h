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
    QLabel *label_2;
    QLabel *area_label01;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *area_label02;
    QLineEdit *radius_edit;
    QPushButton *calculate_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(610, 379);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        radius_label = new QLabel(centralwidget);
        radius_label->setObjectName(QString::fromUtf8("radius_label"));
        radius_label->setGeometry(QRect(130, 130, 51, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 130, 67, 17));
        area_label01 = new QLabel(centralwidget);
        area_label01->setObjectName(QString::fromUtf8("area_label01"));
        area_label01->setGeometry(QRect(310, 140, 81, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(360, 130, 67, 17));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(370, 120, 67, 17));
        area_label02 = new QLabel(centralwidget);
        area_label02->setObjectName(QString::fromUtf8("area_label02"));
        area_label02->setGeometry(QRect(360, 140, 67, 17));
        radius_edit = new QLineEdit(centralwidget);
        radius_edit->setObjectName(QString::fromUtf8("radius_edit"));
        radius_edit->setGeometry(QRect(180, 140, 113, 25));
        calculate_button = new QPushButton(centralwidget);
        calculate_button->setObjectName(QString::fromUtf8("calculate_button"));
        calculate_button->setGeometry(QRect(210, 200, 89, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 610, 22));
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
        label_2->setText(QString());
        area_label01->setText(QApplication::translate("MainWindow", "\351\235\242\347\247\257\357\274\232", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        area_label02->setText(QString());
        calculate_button->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
