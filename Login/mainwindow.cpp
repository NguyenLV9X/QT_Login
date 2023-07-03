#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "customlineedit.h"
#include "customwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle(QString("eFPT Camera"));
    this->setWindowIcon(QIcon(":/resources/image/icon.ico"));

    this->setStyleSheet("background-color: 	#fcfeff;");
    this->setFixedSize(925,490);

    ui->centralwidget->layout()->setContentsMargins(0,0,0,0);
    menuBar()->hide();
    statusBar()->hide();

    QPixmap pic(":/resources/image/camera.jpg");
    ui->label_img->setPixmap(pic.scaled(QSize(540, 490)));

    ui->widget_number->setAttribute(Qt::WA_StyledBackground, true);
    ui->lineEdit_number->setAttribute(Qt::WA_StyledBackground, true);
    QObject::connect(ui->lineEdit_number, &customLineEdit::send,ui->widget_number,&customWidget::receiveN);

    ui->widget_pass->setAttribute(Qt::WA_StyledBackground, true);
    ui->lineEdit_pass->setAttribute(Qt::WA_StyledBackground, true);
    QObject::connect(ui->lineEdit_pass, &customLineEdit::send,ui->widget_pass,&customWidget::receiveP);

}

MainWindow::~MainWindow()
{
    delete ui;
}

