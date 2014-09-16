#include "tabla.h"
#include "ui_tabla.h"
#include "Carro.h"
#include<vector>

using std::vector;

Tabla::Tabla( const vector<Carro*>* carros,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tabla)
{
    ui->setupUi(this);
    ui->tabla->setRowCount(carros->size());
    for(int i=0; i<carros->size(); i++){
        QTableWidgetItem* itm = new QTableWidgetItem((*carros)[i]->getPlaca());
        ui->tabla->setItem(i,0,itm);
        QTableWidgetItem* itm2 = new QTableWidgetItem((*carros)[i]->getMarca());
        ui->tabla->setItem(i,1,itm2);
        QTableWidgetItem* itm3 = new QTableWidgetItem(QString::number((*carros)[i]->getCilindraje()));
        ui->tabla->setItem(i,2,itm3);
        QTableWidgetItem* itm4 = new QTableWidgetItem(QString::number((*carros)[i]->getCapacidad()));
        ui->tabla->setItem(i,3,itm4);
        QTableWidgetItem* itm5 = new QTableWidgetItem(QString::number((*carros)[i]->getFacturas().size()));
        ui->tabla->setItem(i,4,itm5);
        QTableWidgetItem* itm6 = new QTableWidgetItem(QString::number((*carros)[i]->total_km()));
        ui->tabla->setItem(i,5,itm6);
        QTableWidgetItem* itm7 = new QTableWidgetItem(QString::number((*carros)[i]->total_litros()));
        ui->tabla->setItem(i,6,itm7);
        QTableWidgetItem* itm8 = new QTableWidgetItem(QString::number((*carros)[i]->km_litro()));
        ui->tabla->setItem(i,7,itm8);
        QTableWidgetItem* itm9 = new QTableWidgetItem(QString::number((*carros)[i]->km_galon()));
        ui->tabla->setItem(i,8,itm9);
        QTableWidgetItem* itm10 = new QTableWidgetItem(QString::number((*carros)[i]->l_dia()));
        ui->tabla->setItem(i,9,itm10);
        QTableWidgetItem* itm11 = new QTableWidgetItem(QString::number((*carros)[i]->Gasto_dia()));
        ui->tabla->setItem(i,10,itm11);
        QTableWidgetItem* itm12 = new QTableWidgetItem(QString::number((*carros)[i]->Gasto_km()));
        ui->tabla->setItem(i,11,itm12);
        QTableWidgetItem* itm13 = new QTableWidgetItem(QString::number((*carros)[i]->Gasto()));
        ui->tabla->setItem(i,12,itm13);
    }
}

Tabla::~Tabla()
{
    for(int i = 0; i<ui->tabla->rowCount(); i++){
        for(int j =0; j<ui->tabla->columnCount(); j++){
            delete ui->tabla->item(i,j);
        }
    }
    delete ui;

}
