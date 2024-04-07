#include "showmsg.h"
#include <QMessageBox>

ShowMsg::ShowMsg(QObject *parent) : QObject(parent)
{

}

//str 就是从信号里发过来的字符串
void ShowMsg::RecvMsg(QString str)
{
    QMessageBox::information(nullptr, tr("Show"), str);
}
