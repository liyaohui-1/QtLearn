#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->pushButtonli,&QPushButton::clicked,this,&Widget::onPushName);
    connect(ui->pushButtonwang,&QPushButton::clicked,this,&Widget::onPushName);
    connect(ui->pushButtonzhao,&QPushButton::clicked,this,&Widget::onPushName);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onPushName()
{
    //获取信号源头对象的名称
   QString strObjectSrc = this->sender()->objectName();
   qDebug()<<strObjectSrc; //打印源头对象名称

   //将要显示的消息
   QString strMsg;
   //判断是哪个按钮发的信号
   if( "pushButtonli" == strObjectSrc )
   {
       strMsg = tr("Hello Li! Your food is coming!");
   }
   else if( "pushButtonwang" == strObjectSrc )
   {
       strMsg = tr("Hello wang! Your food is coming!");
   }
   else if( "pushButtonzhao" == strObjectSrc )
   {
       strMsg = tr("Hello zhao! Your food is coming!");
   }
   else
   {
       //do nothing
       return;
   }
   //显示送餐消息
   QMessageBox::information(this, tr("Food"), strMsg);
}
