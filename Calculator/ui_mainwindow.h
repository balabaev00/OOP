/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QPushButton *pushButton_fullhistory;
    QLineEdit *lineEdit_fullhistory;
    QPushButton *pushButton_del_history;
    QLabel *label_result;
    QLabel *label_history;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_exp;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_tg;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_clean_entry;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_back;
    QPushButton *pushButton_div;
    QPushButton *pushButton_pi;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_multi;
    QPushButton *pushButton_fact;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_sign;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_lBrace;
    QPushButton *pushButton_rBrase;
    QPushButton *pushButton_0;
    QPushButton *pushButton_point;
    QPushButton *pushButton_equally;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(398, 510);
        MainWindow->setMinimumSize(QSize(300, 510));
        QFont font;
        font.setPointSize(16);
        MainWindow->setFont(font);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_fullhistory = new QPushButton(centralwidget);
        pushButton_fullhistory->setObjectName(QStringLiteral("pushButton_fullhistory"));
        pushButton_fullhistory->setGeometry(QRect(9, 90, 31, 31));
        QFont font1;
        font1.setPointSize(14);
        pushButton_fullhistory->setFont(font1);
        lineEdit_fullhistory = new QLineEdit(centralwidget);
        lineEdit_fullhistory->setObjectName(QStringLiteral("lineEdit_fullhistory"));
        lineEdit_fullhistory->setGeometry(QRect(10, 130, 381, 61));
        lineEdit_fullhistory->setMinimumSize(QSize(282, 40));
        QFont font2;
        font2.setPointSize(12);
        lineEdit_fullhistory->setFont(font2);
        pushButton_del_history = new QPushButton(centralwidget);
        pushButton_del_history->setObjectName(QStringLiteral("pushButton_del_history"));
        pushButton_del_history->setGeometry(QRect(360, 90, 31, 30));
        pushButton_del_history->setMaximumSize(QSize(50, 30));
        pushButton_del_history->setFont(font1);
        label_result = new QLabel(centralwidget);
        label_result->setObjectName(QStringLiteral("label_result"));
        label_result->setGeometry(QRect(9, 19, 381, 61));
        label_result->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        label_history = new QLabel(centralwidget);
        label_history->setObjectName(QStringLiteral("label_history"));
        label_history->setGeometry(QRect(20, 20, 361, 21));
        QFont font3;
        font3.setPointSize(10);
        label_history->setFont(font3);
        label_history->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"}\n"
