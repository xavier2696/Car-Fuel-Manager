#ifndef CARRO_H
#define CARRO_H

#include <QString>
#include <QDate>
#include <string>
#include <vector>
#include "Factura.h"
#include<iostream>
#include<QTextStream>

using std::string;
using std::vector;
using std::ostream;


class Carro
{
    QString placa;
    QString marca;
    int cilindraje;
    double capacidad;
    QDate fecha_creacion;
    vector<Factura*> facturas;
public:
    Carro(QString,QString,int,double,QDate);
    ~Carro();

    QString getMarca() const;
    void setMarca(const QString &value);
    QString getPlaca() const;
    void setPlaca(const QString &value);
    int getCilindraje() const;
    void setCilindraje(int value);
    double getCapacidad() const;
    void setCapacidad(double value);
    QDate getFecha_creacion() const;
    void AgregarF(Factura*);
    void setFecha_creacion(const QDate &value);
    double total_km();
    double total_litros();
    double km_litro();
    double km_galon();
    double l_km();
    double l_dia();
    double Gasto();
    double Gasto_dia();
    double Gasto_km();
    QString toString() const;
    vector<Factura *> getFacturas() const;
    void setFacturas(const vector<Factura *> &value);
    void deleteFacturas();
    friend QTextStream &operator<<( QTextStream &, const Carro& );
};

#endif // CARRO_H
