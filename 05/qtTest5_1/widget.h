#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;

signals:
    void SendMsg(QString str);  //添加自定义信号
public slots:
    void ButtonClicked();   //添加自定义槽函数
};

#endif // WIDGET_H
