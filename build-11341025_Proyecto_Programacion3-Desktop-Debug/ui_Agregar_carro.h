/********************************************************************************
** Form generated from reading UI file 'Agregar_carro.ui'
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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_a_carro
{
public:

    void setupUi(QWidget *a_carro)
    {
        if (a_carro->objectName().isEmpty())
            a_carro->setObjectName(QStringLiteral("a_carro"));
        a_carro->resize(400, 300);

        retranslateUi(a_carro);

        QMetaObject::connectSlotsByName(a_carro);
    } // setupUi

    void retranslateUi(QWidget *a_carro)
    {
        a_carro->setWindowTitle(QApplication::translate("a_carro", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class a_carro: public Ui_a_carro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_CARRO_H
