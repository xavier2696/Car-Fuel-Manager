#include "gasolinera.h"
#include "ui_gasolinera.h"

Gasolinera::Gasolinera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Gasolinera)
{
    ui->setupUi(this);
}

Gasolinera::~Gasolinera()
{
    delete ui;
}
