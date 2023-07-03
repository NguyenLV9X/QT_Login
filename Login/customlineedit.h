#ifndef CUSTOMLINEEDIT_H
#define CUSTOMLINEEDIT_H

#include <QWidget>
#include <QLineEdit>

class customLineEdit : public QLineEdit
{
    Q_OBJECT

public:
    customLineEdit(QWidget  *parent = 0);

signals:
    void send(bool hasFocus);

protected:
    virtual void focusInEvent(QFocusEvent *e);
    virtual void focusOutEvent(QFocusEvent *e);
};

#endif // CUSTOMLINEEDIT_H
