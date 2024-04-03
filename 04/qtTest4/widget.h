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

public slots:
    void onLineEditTextEdited();
    void onLineEditTextEdited2();
    void onLineEditTextEdited3();
};

#endif // WIDGET_H
