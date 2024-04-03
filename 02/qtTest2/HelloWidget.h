#ifndef HELLOWIDGET_H
#define HELLOWIDGET_H

#include <QWidget>
#include <QLabel>

class HelloWidgt : public QWidget
{
    Q_OBJECT
public:
    explicit HelloWidgt(QWidget* parent = nullptr);
    ~HelloWidgt();
    //label
    QLabel* m_labelInfo;
};

#endif // HELLOWIDGET_H
