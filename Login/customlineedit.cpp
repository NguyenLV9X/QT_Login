#include "customlineedit.h"

customLineEdit::customLineEdit(QWidget  *parent)
    : QLineEdit(parent)
{

}

void customLineEdit::focusInEvent(QFocusEvent *e)
{
    QLineEdit::focusInEvent(e);
    emit send(true);

}

void customLineEdit::focusOutEvent(QFocusEvent *e)
{
    QLineEdit::focusOutEvent(e);
    emit send(false);

}
