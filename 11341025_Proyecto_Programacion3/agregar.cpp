#include "agregar.h"
#include "ui_agregar.h"

Agregar::Agregar(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Agregar)
{
    ui->setupUi(this);
}

Agregar::~Agregar()
{
    delete ui;
}
