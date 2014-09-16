#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>



int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QMessageBox msg;
    msg.setText("Agregue un carro o cargue de un archivo para comenzar.\nSeleccione la placa del carro para usar los botones.");
    msg.setModal(true);
    msg.setWindowTitle("X Car Fuel Manager");
    msg.exec();
    return a.exec();
}
