#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    int adunare(int a, int b);
    int rezolvare(int a, int b, int c);

private slots:
    void on_B1_clicked();

    void on_B2_clicked();

    void on_REZ_clicked();

private:
    Ui::MainWindow *ui;
    int c=0;
};

#endif // MAINWINDOW_H
