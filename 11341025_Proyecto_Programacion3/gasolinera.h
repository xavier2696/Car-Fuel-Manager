#ifndef GASOLINERA_H
#define GASOLINERA_H

#include <QWidget>

namespace Ui {
class Gasolinera;
}

class Gasolinera : public QWidget
{
    Q_OBJECT

public:
    explicit Gasolinera(QWidget *parent = 0);
    ~Gasolinera();

private:
    Ui::Gasolinera *ui;
};

#endif // GASOLINERA_H
