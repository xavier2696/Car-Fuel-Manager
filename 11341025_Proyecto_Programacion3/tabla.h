#ifndef TABLA_H
#define TABLA_H

#include <QWidget>

namespace Ui {
class Tabla;
}

class Tabla : public QWidget
{
    Q_OBJECT

public:
    explicit Tabla(QWidget *parent = 0);
    ~Tabla();

private:
    Ui::Tabla *ui;
};

#endif // TABLA_H
