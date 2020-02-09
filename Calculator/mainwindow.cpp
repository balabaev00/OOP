#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "voidwindow.h"
#include "calculator.h"
#include <math.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_result->setText("0");
    /*Обработка операций*/
    firstvalue = true;
    sign = true;
    operation = false;
    /*Обработка истории*/
    open = false;
    countHistory=0;
    ui->lineEdit_fullhistory->setVisible(open);
    ui->pushButton_del_history->setVisible(open);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*Обработка нажатий*/

void MainWindow::keyPressEvent(QKeyEvent *key)
{
    int keyCode; // Целочисленный код клавиши
    keyCode=key->key();
    switch (keyCode)
    {
        case Qt::Key_0:
        on_pushButton_0_clicked();
        break;
        case Qt::Key_1:
        on_pushButton_1_clicked();
        break;
        case Qt::Key_2:
        on_pushButton_2_clicked();
        break;
        case Qt::Key_3:
        on_pushButton_3_clicked();
        break;
        case Qt::Key_4:
        on_pushButton_4_clicked();
        break;
        case Qt::Key_5:
        on_pushButton_5_clicked();
        break;
        case Qt::Key_6:
        on_pushButton_6_clicked();
        break;
        case Qt::Key_7:
        on_pushButton_7_clicked();
        break;
        case Qt::Key_8:
        on_pushButton_8_clicked();
        break;
        case Qt::Key_9:
        on_pushButton_9_clicked();
        break;
        case Qt::Key_Backspace:
        on_pushButton_back_clicked();
        break;
        case Qt::Key_Period:
        on_pushButton_point_clicked();
        break;
        case Qt::Key_Plus:
        on_pushButton_plus_clicked();
        break;
        case Qt::Key_Minus:
        on_pushButton_minus_clicked();
        break;
        case Qt::Key_Enter:
        on_pushButton_equally_clicked();
        break;
        case Qt::Key_Escape:
        on_pushButton_clear_clicked();
        break;
        //case Qt::Key_multiply:
        //on_pushButton_multi_clicked();
        //break;
        //case Qt::Key_division:
        //on_pushButton_div_clicked();
        //break;
    }
}

void MainWindow::addLabel(QPushButton *button,QLabel *label)
{
    QString temp;
    if(label->text()=="0")
    {
        temp+=button->text();
        label->setText(temp);
    }
    else
    {
        temp=label->text();
        temp+=button->text();
        label->setText(temp);
    }
    sign = true;
}

void MainWindow::on_pushButton_0_clicked()
{
    addLabel(ui->pushButton_0,ui->label_result);
}


void MainWindow::on_pushButton_1_clicked()
{
    addLabel(ui->pushButton_1,ui->label_result);
}


void MainWindow::on_pushButton_2_clicked()
{
    addLabel(ui->pushButton_2,ui->label_result);
}

void MainWindow::on_pushButton_3_clicked()
{
    addLabel(ui->pushButton_3,ui->label_result);
}

void MainWindow::on_pushButton_4_clicked()
{
    addLabel(ui->pushButton_4,ui->label_result);
}

void MainWindow::on_pushButton_5_clicked()
{
    addLabel(ui->pushButton_5,ui->label_result);
}

void MainWindow::on_pushButton_6_clicked()
{
    addLabel(ui->pushButton_6,ui->label_result);
}

void MainWindow::on_pushButton_7_clicked()
{
    addLabel(ui->pushButton_7,ui->label_result);
}

void MainWindow::on_pushButton_8_clicked()
{
    addLabel(ui->pushButton_8,ui->label_result);
}

void MainWindow::on_pushButton_9_clicked()
{
    addLabel(ui->pushButton_9,ui->label_result);
}

void MainWindow::on_pushButton_back_clicked()
{
    QString temp;
    temp=ui->label_result->text();
    int size = temp.size();
    temp.resize(size-1);
    ui->label_result->setText(temp);
}

void MainWindow::on_pushButton_point_clicked()
{
    QString temp;
    if(ui->label_result->text()=="0" && !ui->label_result->text().contains("."))
    {
        temp=ui->label_result->text();
        temp+=".";
        ui->label_result->setText(temp);
    }
    else
    if(!ui->label_result->text().contains(".") && ui->label_result->text()!="")
    {
        temp=ui->label_result->text();
        temp+=".";
        ui->label_result->setText(temp);
    }
}

void MainWindow::on_pushButton_clear_clicked()
{
    ui->label_result->setText("0");
    ui->label_history->setText("");
    mainCalc.SetValue(0);
    action="";
}

void MainWindow::on_pushButton_sign_clicked()
{
    mainCalc.SetValue((-1)*ui->label_result->text().toDouble());
    ui->label_result->setText(QString::number(mainCalc.GetValue()));
}

void MainWindow::setHistory(QPushButton *button)
{  
    if(sign==true)
       ui->label_history->setText(ui->label_history->text()+ui->label_result->text()+button->text());
}