"\n"
"background-color : white;"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 257, 382, 223));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_exp = new QPushButton(layoutWidget);
        pushButton_exp->setObjectName(QStringLiteral("pushButton_exp"));
        QFont font4;
        font4.setFamily(QStringLiteral("Microsoft YaHei"));
        font4.setPointSize(16);
        pushButton_exp->setFont(font4);

        gridLayout->addWidget(pushButton_exp, 0, 0, 1, 1);

        pushButton_ln = new QPushButton(layoutWidget);
        pushButton_ln->setObjectName(QStringLiteral("pushButton_ln"));
        pushButton_ln->setFont(font4);

        gridLayout->addWidget(pushButton_ln, 0, 1, 1, 2);

        pushButton_sin = new QPushButton(layoutWidget);
        pushButton_sin->setObjectName(QStringLiteral("pushButton_sin"));
        pushButton_sin->setFont(font4);

        gridLayout->addWidget(pushButton_sin, 0, 3, 1, 1);

        pushButton_cos = new QPushButton(layoutWidget);
        pushButton_cos->setObjectName(QStringLiteral("pushButton_cos"));
        pushButton_cos->setFont(font4);

        gridLayout->addWidget(pushButton_cos, 0, 4, 1, 1);

        pushButton_tg = new QPushButton(layoutWidget);
        pushButton_tg->setObjectName(QStringLiteral("pushButton_tg"));
        pushButton_tg->setFont(font4);

        gridLayout->addWidget(pushButton_tg, 0, 5, 1, 1);

        pushButton_sqrt = new QPushButton(layoutWidget);
        pushButton_sqrt->setObjectName(QStringLiteral("pushButton_sqrt"));
        pushButton_sqrt->setFont(font4);

        gridLayout->addWidget(pushButton_sqrt, 1, 0, 1, 2);

        pushButton_clean_entry = new QPushButton(layoutWidget);
        pushButton_clean_entry->setObjectName(QStringLiteral("pushButton_clean_entry"));
        pushButton_clean_entry->setFont(font4);

        gridLayout->addWidget(pushButton_clean_entry, 1, 2, 1, 1);

        pushButton_clear = new QPushButton(layoutWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setFont(font4);

        gridLayout->addWidget(pushButton_clear, 1, 3, 1, 1);

        pushButton_back = new QPushButton(layoutWidget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setFont(font4);

        gridLayout->addWidget(pushButton_back, 1, 4, 1, 1);

        pushButton_div = new QPushButton(layoutWidget);
        pushButton_div->setObjectName(QStringLiteral("pushButton_div"));
        pushButton_div->setFont(font4);

        gridLayout->addWidget(pushButton_div, 1, 5, 1, 1);

        pushButton_pi = new QPushButton(layoutWidget);
        pushButton_pi->setObjectName(QStringLiteral("pushButton_pi"));
        pushButton_pi->setFont(font4);

        gridLayout->addWidget(pushButton_pi, 2, 0, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setFont(font4);

        gridLayout->addWidget(pushButton_7, 2, 1, 1, 2);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setFont(font4);

        gridLayout->addWidget(pushButton_8, 2, 3, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setFont(font4);

        gridLayout->addWidget(pushButton_9, 2, 4, 1, 1);

        pushButton_multi = new QPushButton(layoutWidget);
        pushButton_multi->setObjectName(QStringLiteral("pushButton_multi"));
        pushButton_multi->setFont(font4);

        gridLayout->addWidget(pushButton_multi, 2, 5, 1, 1);

        pushButton_fact = new QPushButton(layoutWidget);
        pushButton_fact->setObjectName(QStringLiteral("pushButton_fact"));
        pushButton_fact->setFont(font4);

        gridLayout->addWidget(pushButton_fact, 3, 0, 1, 2);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font4);

        gridLayout->addWidget(pushButton_4, 3, 2, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setFont(font4);

        gridLayout->addWidget(pushButton_5, 3, 3, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setFont(font4);

        gridLayout->addWidget(pushButton_6, 3, 4, 1, 1);

        pushButton_minus = new QPushButton(layoutWidget);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));
        pushButton_minus->setFont(font4);

        gridLayout->addWidget(pushButton_minus, 3, 5, 1, 1);

        pushButton_sign = new QPushButton(layoutWidget);
        pushButton_sign->setObjectName(QStringLiteral("pushButton_sign"));
        pushButton_sign->setFont(font4);

        gridLayout->addWidget(pushButton_sign, 4, 0, 1, 1);

        pushButton_1 = new QPushButton(layoutWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setFont(font4);

        gridLayout->addWidget(pushButton_1, 4, 1, 1, 2);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font4);

        gridLayout->addWidget(pushButton_2, 4, 3, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font4);

        gridLayout->addWidget(pushButton_3, 4, 4, 1, 1);

        pushButton_plus = new QPushButton(layoutWidget);
        pushButton_plus->setObjectName(QStringLiteral("pushButton_plus"));
        pushButton_plus->setFont(font4);

        gridLayout->addWidget(pushButton_plus, 4, 5, 1, 1);

        pushButton_lBrace = new QPushButton(layoutWidget);
        pushButton_lBrace->setObjectName(QStringLiteral("pushButton_lBrace"));
        pushButton_lBrace->setFont(font4);

        gridLayout->addWidget(pushButton_lBrace, 5, 0, 1, 1);

        pushButton_rBrase = new QPushButton(layoutWidget);
        pushButton_rBrase->setObjectName(QStringLiteral("pushButton_rBrase"));
        pushButton_rBrase->setFont(font4);

        gridLayout->addWidget(pushButton_rBrase, 5, 1, 1, 2);

        pushButton_0 = new QPushButton(layoutWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setFont(font4);

        gridLayout->addWidget(pushButton_0, 5, 3, 1, 1);

        pushButton_point = new QPushButton(layoutWidget);
        pushButton_point->setObjectName(QStringLiteral("pushButton_point"));
        pushButton_point->setFont(font4);

        gridLayout->addWidget(pushButton_point, 5, 4, 1, 1);

        pushButton_equally = new QPushButton(layoutWidget);
        pushButton_equally->setObjectName(QStringLiteral("pushButton_equally"));
        pushButton_equally->setFont(font4);

        gridLayout->addWidget(pushButton_equally, 5, 5, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 398, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", Q_NULLPTR));
        action->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\262\321\213\321\200\320\260\320\266\320\265\320\275\320\270\320\265", Q_NULLPTR));
        pushButton_fullhistory->setText(QApplication::translate("MainWindow", "H", Q_NULLPTR));
        pushButton_del_history->setText(QApplication::translate("MainWindow", "D", Q_NULLPTR));
        label_result->setText(QString());
        label_history->setText(QString());
        pushButton_exp->setText(QApplication::translate("MainWindow", "exp", Q_NULLPTR));
        pushButton_ln->setText(QApplication::translate("MainWindow", "ln", Q_NULLPTR));
        pushButton_sin->setText(QApplication::translate("MainWindow", "sin", Q_NULLPTR));
        pushButton_cos->setText(QApplication::translate("MainWindow", "cos", Q_NULLPTR));
        pushButton_tg->setText(QApplication::translate("MainWindow", "tg", Q_NULLPTR));
        pushButton_sqrt->setText(QApplication::translate("MainWindow", "sqrt", Q_NULLPTR));
        pushButton_clean_entry->setText(QApplication::translate("MainWindow", "CE", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("MainWindow", "<-", Q_NULLPTR));
        pushButton_div->setText(QApplication::translate("MainWindow", "\303\267", Q_NULLPTR));
        pushButton_pi->setText(QApplication::translate("MainWindow", "\317\200", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        pushButton_multi->setText(QApplication::translate("MainWindow", "\303\227", Q_NULLPTR));
        pushButton_fact->setText(QApplication::translate("MainWindow", "n!", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButton_sign->setText(QApplication::translate("MainWindow", "\302\261", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButton_lBrace->setText(QApplication::translate("MainWindow", "(", Q_NULLPTR));
        pushButton_rBrase->setText(QApplication::translate("MainWindow", ")", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton_point->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        pushButton_equally->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
