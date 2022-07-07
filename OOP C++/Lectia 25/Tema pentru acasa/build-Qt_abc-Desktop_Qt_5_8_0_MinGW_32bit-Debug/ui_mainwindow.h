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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *B1;
    QPushButton *B2;
    QLineEdit *a;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *b;
    QPushButton *REZ;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1251, 576);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        B1 = new QPushButton(centralWidget);
        B1->setObjectName(QStringLiteral("B1"));
        B1->setGeometry(QRect(820, 440, 371, 121));
        QFont font;
        font.setFamily(QStringLiteral("PMingLiU-ExtB"));
        font.setPointSize(72);
        B1->setFont(font);
        B1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        B2 = new QPushButton(centralWidget);
        B2->setObjectName(QStringLiteral("B2"));
        B2->setGeometry(QRect(820, 360, 371, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("Haettenschweiler"));
        font1.setPointSize(36);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        B2->setFont(font1);
        B2->setStyleSheet(QStringLiteral("background-color: rgb(255, 85, 127);"));
        a = new QLineEdit(centralWidget);
        a->setObjectName(QStringLiteral("a"));
        a->setGeometry(QRect(30, 80, 721, 71));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Serif"));
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setWeight(75);
        a->setFont(font2);
        a->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 721, 61));
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe Print"));
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 127);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 210, 721, 61));
        label_2->setFont(font3);
        label_2->setStyleSheet(QLatin1String("background-color: rgb(0, 255, 127);\n"
"background-color: rgb(170, 255, 255);"));
        b = new QLineEdit(centralWidget);
        b->setObjectName(QStringLiteral("b"));
        b->setGeometry(QRect(30, 270, 721, 71));
        b->setFont(font2);
        b->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        REZ = new QPushButton(centralWidget);
        REZ->setObjectName(QStringLiteral("REZ"));
        REZ->setGeometry(QRect(30, 400, 561, 101));
        QFont font4;
        font4.setFamily(QStringLiteral("Segoe Script"));
        font4.setPointSize(72);
        REZ->setFont(font4);
        REZ->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 0);"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        B1->setText(QApplication::translate("MainWindow", "STEP", Q_NULLPTR));
        B2->setText(QApplication::translate("MainWindow", "RESET", Q_NULLPTR));
        a->setText(QString());
        a->setPlaceholderText(QApplication::translate("MainWindow", "Enter a", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Introduceti valoare pentru variabila a", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Introduceti valoare pentru variabila b", Q_NULLPTR));
        b->setText(QString());
        b->setPlaceholderText(QApplication::translate("MainWindow", "Enter b", Q_NULLPTR));
        REZ->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
