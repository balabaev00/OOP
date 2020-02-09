/********************************************************************************
** Form generated from reading UI file 'voidwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOIDWINDOW_H
#define UI_VOIDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_voidWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_text_res;
    QLineEdit *lineEdit_expr;
    QLabel *label_text;
    QPushButton *pushButton_go;
    QLabel *label_res;
    QMenuBar *menubar;

    void setupUi(QMainWindow *voidWindow)
    {
        if (voidWindow->objectName().isEmpty())
            voidWindow->setObjectName(QStringLiteral("voidWindow"));
        voidWindow->resize(277, 164);
        voidWindow->setMinimumSize(QSize(277, 164));
        voidWindow->setMaximumSize(QSize(277, 164));
        centralwidget = new QWidget(voidWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_text_res = new QLabel(centralwidget);
        label_text_res->setObjectName(QStringLiteral("label_text_res"));
        label_text_res->setGeometry(QRect(20, 80, 181, 21));
        QFont font;
        font.setPointSize(12);
        label_text_res->setFont(font);
        lineEdit_expr = new QLineEdit(centralwidget);
        lineEdit_expr->setObjectName(QStringLiteral("lineEdit_expr"));
        lineEdit_expr->setGeometry(QRect(20, 50, 241, 25));
        QFont font1;
        font1.setPointSize(11);
        lineEdit_expr->setFont(font1);
        label_text = new QLabel(centralwidget);
        label_text->setObjectName(QStringLiteral("label_text"));
        label_text->setGeometry(QRect(20, 20, 171, 31));
        label_text->setFont(font);
        pushButton_go = new QPushButton(centralwidget);
        pushButton_go->setObjectName(QStringLiteral("pushButton_go"));
        pushButton_go->setGeometry(QRect(20, 110, 241, 30));
        label_res = new QLabel(centralwidget);
        label_res->setObjectName(QStringLiteral("label_res"));
        label_res->setGeometry(QRect(200, 75, 41, 31));
        label_res->setFont(font);
        voidWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(voidWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 277, 21));
        voidWindow->setMenuBar(menubar);

        retranslateUi(voidWindow);

        QMetaObject::connectSlotsByName(voidWindow);
    } // setupUi

    void retranslateUi(QMainWindow *voidWindow)
    {
        voidWindow->setWindowTitle(QApplication::translate("voidWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200 \320\262\321\213\321\200\320\260\320\266\320\265\320\275\320\270\321\217", Q_NULLPTR));
        label_text_res->setText(QApplication::translate("voidWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\262\321\213\321\200\320\260\320\266\320\265\320\275\320\270\321\217 :", Q_NULLPTR));
        label_text->setText(QApplication::translate("voidWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\321\213\321\200\320\260\320\266\320\265\320\275\320\270\320\265 :", Q_NULLPTR));
        pushButton_go->setText(QApplication::translate("voidWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", Q_NULLPTR));
        label_res->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class voidWindow: public Ui_voidWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOIDWINDOW_H
