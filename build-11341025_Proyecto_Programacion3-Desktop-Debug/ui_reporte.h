/********************************************************************************
** Form generated from reading UI file 'reporte.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTE_H
#define UI_REPORTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reporte
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *tplaca;
    QLineEdit *tmarca;
    QLineEdit *tcilindraje;
    QLineEdit *tcapacidad;
    QLineEdit *ttotalkm;
    QLineEdit *ttotallitros;
    QLineEdit *tkmlitro;
    QLineEdit *tkmgalon;
    QLineEdit *tlitroskm;
    QLineEdit *tlitrosdia;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;

    void setupUi(QWidget *Reporte)
    {
        if (Reporte->objectName().isEmpty())
            Reporte->setObjectName(QStringLiteral("Reporte"));
        Reporte->setWindowModality(Qt::WindowModal);
        Reporte->resize(536, 579);
        label = new QLabel(Reporte);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 10, 67, 17));
        pushButton = new QPushButton(Reporte);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 450, 99, 27));
        tplaca = new QLineEdit(Reporte);
        tplaca->setObjectName(QStringLiteral("tplaca"));
        tplaca->setGeometry(QRect(360, 60, 158, 27));
        tplaca->setReadOnly(false);
        tmarca = new QLineEdit(Reporte);
        tmarca->setObjectName(QStringLiteral("tmarca"));
        tmarca->setGeometry(QRect(380, 100, 158, 27));
        tmarca->setReadOnly(false);
        tcilindraje = new QLineEdit(Reporte);
        tcilindraje->setObjectName(QStringLiteral("tcilindraje"));
        tcilindraje->setGeometry(QRect(360, 140, 158, 27));
        tcilindraje->setReadOnly(false);
        tcapacidad = new QLineEdit(Reporte);
        tcapacidad->setObjectName(QStringLiteral("tcapacidad"));
        tcapacidad->setGeometry(QRect(360, 190, 158, 27));
        tcapacidad->setReadOnly(false);
        ttotalkm = new QLineEdit(Reporte);
        ttotalkm->setObjectName(QStringLiteral("ttotalkm"));
        ttotalkm->setGeometry(QRect(360, 220, 158, 27));
        ttotalkm->setReadOnly(false);
        ttotallitros = new QLineEdit(Reporte);
        ttotallitros->setObjectName(QStringLiteral("ttotallitros"));
        ttotallitros->setGeometry(QRect(360, 250, 158, 27));
        ttotallitros->setReadOnly(false);
        tkmlitro = new QLineEdit(Reporte);
        tkmlitro->setObjectName(QStringLiteral("tkmlitro"));
        tkmlitro->setGeometry(QRect(370, 280, 158, 27));
        tkmlitro->setReadOnly(false);
        tkmgalon = new QLineEdit(Reporte);
        tkmgalon->setObjectName(QStringLiteral("tkmgalon"));
        tkmgalon->setGeometry(QRect(370, 310, 158, 27));
        tkmgalon->setReadOnly(false);
        tlitroskm = new QLineEdit(Reporte);
        tlitroskm->setObjectName(QStringLiteral("tlitroskm"));
        tlitroskm->setGeometry(QRect(360, 340, 158, 27));
        tlitroskm->setReadOnly(false);
        tlitrosdia = new QLineEdit(Reporte);
        tlitrosdia->setObjectName(QStringLiteral("tlitrosdia"));
        tlitrosdia->setGeometry(QRect(350, 380, 158, 27));
        tlitrosdia->setReadOnly(false);
        label_2 = new QLabel(Reporte);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 60, 137, 29));
        label_3 = new QLabel(Reporte);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 90, 137, 32));
        label_4 = new QLabel(Reporte);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 130, 137, 37));
        label_5 = new QLabel(Reporte);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 160, 137, 43));
        label_6 = new QLabel(Reporte);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(180, 190, 137, 52));
        label_7 = new QLabel(Reporte);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(180, 230, 137, 63));
        label_8 = new QLabel(Reporte);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(200, 270, 137, 80));
        label_9 = new QLabel(Reporte);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(190, 310, 137, 109));
        label_10 = new QLabel(Reporte);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(180, 320, 137, 167));
        label_11 = new QLabel(Reporte);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(190, 270, 137, 339));

        retranslateUi(Reporte);

        QMetaObject::connectSlotsByName(Reporte);
    } // setupUi

    void retranslateUi(QWidget *Reporte)
    {
        Reporte->setWindowTitle(QApplication::translate("Reporte", "Form", 0));
        label->setText(QApplication::translate("Reporte", "Reporte", 0));
        pushButton->setText(QApplication::translate("Reporte", "Aceptar", 0));
        label_2->setText(QApplication::translate("Reporte", "Placa", 0));
        label_3->setText(QApplication::translate("Reporte", "Marca", 0));
        label_4->setText(QApplication::translate("Reporte", "Cilindraje", 0));
        label_5->setText(QApplication::translate("Reporte", "Capacidad(Litros)", 0));
        label_6->setText(QApplication::translate("Reporte", "Total Km Recorridos", 0));
        label_7->setText(QApplication::translate("Reporte", "Total Litros", 0));
        label_8->setText(QApplication::translate("Reporte", "Km/Litro", 0));
        label_9->setText(QApplication::translate("Reporte", "Km/Galon", 0));
        label_10->setText(QApplication::translate("Reporte", "Litros/Km", 0));
        label_11->setText(QApplication::translate("Reporte", "Litros/Dia", 0));
    } // retranslateUi

};

namespace Ui {
    class Reporte: public Ui_Reporte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTE_H
