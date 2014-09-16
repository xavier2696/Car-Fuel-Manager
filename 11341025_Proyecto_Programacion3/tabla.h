#ifndef TABLA_H
#define TABLA_H

#include <QWidget>
#include "Carro.h"
#include<vector>

using std::vector;

namespace Ui {
class Tabla;
}

class Tabla : public QWidget
{
    Q_OBJECT

public:
    explicit Tabla( const vector<Carro*>* ,QWidget *parent = 0);
    ~Tabla();

private:
    Ui::Tabla *ui;
};

#endif // TABLA_H
