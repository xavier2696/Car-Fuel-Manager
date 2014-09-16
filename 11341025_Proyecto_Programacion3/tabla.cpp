#include "tabla.h"
#include "ui_tabla.h"

Tabla::Tabla(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tabla)
{
    ui->setupUi(this);
}

Tabla::~Tabla()
{
    delete ui;
}
