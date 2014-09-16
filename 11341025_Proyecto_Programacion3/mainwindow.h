#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "Carro.h"
#include "Factura.h"
#include "agregar.h"
#include "gasolinera.h"
#include <vector>
#include <QTreeWidgetItem>
#include "report.h"
#include "tabla.h"

using std::vector;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    vector<Carro*> carros;
    Agregar* agregar;
    int seleccionado;
    Gasolinera* gaso;
    Report* report;
    Tabla* tabla;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:



    void on_b_agregarcarro_clicked();

    void on_tree_itemSelectionChanged();

    void on_b_refrescar_clicked();

    void on_tree_itemClicked(QTreeWidgetItem *item, int column);

    void on_b_gasolinera_clicked();

    void on_b_eliminar_clicked();

    void on_b_reporte_clicked();

    void on_b_guardar_clicked();

    void on_b_cargar_clicked();

    void on_b_eliminarF_clicked();

    void on_b_reportegeneral_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
