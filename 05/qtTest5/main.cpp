#include "mainwindow.h"
#include <QApplication>
#include <iostream>
using namespace std;

//源端约定回调函数类型
typedef void (*PCALLBACK)(double value,int count,void* pthis);

#pragma pack(push,1)
//接收端类
class Dest
{
private:
    double m_dblValue;
    int    m_nCount;

public:
    //处理函数类
    double DoSomething()
    {
        double m_dblResult = m_dblValue/m_nCount;
        return m_dblResult;
    }

    static void FuncCallBack(double value,int count,void* pthis)
    {
        Dest* pDst = static_cast<Dest*>(pthis);

        pDst->m_dblValue = value;
        if(count < 1)
        {
            pDst->m_nCount = 1;
        }
        else
        {
            pDst->m_nCount = count;
        }
    }
};
#pragma pack(pop)

//发送端类
class Src
{
public:
    void sendDatato(Dest* theDest,PCALLBACK pCallBack)
    {
        pCallBack(2.0,3,theDest);
    }
};


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    //定义两个对象
    Dest theDest;
    Src theSrc;

    theSrc.sendDatato(&theDest,Dest::FuncCallBack);
    cout << "Dest_Result: " << theDest.DoSomething() << endl;

    return a.exec();
}
