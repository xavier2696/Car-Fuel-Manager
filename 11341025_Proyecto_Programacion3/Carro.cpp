#include "Carro.h"
#include <QString>
#include <QDate>
#include <string>
#include <sstream>

using std::string;
using std::stringstream;




QDate Carro::getFecha_creacion() const
{
    return fecha_creacion;
}

void Carro::setFecha_creacion(const QDate &value)
{
    fecha_creacion = value;
}

double Carro::total_km()
{
    if(facturas.size()==0)
        return 0;
    double km_total=0;
    for(int i = 0; i<facturas.size(); i++){
        km_total+=facturas[i]->getKm_recorridos();
    }
    return km_total;
}

double Carro::total_litros()
{
    if(facturas.size()==0)
        return 0;
    double litros_total = 0;
    for(int i = 0; i<facturas.size(); i++){
        litros_total+=facturas[i]->getLitros();
    }
    return litros_total;

}


void Carro::AgregarF(Factura* factura)
{
    facturas.push_back(factura);
}



QString Carro::toString() const
{
    stringstream ss;
    ss<<"";
    return QString::fromStdString(ss.str());
}


vector<Factura *> Carro::getFacturas() const
{
    return facturas;
}

void Carro::setFacturas(const vector<Factura *> &value)
{
    facturas = value;
}

void Carro::deleteFacturas()
{
    for(int i = 0; i<facturas.size(); i++)
        delete facturas[i];
    facturas.clear();
}



QTextStream &operator<<(QTextStream &salida, const Carro & carro)
{
    salida<<carro.marca<<","
          <<carro.placa<<","
          <<carro.cilindraje<<","
          <<carro.capacidad<<","
          <<carro.fecha_creacion.toString();
    if(carro.facturas.size()>0)
        salida<<",";
    for(int i =0 ;i<carro.facturas.size(); i++){
        salida<<*carro.facturas[i];
        if(i<carro.facturas.size()-1)
            salida<<"%";
    }
    return salida;
}
Carro::Carro(QString placa, QString marca, int cilindraje, double capacidad, QDate fecha_creacion):
    placa(placa),marca(marca),cilindraje(cilindraje),capacidad(capacidad),fecha_creacion(fecha_creacion)
{

}

Carro::~Carro()
{
    for(int i = 0; i<facturas.size(); i++)
        delete facturas[i];
}

QString Carro::getMarca() const
{
    return marca;
}

void Carro::setMarca(const QString &value)
{
    marca = value;
}

QString Carro::getPlaca() const
{
    return placa;
}

void Carro::setPlaca(const QString &value)
{
    placa = value;
}

int Carro::getCilindraje() const
{
    return cilindraje;
}

void Carro::setCilindraje(int value)
{
    cilindraje = value;
}

double Carro::getCapacidad() const
{
    return capacidad;
}

void Carro::setCapacidad(double value)
{
    capacidad = value;
}

double Carro::km_litro()
{
    if(facturas.size()==0 || total_km()<=0 || total_litros()<=0)
        return 0;
    return total_km()/total_litros();

}

double Carro::km_galon()
{
    if(facturas.size()==0 || total_km()<=0 || total_litros()<=0)
        return 0;

    return total_km()/(total_litros()/3.7854118);
}

double Carro::l_km()
{
    if(facturas.size()<=0 || total_km()<=0 || total_litros()<=0)
        return 0;
    return total_litros()/total_km();
}

double Carro::l_dia()
{
    if(facturas.size()==0 || total_km()<=0 || total_litros()<=0)
        return 0;
    int dias=1;
    QDate dia = facturas[0]->getFecha();
    for(unsigned int i = 0; i<facturas.size(); i++){
        QDate temp = facturas[i]->getFecha();
        if(dia != temp){
            dias++;
            dia = facturas[i]->getFecha();
        }
    }
    return total_litros()/dias;
}

double Carro::Gasto()
{
    double gasto = 0;
    for(int i = 0; i<facturas.size(); i++){
        gasto+= facturas[i]->Subtotal();

    }
    return gasto;
}

double Carro::Gasto_dia()
{
    if(facturas.size()==0 || total_km()<=0 || total_litros()<=0)
        return 0;
    int dias=1;
    QDate dia = facturas[0]->getFecha();
    for(unsigned int i = 0; i<facturas.size(); i++){
        QDate temp = facturas[i]->getFecha();
        if(dia != temp){
            dias++;
            dia = facturas[i]->getFecha();
        }
    }
    return Gasto()/dias;

}

double Carro::Gasto_km()
{
    if(facturas.size()==0 || total_km()<=0 || total_litros()<=0)
        return 0;
    return Gasto()/total_km();
}
