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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *a;
    QLineEdit *b;
    QPushButton *plus;
    QPushButton *minus;
    QPushButton *inmultire;
    QPushButton *impartire;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1459, 747);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        a = new QLineEdit(centralWidget);
        a->setObjectName(QStringLiteral("a"));
        a->setGeometry(QRect(40, 190, 311, 71));
        QFont font;
        font.setFamily(QStringLiteral("MS UI Gothic"));
        font.setPointSize(26);
        font.setBold(false);
        font.setWeight(50);
        a->setFont(font);
        a->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        a->setAlignment(Qt::AlignCenter);
        b = new QLineEdit(centralWidget);
        b->setObjectName(QStringLiteral("b"));
        b->setGeometry(QRect(40, 290, 311, 71));
        b->setFont(font);
        b->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        b->setAlignment(Qt::AlignCenter);
        plus = new QPushButton(centralWidget);
        plus->setObjectName(QStringLiteral("plus"));
        plus->setGeometry(QRect(390, 190, 131, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("MS UI Gothic"));
        font1.setPointSize(36);
        plus->setFont(font1);
        plus->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        minus = new QPushButton(centralWidget);
        minus->setObjectName(QStringLiteral("minus"));
        minus->setGeometry(QRect(540, 190, 131, 71));
        minus->setFont(font1);
        minus->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        inmultire = new QPushButton(centralWidget);
        inmultire->setObjectName(QStringLiteral("inmultire"));
        inmultire->setGeometry(QRect(390, 290, 131, 71));
        inmultire->setFont(font1);
        inmultire->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        impartire = new QPushButton(centralWidget);
        impartire->setObjectName(QStringLiteral("impartire"));
        impartire->setGeometry(QRect(540, 290, 131, 71));
        impartire->setFont(font1);
        impartire->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        a->setText(QString());
        a->setPlaceholderText(QApplication::translate("MainWindow", "Enter number 1", Q_NULLPTR));
        b->setText(QString());
        b->setPlaceholderText(QApplication::translate("MainWindow", "Enter number 2", Q_NULLPTR));
        plus->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        minus->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        inmultire->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        impartire->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
