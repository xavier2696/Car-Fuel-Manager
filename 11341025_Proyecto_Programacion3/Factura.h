#ifndef FACTURA_H
#define FACTURA_H

#include <QString>
#include <QDate>
#include<iostream>
#include<QTextStream>

using std::ostream;
class Factura
{
    const double precio;
    QDate fecha;
    double km_recorridos;
    double litros;
public:
    Factura(double,QDate,double,double);

    double getPrecio() const;
    QDate getFecha() const;
    void setFecha(const QDate &value);
    double getKm_recorridos() const;
    void setKm_recorridos(double value);
    double getLitros() const;
    void setLitros(double value);

    double Subtotal() const;
    QString toString() const;
    friend QTextStream &operator<<( QTextStream &, const Factura& );
};

#endif // FACTURA_H
