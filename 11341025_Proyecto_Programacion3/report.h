#ifndef REPORT_H
#define REPORT_H

#include <QWidget>
#include "Carro.h"

namespace Ui {
class Report;
}

class Report : public QWidget
{
    Q_OBJECT

public:
    explicit Report(Carro*, QWidget *parent = 0);
    ~Report();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Report *ui;
};

#endif // REPORT_H