void MainWindow::checkButton()
{
    if(action=="+")
    {
       mainCalc += ui->label_result->text().toDouble();
       sign = false;
    }
    if(action=="-")
    {
        mainCalc -= ui->label_result->text().toDouble();
         sign = false;
    }
    if(action=="*")
    {
        mainCalc *= ui->label_result->text().toDouble();
        sign = false;
    }
    if(action=="/")
    {
        mainCalc /= ui->label_result->text().toDouble();
        sign = false;
    }
}

void MainWindow::on_pushButton_plus_clicked()
{
    sign=true;
    if(firstvalue==true)
    {
        firstvalue=false;
        mainCalc.SetValue(ui->label_result->text().toDouble());
        setHistory(ui->pushButton_plus);
        sign = false;
        action="+";
    }
    else
    {
        firstvalue=false;
        setHistory(ui->pushButton_plus);
        checkButton();
        action="+";
    }
    ui->label_result->setText("0");
}

void MainWindow::on_pushButton_minus_clicked()
{
    sign=true;
    if(firstvalue==true)
    {
        firstvalue=false;
        mainCalc.SetValue(ui->label_result->text().toDouble());
        setHistory(ui->pushButton_minus);
        sign = false;
        action="-";
    }
    else
    {
        firstvalue=false;
        setHistory(ui->pushButton_minus);
        checkButton();
        action="-";
    }
    ui->label_result->setText("0");
}

void MainWindow::on_pushButton_multi_clicked()
{
    sign=true;
    if(firstvalue==true)
    {
        firstvalue=false;
        mainCalc.SetValue(ui->label_result->text().toDouble());
        setHistory(ui->pushButton_multi);
        sign = false;
        action="*";
    }
    else
    {
        firstvalue=false;
        setHistory(ui->pushButton_multi);
        checkButton();
        action="*";
    }
    ui->label_result->setText("0");
}

void MainWindow::on_pushButton_div_clicked()
{
    sign=true;
    if(firstvalue==true)
    {
        firstvalue=false;
        mainCalc.SetValue(ui->label_result->text().toDouble());
        setHistory(ui->pushButton_div);
        sign = false;
        action="/";
    }
    else
    {
        firstvalue=false;
        setHistory(ui->pushButton_div);
        checkButton();
        action="/";
    }
    ui->label_result->setText("0");
}

void MainWindow::on_pushButton_equally_clicked()
{
    checkButton();
    if(sign==false)
    {
        if(countHistory==2)
        {
            countHistory=0;
            ui->lineEdit_fullhistory->setText("");
        }
        countHistory++;
        ui->lineEdit_fullhistory->setText(ui->lineEdit_fullhistory->text()+"    "+ui->label_history->text()+ui->label_result->text() + "=" + QString::number(mainCalc.GetValue()));
        ui->label_history->setText("");
    }
    ui->label_result->setText(QString::number(mainCalc.GetValue()));
    action="";
    sign=true;
    firstvalue=true;
}

void MainWindow::on_pushButton_fullhistory_clicked()
{
    open = !open;
    ui->lineEdit_fullhistory->setVisible(open);
    ui->pushButton_del_history->setVisible(open);
}

void MainWindow::on_pushButton_del_history_clicked()
{
    ui->lineEdit_fullhistory->setText("");
}

void MainWindow::on_pushButton_fact_clicked()
{
    mainCalc.SetValue(ui->label_result->text().toDouble());
    ui->label_result->setText(QString::number(mainCalc.factorValue()));
}

void MainWindow::on_pushButton_pi_clicked()
{
    mainCalc.SetValue(ui->label_result->text().toDouble());
    ui->label_result->setText(QString::number(mainCalc.numberPI()));
}

void MainWindow::on_pushButton_clean_entry_clicked()
{
    ui->label_result->setText("0");
}

void MainWindow::on_pushButton_sqrt_clicked()
{
    mainCalc.SetValue(ui->label_result->text().toDouble());
    ui->label_result->setText(QString::number(mainCalc.sqrtValue()));
}

void MainWindow::on_pushButton_exp_clicked()
{
    mainCalc.SetValue(ui->label_result->text().toDouble());
    ui->label_result->setText(QString::number(mainCalc.exprValue()));
}

void MainWindow::on_pushButton_sin_clicked()
{
    mainCalc.SetValue(ui->label_result->text().toDouble());
    ui->label_result->setText(QString::number(mainCalc.sinValue()));
}

void MainWindow::on_pushButton_cos_clicked()
{
    mainCalc.SetValue(ui->label_result->text().toDouble());
    ui->label_result->setText(QString::number(mainCalc.cosValue()));
}

void MainWindow::on_pushButton_tg_clicked()
{
    mainCalc.SetValue(ui->label_result->text().toDouble());
    ui->label_result->setText(QString::number(mainCalc.tgValue()));
}

void MainWindow::on_pushButton_ln_clicked()
{
    mainCalc.SetValue(ui->label_result->text().toDouble());
    ui->label_result->setText(QString::number(mainCalc.lnValue()));
}

void MainWindow::on_action_triggered()
{
    voidWindow *myform = new voidWindow;
    myform->setVisible(true);
}
