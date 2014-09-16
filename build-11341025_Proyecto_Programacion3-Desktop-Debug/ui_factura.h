/********************************************************************************
** Form generated from reading UI file 'factura.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTURA_H
#define UI_FACTURA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Factura
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *Factura)
    {
        if (Factura->objectName().isEmpty())
            Factura->setObjectName(QStringLiteral("Factura"));
        Factura->resize(400, 300);
        pushButton = new QPushButton(Factura);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 160, 99, 27));
        label = new QLabel(Factura);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 70, 67, 17));

        retranslateUi(Factura);

        QMetaObject::connectSlotsByName(Factura);
    } // setupUi

    void retranslateUi(QWidget *Factura)
    {
        Factura->setWindowTitle(QApplication::translate("Factura", "Form", 0));
        pushButton->setText(QApplication::translate("Factura", "PushButton", 0));
        label->setText(QApplication::translate("Factura", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Factura: public Ui_Factura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTURA_H
