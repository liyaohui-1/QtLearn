#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    on_pushButton_clicked();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onLineEditTextEdited()
{
    ui->label->setText(ui->lineEdit->text());
}

void Widget::on_pushButton_clicked()
{
    connect(ui->lineEdit,&QLineEdit::textEdited,this,&Widget::onLineEditTextEdited);

    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(true);
}

void Widget::on_pushButton_2_clicked()
{
    disconnect(ui->lineEdit,&QLineEdit::textEdited,this,&Widget::onLineEditTextEdited);

    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(false);
}
