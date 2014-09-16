/********************************************************************************
** Form generated from reading UI file 'agregar_carro.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGAR_CARRO_H
#define UI_AGREGAR_CARRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Agregar_Carro
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *tf_placa;
    QLineEdit *tf_marca;
    QSpinBox *sp_cilindraje;
    QDoubleSpinBox *sp_capacidad;
    QLabel *label_5;
    QPushButton *b_guardarcarro;

    void setupUi(QWidget *Agregar_Carro)
    {
        if (Agregar_Carro->objectName().isEmpty())
            Agregar_Carro->setObjectName(QStringLiteral("Agregar_Carro"));
        Agregar_Carro->resize(355, 333);
        label = new QLabel(Agregar_Carro);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 60, 67, 17));
        label_2 = new QLabel(Agregar_Carro);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 120, 67, 17));
        label_3 = new QLabel(Agregar_Carro);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 170, 67, 17));
        label_4 = new QLabel(Agregar_Carro);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 220, 121, 17));
        tf_placa = new QLineEdit(Agregar_Carro);
        tf_placa->setObjectName(QStringLiteral("tf_placa"));
        tf_placa->setGeometry(QRect(170, 60, 131, 27));
        tf_marca = new QLineEdit(Agregar_Carro);
        tf_marca->setObjectName(QStringLiteral("tf_marca"));
        tf_marca->setGeometry(QRect(170, 110, 131, 27));
        sp_cilindraje = new QSpinBox(Agregar_Carro);
        sp_cilindraje->setObjectName(QStringLiteral("sp_cilindraje"));
        sp_cilindraje->setGeometry(QRect(230, 160, 71, 27));
        sp_capacidad = new QDoubleSpinBox(Agregar_Carro);
        sp_capacidad->setObjectName(QStringLiteral("sp_capacidad"));
        sp_capacidad->setGeometry(QRect(230, 210, 71, 27));
        label_5 = new QLabel(Agregar_Carro);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 20, 91, 17));
        b_guardarcarro = new QPushButton(Agregar_Carro);
        b_guardarcarro->setObjectName(QStringLiteral("b_guardarcarro"));
        b_guardarcarro->setGeometry(QRect(130, 270, 99, 27));

        retranslateUi(Agregar_Carro);

        QMetaObject::connectSlotsByName(Agregar_Carro);
    } // setupUi

    void retranslateUi(QWidget *Agregar_Carro)
    {
        Agregar_Carro->setWindowTitle(QApplication::translate("Agregar_Carro", "Agregar Carro", 0));
        label->setText(QApplication::translate("Agregar_Carro", "Placa", 0));
        label_2->setText(QApplication::translate("Agregar_Carro", "Marca", 0));
        label_3->setText(QApplication::translate("Agregar_Carro", "Cilindraje", 0));
        label_4->setText(QApplication::translate("Agregar_Carro", "Capacidad(Litros)", 0));
        label_5->setText(QApplication::translate("Agregar_Carro", "Nuevo Carro", 0));
        b_guardarcarro->setText(QApplication::translate("Agregar_Carro", "Guardar", 0));
    } // retranslateUi

};

namespace Ui {
    class Agregar_Carro: public Ui_Agregar_Carro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_CARRO_H
