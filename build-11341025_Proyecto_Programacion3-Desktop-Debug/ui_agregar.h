/********************************************************************************
** Form generated from reading UI file 'agregar.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGAR_H
#define UI_AGREGAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Agregar
{
public:
    QLineEdit *tf_marca;
    QPushButton *pushButton;
    QLineEdit *tf_placa;
    QSpinBox *sp_cilindraje;
    QDoubleSpinBox *sp_capacidad;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QDateEdit *c_fechacarro;

    void setupUi(QFrame *Agregar)
    {
        if (Agregar->objectName().isEmpty())
            Agregar->setObjectName(QStringLiteral("Agregar"));
        Agregar->setWindowModality(Qt::ApplicationModal);
        Agregar->resize(434, 390);
        Agregar->setFrameShape(QFrame::StyledPanel);
        Agregar->setFrameShadow(QFrame::Raised);
        tf_marca = new QLineEdit(Agregar);
        tf_marca->setObjectName(QStringLiteral("tf_marca"));
        tf_marca->setGeometry(QRect(250, 50, 113, 27));
        pushButton = new QPushButton(Agregar);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 350, 99, 27));
        tf_placa = new QLineEdit(Agregar);
        tf_placa->setObjectName(QStringLiteral("tf_placa"));
        tf_placa->setGeometry(QRect(250, 100, 113, 27));
        sp_cilindraje = new QSpinBox(Agregar);
        sp_cilindraje->setObjectName(QStringLiteral("sp_cilindraje"));
        sp_cilindraje->setGeometry(QRect(310, 150, 48, 27));
        sp_capacidad = new QDoubleSpinBox(Agregar);
        sp_capacidad->setObjectName(QStringLiteral("sp_capacidad"));
        sp_capacidad->setGeometry(QRect(290, 200, 69, 27));
        label = new QLabel(Agregar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 10, 101, 17));
        label_2 = new QLabel(Agregar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 50, 67, 17));
        label_3 = new QLabel(Agregar);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 100, 67, 17));
        label_4 = new QLabel(Agregar);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 160, 67, 17));
        label_5 = new QLabel(Agregar);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 210, 171, 17));
        label_6 = new QLabel(Agregar);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 280, 67, 17));
        c_fechacarro = new QDateEdit(Agregar);
        c_fechacarro->setObjectName(QStringLiteral("c_fechacarro"));
        c_fechacarro->setGeometry(QRect(250, 270, 110, 27));
        c_fechacarro->setCalendarPopup(true);

        retranslateUi(Agregar);

        QMetaObject::connectSlotsByName(Agregar);
    } // setupUi

    void retranslateUi(QFrame *Agregar)
    {
        Agregar->setWindowTitle(QApplication::translate("Agregar", "Agregar Carro", 0));
        pushButton->setText(QApplication::translate("Agregar", "Guardar", 0));
        label->setText(QApplication::translate("Agregar", "Agregar Carro", 0));
        label_2->setText(QApplication::translate("Agregar", "Marca", 0));
        label_3->setText(QApplication::translate("Agregar", "Placa", 0));
        label_4->setText(QApplication::translate("Agregar", "Cilindraje", 0));
        label_5->setText(QApplication::translate("Agregar", "Capacidad Tanque(Litros)", 0));
        label_6->setText(QApplication::translate("Agregar", "Fecha", 0));
    } // retranslateUi

};

namespace Ui {
    class Agregar: public Ui_Agregar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_H
