#include "voidwindow.h"
#include "ui_voidwindow.h"

voidWindow::voidWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::voidWindow)
{
    ui->setupUi(this);
}

voidWindow::~voidWindow()
{
    delete ui;
}

void voidWindow::on_pushButton_go_clicked()
{

    QString str1 = ui->lineEdit_expr->text();
    QByteArray ba = str1.toLatin1();
    char *c_str2 = ba.data();
    TParser parser;
    parser.Compile(c_str2);
    parser.Evaluate();
    ui->label_res->setText(QString::number(parser.GetResult()));
}
