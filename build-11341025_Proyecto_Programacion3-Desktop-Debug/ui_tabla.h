/********************************************************************************
** Form generated from reading UI file 'tabla.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLA_H
#define UI_TABLA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tabla
{
public:
    QTableWidget *tabla;
    QLabel *label;

    void setupUi(QWidget *Tabla)
    {
        if (Tabla->objectName().isEmpty())
            Tabla->setObjectName(QStringLiteral("Tabla"));
        Tabla->setWindowModality(Qt::ApplicationModal);
        Tabla->resize(669, 300);
        tabla = new QTableWidget(Tabla);
        if (tabla->columnCount() < 13)
            tabla->setColumnCount(13);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tabla->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        tabla->setObjectName(QStringLiteral("tabla"));
        tabla->setGeometry(QRect(10, 50, 651, 241));
        label = new QLabel(Tabla);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 10, 67, 17));

        retranslateUi(Tabla);

        QMetaObject::connectSlotsByName(Tabla);
    } // setupUi

    void retranslateUi(QWidget *Tabla)
    {
        Tabla->setWindowTitle(QApplication::translate("Tabla", "Reporte General", 0));
        QTableWidgetItem *___qtablewidgetitem = tabla->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Tabla", "Placa", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tabla->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Tabla", "Marca", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tabla->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Tabla", "Cilindraje", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tabla->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Tabla", "Capacidad(L)", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tabla->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Tabla", "Facturas", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tabla->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Tabla", "Total Km", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tabla->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Tabla", "Total Litros", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tabla->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Tabla", "Km/Litro", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tabla->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Tabla", "Km/Galon", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tabla->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("Tabla", "Litros/Dia", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tabla->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("Tabla", "Gasto/Dia", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tabla->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("Tabla", "Gasto/Km", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tabla->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("Tabla", "Gasto Total", 0));
        label->setText(QApplication::translate("Tabla", "Reporte", 0));
    } // retranslateUi

};

namespace Ui {
    class Tabla: public Ui_Tabla {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLA_H
