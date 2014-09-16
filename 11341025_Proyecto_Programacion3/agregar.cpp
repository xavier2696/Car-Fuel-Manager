#include "agregar.h"
#include "ui_agregar.h"
#include <vector>
#include"Carro.h"
#include <QMessageBox>
using std::vector;

Agregar::Agregar(vector<Carro*>* carros, QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Agregar)
{
    this->carros = carros;

    ui->setupUi(this);
    ui->c_fechacarro->setDate(QDate::currentDate());
}

Agregar::~Agregar()
{
    //delete carros;
    delete ui;
}



void Agregar::on_pushButton_clicked()
{
    bool repetida =false;
    for(int i = 0; i<carros->size(); i++){
        if(ui->tf_placa->text() == ((*carros)[i])->getPlaca()){
            repetida = true;
        }
    }
    if(!repetida){
        Carro* carro = new Carro(ui->tf_placa->text(),ui->tf_marca->text(),ui->sp_cilindraje->value(),ui->sp_capacidad->value(),ui->c_fechacarro->date());
        carros->push_back(carro);
        this->setVisible(false);
    }else{
        QMessageBox msg;
        msg.setWindowTitle("Repetido");
        msg.setText("La placa esta repetida. Ingrese una nueva");
        msg.exec();
        ui->tf_placa->setText("");
    }
}
