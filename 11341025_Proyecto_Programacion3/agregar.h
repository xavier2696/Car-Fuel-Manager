#ifndef AGREGAR_H
#define AGREGAR_H

#include <QFrame>
#include "Carro.h"
#include <vector>
#include"Carro.h"

using std::vector;

namespace Ui {
class Agregar;
}

class Agregar : public QFrame
{
    Q_OBJECT
    vector<Carro*>* carros;
public:
    explicit Agregar(vector<Carro*>* ,QWidget *parent = 0);
    ~Agregar();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Agregar *ui;
};

#endif // AGREGAR_H
