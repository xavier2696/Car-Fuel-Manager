#include "gasolinera.h"
#include "ui_gasolinera.h"
#include<string>
#include<sstream>
#include<QMessageBox>

using std::string;
using std::stringstream;

Gasolinera::Gasolinera(Carro* carro,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Gasolinera)
{
    ui->setupUi(this);
    this->carro =carro;
    ui->sp_litros->setMaximum(this->carro->getCapacidad());
    ui->c_fecha->setDate(QDate::currentDate());
}

Gasolinera::~Gasolinera()
{
    delete ui;

}



void Gasolinera::on_pushButton_clicked()
{
    Factura* f = new Factura(ui->sp_precio->value(),ui->c_fecha->date(),ui->sp_km->value(),ui->sp_litros->value());
    this->carro->AgregarF(f);
    QMessageBox msg;
    msg.setWindowTitle("Datos");
    QString datos;
    stringstream ss;
    ss<<"Total a Pagar: "<<(f->getPrecio()*f->getLitros())<<"\nKm/Litros: "<<(f->getKm_recorridos()/f->getLitros())
      <<"\nLps/Km: "<<((f->getPrecio()*f->getLitros())/f->getKm_recorridos());
    datos = QString::fromStdString(ss.str());
    msg.setText(datos);
    msg.exec();
    this->setVisible(false);
}
