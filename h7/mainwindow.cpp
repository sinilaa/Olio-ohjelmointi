#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    counter++; // Kasvattaa laskuria yhdellä
    QString s = QString::number(counter); // Muuntaa counter QStringiksi
    ui->txtResult->setText(s); // Päivittää QLineEditin tekstin
    ui->labelInfo->setText(s); // Päivittää QLabelin tekstin
}

void MainWindow::on_btnReset_clicked()
{
    counter = 0; // Nollaa laskurin
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelInfo->setText(s);
}

