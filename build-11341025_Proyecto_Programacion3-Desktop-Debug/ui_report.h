/********************************************************************************
** Form generated from reading UI file 'report.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_H
#define UI_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Report
{
public:
    QLabel *label;
    QLabel *l_placa;
    QLabel *l_marca;
    QLabel *l_cilindraje;
    QLabel *l_capacidad;
    QLabel *l_totalkm;
    QLabel *l_totallitros;
    QLabel *l_kmlitro;
    QLabel *l_kmgalon;
    QLabel *l_litroskm;
    QLabel *l_litrosdia;
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
    QPushButton *pushButton;
    QLabel *label_12;
    QLabel *l_gasto;
    QLabel *l_gastodia;
    QLabel *label_13;
    QLabel *l_gastokm;
    QLabel *label_14;

    void setupUi(QWidget *Report)
    {
        if (Report->objectName().isEmpty())
            Report->setObjectName(QStringLiteral("Report"));
        Report->setWindowModality(Qt::ApplicationModal);
        Report->resize(400, 519);
        label = new QLabel(Report);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 20, 67, 17));
        l_placa = new QLabel(Report);
        l_placa->setObjectName(QStringLiteral("l_placa"));
        l_placa->setGeometry(QRect(220, 70, 101, 20));
        l_placa->setFrameShape(QFrame::WinPanel);
        l_placa->setFrameShadow(QFrame::Raised);
        l_placa->setLineWidth(4);
        l_marca = new QLabel(Report);
        l_marca->setObjectName(QStringLiteral("l_marca"));
        l_marca->setGeometry(QRect(220, 100, 101, 20));
        l_marca->setFrameShape(QFrame::WinPanel);
        l_marca->setFrameShadow(QFrame::Raised);
        l_marca->setLineWidth(4);
        l_cilindraje = new QLabel(Report);
        l_cilindraje->setObjectName(QStringLiteral("l_cilindraje"));
        l_cilindraje->setGeometry(QRect(220, 130, 101, 20));
        l_cilindraje->setFrameShape(QFrame::WinPanel);
        l_cilindraje->setFrameShadow(QFrame::Raised);
        l_cilindraje->setLineWidth(4);
        l_capacidad = new QLabel(Report);
        l_capacidad->setObjectName(QStringLiteral("l_capacidad"));
        l_capacidad->setGeometry(QRect(220, 160, 101, 20));
        l_capacidad->setFrameShape(QFrame::WinPanel);
        l_capacidad->setFrameShadow(QFrame::Raised);
        l_capacidad->setLineWidth(4);
        l_totalkm = new QLabel(Report);
        l_totalkm->setObjectName(QStringLiteral("l_totalkm"));
        l_totalkm->setGeometry(QRect(220, 190, 101, 20));
        l_totalkm->setFrameShape(QFrame::WinPanel);
        l_totalkm->setFrameShadow(QFrame::Raised);
        l_totalkm->setLineWidth(4);
        l_totallitros = new QLabel(Report);
        l_totallitros->setObjectName(QStringLiteral("l_totallitros"));
        l_totallitros->setGeometry(QRect(220, 220, 101, 20));
        l_totallitros->setFrameShape(QFrame::WinPanel);
        l_totallitros->setFrameShadow(QFrame::Raised);
        l_totallitros->setLineWidth(4);
        l_kmlitro = new QLabel(Report);
        l_kmlitro->setObjectName(QStringLiteral("l_kmlitro"));
        l_kmlitro->setGeometry(QRect(220, 250, 101, 20));
        l_kmlitro->setFrameShape(QFrame::WinPanel);
        l_kmlitro->setFrameShadow(QFrame::Raised);
        l_kmlitro->setLineWidth(4);
        l_kmgalon = new QLabel(Report);
        l_kmgalon->setObjectName(QStringLiteral("l_kmgalon"));
        l_kmgalon->setGeometry(QRect(220, 280, 101, 20));
        l_kmgalon->setFrameShape(QFrame::WinPanel);
        l_kmgalon->setFrameShadow(QFrame::Raised);
        l_kmgalon->setLineWidth(4);
        l_litroskm = new QLabel(Report);
        l_litroskm->setObjectName(QStringLiteral("l_litroskm"));
        l_litroskm->setGeometry(QRect(220, 310, 101, 17));
        l_litroskm->setFrameShape(QFrame::WinPanel);
        l_litroskm->setFrameShadow(QFrame::Raised);
        l_litroskm->setLineWidth(4);
        l_litrosdia = new QLabel(Report);
        l_litrosdia->setObjectName(QStringLiteral("l_litrosdia"));
        l_litrosdia->setGeometry(QRect(220, 340, 101, 17));
        l_litrosdia->setFrameShape(QFrame::WinPanel);
        l_litrosdia->setFrameShadow(QFrame::Raised);
        l_litrosdia->setLineWidth(4);
        label_2 = new QLabel(Report);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 70, 67, 17));
        label_3 = new QLabel(Report);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 100, 67, 17));
        label_4 = new QLabel(Report);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 130, 67, 17));
        label_5 = new QLabel(Report);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 160, 81, 17));
        label_6 = new QLabel(Report);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 190, 67, 17));
        label_7 = new QLabel(Report);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 220, 81, 17));
        label_8 = new QLabel(Report);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 250, 67, 17));
        label_9 = new QLabel(Report);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(70, 280, 71, 17));
        label_10 = new QLabel(Report);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(70, 310, 67, 17));
        label_11 = new QLabel(Report);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(70, 340, 67, 17));
        pushButton = new QPushButton(Report);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 470, 99, 27));
        label_12 = new QLabel(Report);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(70, 370, 81, 17));
        l_gasto = new QLabel(Report);
        l_gasto->setObjectName(QStringLiteral("l_gasto"));
        l_gasto->setGeometry(QRect(220, 370, 101, 17));
        l_gasto->setFrameShape(QFrame::WinPanel);
        l_gasto->setFrameShadow(QFrame::Raised);
        l_gasto->setLineWidth(4);
        l_gastodia = new QLabel(Report);
        l_gastodia->setObjectName(QStringLiteral("l_gastodia"));
        l_gastodia->setGeometry(QRect(220, 400, 101, 17));
        l_gastodia->setFrameShape(QFrame::WinPanel);
        l_gastodia->setFrameShadow(QFrame::Raised);
        l_gastodia->setLineWidth(4);
        label_13 = new QLabel(Report);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(70, 400, 91, 17));
        l_gastokm = new QLabel(Report);
        l_gastokm->setObjectName(QStringLiteral("l_gastokm"));
        l_gastokm->setGeometry(QRect(220, 430, 101, 17));
        l_gastokm->setFrameShape(QFrame::WinPanel);
        l_gastokm->setFrameShadow(QFrame::Raised);
        l_gastokm->setLineWidth(4);
        label_14 = new QLabel(Report);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(70, 430, 91, 17));

        retranslateUi(Report);

        QMetaObject::connectSlotsByName(Report);
    } // setupUi

    void retranslateUi(QWidget *Report)
    {
        Report->setWindowTitle(QApplication::translate("Report", "Reporte", 0));
        label->setText(QApplication::translate("Report", "Reporte", 0));
        l_placa->setText(QApplication::translate("Report", "A", 0));
        l_marca->setText(QApplication::translate("Report", "A", 0));
        l_cilindraje->setText(QApplication::translate("Report", "A", 0));
        l_capacidad->setText(QApplication::translate("Report", "A", 0));
        l_totalkm->setText(QApplication::translate("Report", "A", 0));
        l_totallitros->setText(QApplication::translate("Report", "A", 0));
        l_kmlitro->setText(QApplication::translate("Report", "A", 0));
        l_kmgalon->setText(QApplication::translate("Report", "A", 0));
        l_litroskm->setText(QApplication::translate("Report", "A", 0));
        l_litrosdia->setText(QApplication::translate("Report", "A", 0));
        label_2->setText(QApplication::translate("Report", "Placa", 0));
        label_3->setText(QApplication::translate("Report", "Marca", 0));
        label_4->setText(QApplication::translate("Report", "Cilindraje", 0));
        label_5->setText(QApplication::translate("Report", "Capacidad", 0));
        label_6->setText(QApplication::translate("Report", "Total Km", 0));
        label_7->setText(QApplication::translate("Report", "Total Litros", 0));
        label_8->setText(QApplication::translate("Report", "Km/Litro", 0));
        label_9->setText(QApplication::translate("Report", "Km/Galon", 0));
        label_10->setText(QApplication::translate("Report", "Litros/Km", 0));
        label_11->setText(QApplication::translate("Report", "Litros/Dia", 0));
        pushButton->setText(QApplication::translate("Report", "Aceptar", 0));
        label_12->setText(QApplication::translate("Report", "Gasto Total", 0));
        l_gasto->setText(QApplication::translate("Report", "A", 0));
        l_gastodia->setText(QApplication::translate("Report", "A", 0));
        label_13->setText(QApplication::translate("Report", "Gasto por dia", 0));
        l_gastokm->setText(QApplication::translate("Report", "A", 0));
        label_14->setText(QApplication::translate("Report", "Gasto por km", 0));
    } // retranslateUi

};

namespace Ui {
    class Report: public Ui_Report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
