#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

const QString& Widget::nickName()
{
    return m_nickName;
}

int Widget::count()
{
    return m_count;
}

void Widget::setNickName(const QString& strNewName)
{
    if(m_nickName == strNewName)
    {
        return;
    }
    m_nickName = strNewName;
    emit nickNameChanged(strNewName);
}

void Widget::setCount(int nNewCount)
{
    if(m_count == nNewCount)
    {
        return;
    }
    m_count = nNewCount;
    emit countChanged(nNewCount);
}
