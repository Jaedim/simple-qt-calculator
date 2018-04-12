#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>

#include "aboutdialog.h"

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionQuit_triggered();
    void on_actionAbout_triggered();
    void on_button_0_clicked();
    void on_button_1_clicked();
    void on_button_2_clicked();
    void on_button_3_clicked();
    void on_button_4_clicked();
    void on_button_5_clicked();
    void on_button_6_clicked();
    void on_button_7_clicked();
    void on_button_8_clicked();
    void on_button_9_clicked();

    void on_button_plus_clicked();

    void on_button_minus_clicked();

    void on_button_multiply_clicked();

    void on_button_divide_clicked();

    void on_button_equals_clicked();

    void on_pushButton_clicked();

    void on_button_dot_clicked();

private:
    Ui::MainWindow *ui;
    QLineEdit *echoLineEdit;
    AboutDialog *aboutDialog;
};

#endif // MAINWINDOW_H
