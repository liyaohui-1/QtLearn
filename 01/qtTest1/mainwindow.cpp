#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

const static double PI=3.14159;

void MainWindow::on_calcuate_pushButton_clicked()
{
        bool ok;
        QString tempStr;//定义临时字符串
        QString valueStr=ui->radius_lineEdit->text();//将半径文本框的文本读出来
        int valueDouble=valueStr.toDouble(&ok);//将文本转化成double
        double area=valueDouble*valueDouble*PI;//计算面积
        ui->area_label02->setText(tempStr.setNum(area));//输出字符串到面积标签框中
}
