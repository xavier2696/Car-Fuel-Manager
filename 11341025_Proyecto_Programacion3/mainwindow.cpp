#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Carro.h"
#include "Factura.h"
#include "agregar.h"
#include <QFileDialog>
#include <QFile>
#include<QTextStream>
#include <vector>
#include <sstream>
#include<iostream>
#include <QMessageBox>
using std::stringstream;
using std::vector;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->b_refrescar->setIcon(QIcon(QCoreApplication::applicationDirPath()+"/refresh.png"));
    ui->b_gasolinera->setIcon(QIcon(QCoreApplication::applicationDirPath()+"/gas.jpg"));
    ui->b_reporte->setIcon(QIcon(QCoreApplication::applicationDirPath()+"/reporte.jpg"));
    ui->b_eliminar->setIcon(QIcon(QCoreApplication::applicationDirPath()+"/delete.png"));
    ui->b_eliminarF->setIcon(QIcon(QCoreApplication::applicationDirPath()+"/delete2.png"));
    ui->b_reportegeneral->setIcon(QIcon(QCoreApplication::applicationDirPath()+"/reporte2.jpg"));
    agregar = new Agregar(&carros);
    tabla = new Tabla(&carros);
    QTreeWidgetItem* itm = new QTreeWidgetItem(ui->tree);
    itm->setText(0,"Carros");
    ui->tree->setHeaderHidden(false);

}

MainWindow::~MainWindow()
{
    for(unsigned int i = 0; i<carros.size();i++)
        delete carros[i];
    delete ui;
    delete agregar;
    delete gaso;
    delete tabla;
}






void MainWindow::on_b_agregarcarro_clicked()
{
    delete agregar;
    agregar = new Agregar(&carros);
    agregar->show();
}





void MainWindow::on_tree_itemSelectionChanged()
{
}

void MainWindow::on_b_refrescar_clicked()
{
    ui->tree->clear();
    QTreeWidgetItem* itm = new QTreeWidgetItem(ui->tree);
    itm->setText(0,"Carros");
    for (unsigned int i = 0; i<carros.size(); i++){
         QTreeWidgetItem* itm2 = new QTreeWidgetItem(itm);
         itm2->setText(0,carros[i]->getPlaca());
         itm2->setText(1,carros[i]->getMarca());
         if(carros[i]->getFacturas().size()>0){
            for (unsigned int j = 0; j<carros[i]->getFacturas().size(); j++){
                 QTreeWidgetItem* itm3 = new QTreeWidgetItem(itm2);
                stringstream ss;
                ss<<"Factura "<<(j+1)<<" \n    Litros: "<<carros[i]->getFacturas()[j]->getLitros()<<" \n    Km: "<<carros[i]->getFacturas()[j]->getKm_recorridos();
                ss<<"\n    Precio: "<<carros[i]->getFacturas()[j]->getPrecio()<<" Lps"<<"\n    Fecha: "<<carros[i]->getFacturas()[j]->getFecha().month()<<carros[i]->getFacturas()[j]->getFecha().toString("/dd/yyyy").toStdString();
                itm3->setText(2,QString::fromStdString(ss.str()));
                ss.str("");
                itm2->addChild(itm3);
            }
         }
         itm->addChild(itm2);
     }
}

void MainWindow::on_tree_itemClicked(QTreeWidgetItem *item, int column)
{
    bool isseleccionado = false;
    QString temp = item->text(column);
    for (unsigned int i = 0; i<carros.size();i++){
        if(temp==carros[i]->getPlaca() && column == 0){
            seleccionado = i;
            ui->b_gasolinera->setEnabled(true);
            ui->b_eliminar->setEnabled(true);
            ui->b_reporte->setEnabled(true);
            ui->b_eliminarF->setEnabled(true);
            isseleccionado = true;
        }
    }    
    if(!isseleccionado){
            ui->b_gasolinera->setEnabled(false);
            ui->b_eliminar->setEnabled(false);
            ui->b_reporte->setEnabled(false);
            ui->b_eliminarF->setEnabled(false);
    }
}

void MainWindow::on_b_gasolinera_clicked()
{

    if(seleccionado>=0){
        if(!gaso)
            delete gaso;
        gaso = new Gasolinera(carros[seleccionado]);
        //seleccionado = -1;
        gaso->show();
        ui->b_gasolinera->setEnabled(false);
        ui->b_eliminar->setEnabled(false);
        ui->b_reporte->setEnabled(false);
        ui->b_eliminarF->setEnabled(false);
    }
}

