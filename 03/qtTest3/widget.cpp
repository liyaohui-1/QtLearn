#include "widget.h"
#include "ui_widget.h"
#include "QMessageBox"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //添加关联代码，必须放在 setupUi 函数之后
    //connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(FoodIsComing()));   //旧语法
    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::FoodIsComing);    //新语法
}

Widget::~Widget()
{
    delete ui;
}

//槽函数定义代码，与普通成员函数类似
void Widget::FoodIsComing()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Take out");
    msgBox.setText("Food is coming.");
    msgBox.exec();
}
