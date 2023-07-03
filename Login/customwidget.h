#ifndef CUSTOMWIDGET_H
#define CUSTOMWIDGET_H

#include <QWidget>
#include <QStylePainter>

class customWidget : public QWidget
{
    Q_OBJECT

public:
    customWidget(QWidget *parent = 0);

public slots:
    void  receiveN(bool hasFocus);
    void  receiveP(bool hasFocus);
};

#endif // CUSTOMWIDGET_H
