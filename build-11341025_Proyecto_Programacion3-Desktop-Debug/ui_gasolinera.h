/********************************************************************************
** Form generated from reading UI file 'gasolinera.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GASOLINERA_H
#define UI_GASOLINERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gasolinera
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QDateEdit *c_fecha;
    QDoubleSpinBox *sp_precio;
    QLabel *label_6;
    QDoubleSpinBox *sp_km;
    QLabel *label_7;
    QDoubleSpinBox *sp_litros;
    QLabel *label_8;
    QPushButton *pushButton;

    void setupUi(QWidget *Gasolinera)
    {
        if (Gasolinera->objectName().isEmpty())
            Gasolinera->setObjectName(QStringLiteral("Gasolinera"));
        Gasolinera->setWindowModality(Qt::ApplicationModal);
        Gasolinera->resize(426, 317);
        label = new QLabel(Gasolinera);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 10, 67, 17));
        label_2 = new QLabel(Gasolinera);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 90, 67, 17));
        label_3 = new QLabel(Gasolinera);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 210, 67, 17));
        label_4 = new QLabel(Gasolinera);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 130, 101, 17));
        label_5 = new QLabel(Gasolinera);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 170, 67, 17));
        c_fecha = new QDateEdit(Gasolinera);
        c_fecha->setObjectName(QStringLiteral("c_fecha"));
        c_fecha->setGeometry(QRect(240, 206, 110, 31));
        c_fecha->setCalendarPopup(true);
        sp_precio = new QDoubleSpinBox(Gasolinera);
        sp_precio->setObjectName(QStringLiteral("sp_precio"));
        sp_precio->setGeometry(QRect(280, 80, 69, 27));
        sp_precio->setValue(50);
        label_6 = new QLabel(Gasolinera);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(360, 80, 67, 17));
        sp_km = new QDoubleSpinBox(Gasolinera);
        sp_km->setObjectName(QStringLiteral("sp_km"));
        sp_km->setGeometry(QRect(280, 120, 69, 27));
        label_7 = new QLabel(Gasolinera);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(360, 120, 51, 17));
        sp_litros = new QDoubleSpinBox(Gasolinera);
        sp_litros->setObjectName(QStringLiteral("sp_litros"));
        sp_litros->setGeometry(QRect(280, 160, 69, 27));
        label_8 = new QLabel(Gasolinera);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(360, 160, 67, 17));
        pushButton = new QPushButton(Gasolinera);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 260, 99, 27));

        retranslateUi(Gasolinera);

        QMetaObject::connectSlotsByName(Gasolinera);
    } // setupUi

    void retranslateUi(QWidget *Gasolinera)
    {
        Gasolinera->setWindowTitle(QApplication::translate("Gasolinera", "Gasolinera", 0));
        label->setText(QApplication::translate("Gasolinera", "Factura", 0));
        label_2->setText(QApplication::translate("Gasolinera", "Precio", 0));
        label_3->setText(QApplication::translate("Gasolinera", "Fecha", 0));
        label_4->setText(QApplication::translate("Gasolinera", "Km Recorridos", 0));
        label_5->setText(QApplication::translate("Gasolinera", "Litros", 0));
        label_6->setText(QApplication::translate("Gasolinera", "Lps/litro", 0));
        label_7->setText(QApplication::translate("Gasolinera", "Km", 0));
        label_8->setText(QApplication::translate("Gasolinera", "Litros", 0));
        pushButton->setText(QApplication::translate("Gasolinera", "Continuar", 0));
    } // retranslateUi

};

namespace Ui {
    class Gasolinera: public Ui_Gasolinera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GASOLINERA_H
