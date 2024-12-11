#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    clickTension = false;
    ui->EtatTension->setText("Hors Tension");
    ui->EtatTension->setEnabled(true);

    ui->Misesoustension->setText("Mise sous tension");
    ui->Misesoustension->setEnabled(true);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Misesoustension_clicked()
{
    if (clickTension == false) {
        ui->EtatTension->setText("En tension");
        ui->EtatTension->setDisabled(true);
        clickTension = true;
    } else {
        ui->EtatTension->setText("A l'arrêt");
        ui->EtatTension->setDisabled(false);
        clickTension = false;
    }

}
void MainWindow::on_DemarrageDrone_clicked()
{
    ui->EtatDemarrage->setText("Drone démarré");
}

