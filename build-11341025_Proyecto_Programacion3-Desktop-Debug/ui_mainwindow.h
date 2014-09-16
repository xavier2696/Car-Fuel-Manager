/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *widget;
    QPushButton *b_eliminar;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QPushButton *b_gasolinera;
    QPushButton *b_refrescar;
    QLabel *label_4;
    QPushButton *b_reporte;
    QPushButton *b_eliminarF;
    QPushButton *b_reportegeneral;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *b_agregarcarro;
    QPushButton *b_cargar;
    QPushButton *b_guardar;
    QTreeWidget *tree;
    QMenuBar *menuBar;
    QMenu *menuInventario_de_Carros;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(799, 421);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QFrame(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setEnabled(true);
        widget->setGeometry(QRect(380, 40, 411, 311));
        widget->setAutoFillBackground(false);
        widget->setFrameShape(QFrame::WinPanel);
        widget->setFrameShadow(QFrame::Plain);
        widget->setLineWidth(5);
        b_eliminar = new QPushButton(widget);
        b_eliminar->setObjectName(QStringLiteral("b_eliminar"));
        b_eliminar->setEnabled(false);
        b_eliminar->setGeometry(QRect(10, 40, 101, 111));
        QIcon icon;
        icon.addFile(QStringLiteral("abort-146072_640.png"), QSize(), QIcon::Selected, QIcon::Off);
        icon.addFile(QStringLiteral("abort-146072_640.png"), QSize(), QIcon::Selected, QIcon::On);
        b_eliminar->setIcon(icon);
        b_eliminar->setIconSize(QSize(100, 100));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 20, 101, 20));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 10, 111, 31));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 160, 131, 31));
        b_gasolinera = new QPushButton(widget);
        b_gasolinera->setObjectName(QStringLiteral("b_gasolinera"));
        b_gasolinera->setEnabled(false);
        b_gasolinera->setGeometry(QRect(160, 40, 99, 111));
        QIcon icon1;
        icon1.addFile(QStringLiteral("4045478-icono-de-la-bomba-de-gas-en-circulo-linea.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        b_gasolinera->setIcon(icon1);
        b_gasolinera->setIconSize(QSize(100, 100));
        b_refrescar = new QPushButton(widget);
        b_refrescar->setObjectName(QStringLiteral("b_refrescar"));
        b_refrescar->setEnabled(true);
        b_refrescar->setGeometry(QRect(160, 190, 99, 111));
        QIcon icon2;
        icon2.addFile(QStringLiteral("icon-ios7-refresh-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_refrescar->setIcon(icon2);
        b_refrescar->setIconSize(QSize(100, 100));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 170, 81, 17));
        b_reporte = new QPushButton(widget);
        b_reporte->setObjectName(QStringLiteral("b_reporte"));
        b_reporte->setEnabled(false);
        b_reporte->setGeometry(QRect(10, 190, 101, 111));
        b_reporte->setIcon(icon);
        b_reporte->setIconSize(QSize(100, 100));
        b_eliminarF = new QPushButton(widget);
        b_eliminarF->setObjectName(QStringLiteral("b_eliminarF"));
        b_eliminarF->setEnabled(false);
        b_eliminarF->setGeometry(QRect(300, 40, 99, 111));
        b_eliminarF->setIcon(icon1);
        b_eliminarF->setIconSize(QSize(100, 100));
        b_reportegeneral = new QPushButton(widget);
        b_reportegeneral->setObjectName(QStringLiteral("b_reportegeneral"));
        b_reportegeneral->setEnabled(true);
        b_reportegeneral->setGeometry(QRect(300, 190, 101, 111));
        b_reportegeneral->setIcon(icon1);
        b_reportegeneral->setIconSize(QSize(100, 100));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(290, 9, 121, 31));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(286, 170, 121, 20));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(-1, 0, 801, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        b_agregarcarro = new QPushButton(horizontalLayoutWidget);
        b_agregarcarro->setObjectName(QStringLiteral("b_agregarcarro"));
        b_agregarcarro->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        b_agregarcarro->setPalette(palette);
        b_agregarcarro->setCheckable(false);
        b_agregarcarro->setChecked(false);
        b_agregarcarro->setAutoDefault(false);
        b_agregarcarro->setDefault(true);
        b_agregarcarro->setFlat(false);

        horizontalLayout->addWidget(b_agregarcarro);

        b_cargar = new QPushButton(horizontalLayoutWidget);
        b_cargar->setObjectName(QStringLiteral("b_cargar"));
        b_cargar->setDefault(true);

        horizontalLayout->addWidget(b_cargar);

        b_guardar = new QPushButton(horizontalLayoutWidget);
        b_guardar->setObjectName(QStringLiteral("b_guardar"));
        b_guardar->setDefault(true);

        horizontalLayout->addWidget(b_guardar);

        tree = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(2, QStringLiteral("Facturas"));
        __qtreewidgetitem->setText(1, QStringLiteral("Marca"));
        __qtreewidgetitem->setText(0, QStringLiteral("Placa"));
        tree->setHeaderItem(__qtreewidgetitem);
        tree->setObjectName(QStringLiteral("tree"));
        tree->setGeometry(QRect(10, 40, 361, 311));
        tree->setAnimated(true);
        tree->setColumnCount(3);
        tree->header()->setVisible(false);
        tree->header()->setCascadingSectionResizes(false);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 799, 25));
        menuInventario_de_Carros = new QMenu(menuBar);
        menuInventario_de_Carros->setObjectName(QStringLiteral("menuInventario_de_Carros"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuInventario_de_Carros->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "X Car Fuel Manager", 0));
        b_eliminar->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Eliminar Carro", 0));
        label_2->setText(QApplication::translate("MainWindow", "Agregar Factura", 0));
        label->setText(QApplication::translate("MainWindow", "Reporte Especifico", 0));
        b_gasolinera->setText(QString());
        b_refrescar->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", " Refrescar ", 0));
        b_reporte->setText(QString());
        b_eliminarF->setText(QString());
        b_reportegeneral->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Eliminar Facturas", 0));
        label_6->setText(QApplication::translate("MainWindow", "Reporte General", 0));
        b_agregarcarro->setText(QApplication::translate("MainWindow", "Agregar Carro", 0));
        b_cargar->setText(QApplication::translate("MainWindow", "Cargar de Archivo", 0));
        b_guardar->setText(QApplication::translate("MainWindow", "Guardar a Archivo", 0));
        menuInventario_de_Carros->setTitle(QApplication::translate("MainWindow", "X Car Fuel Manager", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
