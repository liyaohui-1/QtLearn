#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->pushButton,&QPushButton::clicked,this,&Widget::SendVoid);
}

Widget::~Widget()
{
    delete ui;
}
