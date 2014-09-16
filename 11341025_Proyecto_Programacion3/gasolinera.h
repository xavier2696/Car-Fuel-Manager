#ifndef GASOLINERA_H
#define GASOLINERA_H

#include <QWidget>
#include "Carro.h"

namespace Ui {
class Gasolinera;
}

class Gasolinera : public QWidget
{
    Q_OBJECT
    Carro* carro;
public:
    explicit Gasolinera(Carro*,QWidget *parent = 0);
    ~Gasolinera();



private slots:
    void on_pushButton_clicked();

private:
    Ui::Gasolinera *ui;
};

#endif // GASOLINERA_H
