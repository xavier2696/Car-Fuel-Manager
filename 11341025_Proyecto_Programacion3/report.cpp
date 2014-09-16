#include "report.h"
#include "ui_report.h"

Report::Report(Carro* carro,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Report)
{
    ui->setupUi(this);
    ui->l_capacidad->setText(QString::number(carro->getCapacidad()));
    ui->l_cilindraje->setText(QString::number(carro->getCilindraje()));
    ui->l_kmgalon->setText(QString::number(carro->km_galon()));
    ui->l_kmlitro->setText(QString::number(carro->km_litro()));
    ui->l_litrosdia->setText(QString::number(carro->l_dia()));
    ui->l_litroskm->setText(QString::number(carro->l_km()));
    ui->l_marca->setText(carro->getMarca());
    ui->l_placa->setText(carro->getPlaca());
    ui->l_totalkm->setText(QString::number(carro->total_km()));
    ui->l_totallitros->setText(QString::number(carro->total_litros()));
    ui->l_gasto->setText(QString::number(carro->Gasto()));
    ui->l_gastodia->setText(QString::number(carro->Gasto_dia()));
    ui->l_gastokm->setText(QString::number(carro->Gasto_km()));
}

Report::~Report()
{
    delete ui;
}

void Report::on_pushButton_clicked()
{
    this->setVisible(false);
}
