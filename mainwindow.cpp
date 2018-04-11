#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aboutdialog.h"

#include <iostream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //echoLineEdit = new QLineEdit;
    //echoLineEdit->setPlaceholderText("This is here dude");
    //echoLineEdit->setFocus();

    ui->setupUi(this);
    //setCentralWidget(echoLineEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQuit_triggered()
{
    QCoreApplication::quit();
}

void MainWindow::on_actionAbout_triggered()
{
    aboutDialog = new AboutDialog(this);

    aboutDialog->show();
}

void MainWindow::on_button_0_clicked()
{
    ui->equation_line->insert("0");
}

void MainWindow::on_button_1_clicked()
{
    ui->equation_line->insert("1");
}

void MainWindow::on_button_2_clicked()
{
    ui->equation_line->insert("2");
}

void MainWindow::on_button_3_clicked()
{
    ui->equation_line->insert("3");
}

void MainWindow::on_button_4_clicked()
{
    ui->equation_line->insert("4");
}

void MainWindow::on_button_5_clicked()
{
    ui->equation_line->insert("5");
}

void MainWindow::on_button_6_clicked()
{
    ui->equation_line->insert("6");
}

void MainWindow::on_button_7_clicked()
{
    ui->equation_line->insert("7");
}

void MainWindow::on_button_8_clicked()
{
    ui->equation_line->insert("8");
}

void MainWindow::on_button_9_clicked()
{
    ui->equation_line->insert("9");
}

void MainWindow::on_button_plus_clicked()
{
    ui->equation_line->insert("+");
}

void MainWindow::on_button_multiply_clicked()
{
    ui->equation_line->insert("×");
}

void MainWindow::on_button_subtract_clicked()
{
    ui->equation_line->insert("-");
}

void MainWindow::on_button_divide_clicked()
{
    ui->equation_line->insert("/");
}