void MainWindow::on_b_eliminar_clicked()
{
    if(seleccionado>=0){
        QMessageBox msgBox;
        msgBox.setModal(true);
        msgBox.setWindowTitle("Eliminar");
        msgBox.setText("Esta seguro que desea eliminar el carro?");
        msgBox.setStandardButtons(QMessageBox::Ok |QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
        int ret = msgBox.exec();
        if(ret == QMessageBox::Ok){
            carros.erase(carros.begin()+seleccionado);
            //seleccionado = -1;
            this->on_b_refrescar_clicked();
            ui->b_gasolinera->setEnabled(false);
            ui->b_eliminar->setEnabled(false);
            ui->b_reporte->setEnabled(false);
            ui->b_eliminarF->setEnabled(false);
        }
    }

}


void MainWindow::on_b_reporte_clicked()
{
    if(seleccionado>=0){
        if(!report)
            delete report;
        report = new Report(carros[seleccionado]);
        report->show();
        ui->b_gasolinera->setEnabled(false);
        ui->b_eliminar->setEnabled(false);
        ui->b_reporte->setEnabled(false);
        ui->b_eliminarF->setEnabled(false);
    }

}

void MainWindow::on_b_guardar_clicked()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::AnyFile);
    dialog.setNameFilter(tr("Archivos Texto (*.txt)"));
    dialog.setViewMode(QFileDialog::Detail);
    dialog.setAcceptMode(QFileDialog::AcceptSave);
    //dialog.setDirectory();
    QString filename;
    if (dialog.exec()){
        filename = dialog.selectedFiles().first();
        filename.append(".txt");
        QFile archivo(filename);
        archivo.open(QIODevice::WriteOnly );
        QTextStream output(&archivo);
        for(unsigned int i = 0; i<carros.size(); i++){
            output<<*carros[i];
            if(i<carros.size()-1){
                output<<"#";
            }
        }
        archivo.close();

    }
}

void MainWindow::on_b_cargar_clicked()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.setNameFilter(tr("Archivos Texto (*.txt)"));
    dialog.setViewMode(QFileDialog::Detail);
    QString filename;
    if (dialog.exec()){
        carros.clear();
        filename = dialog.selectedFiles().first();
        QFile archivo(filename);
        archivo.open(QIODevice::ReadOnly);
        QTextStream input(&archivo);
        QString codigo = input.readAll();

        QStringList temp_carros = codigo.split("#");
        for(int i =0 ;i<temp_carros.size(); i++){
            vector<Factura*> facturas;
            QStringList temp_datos = temp_carros[i].split(",");
            if(temp_datos.size()==6){
                QStringList temp_cantfacturas = temp_datos.last().split("%");
                for(int j = 0; j<temp_cantfacturas.size(); j++){
                    QStringList temp_factura = temp_cantfacturas[j].split("|");
                    double precio = (temp_factura[0]).toDouble();
                    QDate fecha = QDate::fromString(temp_factura[1]);
                    double km = temp_factura[2].toDouble();
                    double litros = temp_factura[3].toDouble();
                    facturas.push_back(new Factura(precio,fecha,km,litros));
                }
            }

            QString marca = temp_datos[0];
            QString placa = temp_datos[1];
            int cilindraje = temp_datos[2].toDouble();
            double capacidad = temp_datos[3].toDouble();
            QDate fecha = QDate::fromString(temp_datos[4]);
            Carro* carrotemp = new Carro(placa,marca,cilindraje,capacidad,fecha);
            carrotemp->setFacturas(facturas);
            carros.push_back(carrotemp);
            facturas.clear();
        }
        archivo.close();
    }
    this->on_b_refrescar_clicked();
}

void MainWindow::on_b_eliminarF_clicked()
{
    if(seleccionado>=0){
        QMessageBox msgBox;
        msgBox.setModal(true);
        msgBox.setWindowTitle("Eliminar");
        msgBox.setText("Esta seguro que desea eliminar las facturas?");
        msgBox.setStandardButtons(QMessageBox::Ok |QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
        int ret = msgBox.exec();
        if(ret == QMessageBox::Ok){
            carros[seleccionado]->deleteFacturas();
            this->on_b_refrescar_clicked();
            ui->b_gasolinera->setEnabled(false);
            ui->b_eliminar->setEnabled(false);
            ui->b_reporte->setEnabled(false);
        }
    }
}

void MainWindow::on_b_reportegeneral_clicked()
{

        if(!tabla)
            delete tabla;
        tabla = new Tabla(&carros);
        tabla->show();
}
