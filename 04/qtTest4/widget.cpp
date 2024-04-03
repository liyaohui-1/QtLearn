#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->lineEdit,&QLineEdit::textEdited,this,&Widget::onLineEditTextEdited);
    connect(ui->lineEdit,&QLineEdit::textEdited,this,&Widget::onLineEditTextEdited2);
    connect(ui->lineEdit,&QLineEdit::textEdited,this,&Widget::onLineEditTextEdited3);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onLineEditTextEdited()
{
    ui->label->setText(ui->lineEdit->text());
}

void Widget::onLineEditTextEdited2()
{
    ui->textBrowser->setText(ui->lineEdit->text());
}

void Widget::onLineEditTextEdited3()
{
   const QString tmp = ui->lineEdit->text();
   qDebug() << "text: " << tmp;
}
