#include "customwidget.h"

customWidget::customWidget(QWidget *parent)
    : QWidget(parent)
{}

void customWidget::receiveN(bool hasFocus)
{
    if(!hasFocus){
        this->setStyleSheet("#widget_number { border: 2px solid rgb(173, 173, 173); border-radius: 5px; background-color: rgb(180, 180, 180); } #widget_number:hover { border: 2px solid rgb(139, 139, 139); }");
    }else{
        this->setStyleSheet("#widget_number { border: 2px solid rgb(40, 40, 40); border-radius: 5px; background-color: rgb(180, 180, 180); }");
    }
}


void customWidget::receiveP(bool hasFocus)
{
    if(!hasFocus){
        this->setStyleSheet("#widget_pass { border: 2px solid rgb(173, 173, 173); border-radius: 5px; background-color: rgb(180, 180, 180); } #widget_pass:hover { border: 2px solid rgb(139, 139, 139); }");
    }else{
        this->setStyleSheet("#widget_pass { border: 2px solid rgb(40, 40, 40); border-radius: 5px; background-color: rgb(180, 180, 180); }");
    }
}
