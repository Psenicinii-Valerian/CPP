#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_B1_clicked()
{
    this->c++;

    ui->B1->setText( QString::number(this->c) );
}

void MainWindow::on_B2_clicked()
{
    this->c=0;

    ui->B1->setText( "START" );
}

int MainWindow::adunare(int a, int b)
{
    return a+b;
}

void MainWindow::on_REZ_clicked()
{
    if( ui->a->text().isEmpty() )
    {
        QMessageBox::information(this, "Eroare"," Eroare::Seteaza valoarea a !!!");
    }

    else if( ui->b->text().isEmpty() )
    {
        QMessageBox::information(this, "Eroare", " Eroare::Seteaza valoarea b !!!");
    }

    else
    {
        int a = ui->a->text().toInt();
        int b = ui->b->text().toInt();

        ui->REZ->setText( " = " + QString::number(this->adunare(a,b) ) );
    }

}
