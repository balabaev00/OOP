#ifndef VOIDWINDOW_H
#define VOIDWINDOW_H

#include <QMainWindow>
#include <string>
#include "parser.h"

using namespace std;

namespace Ui {
class voidWindow;
}

class voidWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit voidWindow(QWidget *parent = nullptr);
    ~voidWindow();

private slots:
    void on_pushButton_go_clicked();

private:
    Ui::voidWindow *ui;
};

#endif // VOIDWINDOW_H
