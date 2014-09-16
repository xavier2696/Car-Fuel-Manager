#include "Factura.h"
#include <QString>
#include <QDate>
#include <sstream>
#include <string>
#include<QTextStream>

using std::string;
using std::stringstream;


Factura::Factura(double precio, QDate fecha,double km_recorridos, double litros)
    :precio(precio),fecha(fecha),km_recorridos(km_recorridos),litros(litros)
{

}



double Factura::getLitros() const
{
    return litros;
}

void Factura::setLitros(double value)
{
    litros = value;
}

double Factura::getPrecio() const
{
    return precio;
}

QDate Factura::getFecha() const
{
    return fecha;
}

void Factura::setFecha(const QDate &value)
{
    fecha = value;
}


double Factura::getKm_recorridos() const
{
    return km_recorridos;
}

void Factura::setKm_recorridos(double value)
{
    km_recorridos = value;
}

double Factura::Subtotal() const
{
    return precio*litros;
}

QString Factura::toString() const
{
    stringstream ss;
    ss<<"";
    return QString::fromStdString(ss.str());
}


QTextStream &operator<<(QTextStream &salida, const Factura & factura)
{
    salida<<factura.precio<<"|"
          <<factura.fecha.toString()<<"|"
          <<factura.km_recorridos<<"|"
          <<factura.litros;
    return salida;
}

