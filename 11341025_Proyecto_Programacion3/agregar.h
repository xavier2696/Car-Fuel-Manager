#ifndef AGREGAR_H
#define AGREGAR_H

#include <QFrame>

namespace Ui {
class Agregar;
}

class Agregar : public QFrame
{
    Q_OBJECT

public:
    explicit Agregar(QWidget *parent = 0);
    ~Agregar();

private:
    Ui::Agregar *ui;
};

#endif // AGREGAR_H
