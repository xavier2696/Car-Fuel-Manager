/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../11341025_Proyecto_Programacion3/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 25),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 28),
QT_MOC_LITERAL(4, 67, 22),
QT_MOC_LITERAL(5, 90, 19),
QT_MOC_LITERAL(6, 110, 16),
QT_MOC_LITERAL(7, 127, 4),
QT_MOC_LITERAL(8, 132, 6),
QT_MOC_LITERAL(9, 139, 23),
QT_MOC_LITERAL(10, 163, 21),
QT_MOC_LITERAL(11, 185, 20),
QT_MOC_LITERAL(12, 206, 20),
QT_MOC_LITERAL(13, 227, 19),
QT_MOC_LITERAL(14, 247, 22),
QT_MOC_LITERAL(15, 270, 27)
    },
    "MainWindow\0on_b_agregarcarro_clicked\0"
    "\0on_tree_itemSelectionChanged\0"
    "on_b_refrescar_clicked\0on_tree_itemClicked\0"
    "QTreeWidgetItem*\0item\0column\0"
    "on_b_gasolinera_clicked\0on_b_eliminar_clicked\0"
    "on_b_reporte_clicked\0on_b_guardar_clicked\0"
    "on_b_cargar_clicked\0on_b_eliminarF_clicked\0"
    "on_b_reportegeneral_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08,
       3,    0,   70,    2, 0x08,
       4,    0,   71,    2, 0x08,
       5,    2,   72,    2, 0x08,
       9,    0,   77,    2, 0x08,
      10,    0,   78,    2, 0x08,
      11,    0,   79,    2, 0x08,
      12,    0,   80,    2, 0x08,
      13,    0,   81,    2, 0x08,
      14,    0,   82,    2, 0x08,
      15,    0,   83,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_b_agregarcarro_clicked(); break;
        case 1: _t->on_tree_itemSelectionChanged(); break;
        case 2: _t->on_b_refrescar_clicked(); break;
        case 3: _t->on_tree_itemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_b_gasolinera_clicked(); break;
        case 5: _t->on_b_eliminar_clicked(); break;
        case 6: _t->on_b_reporte_clicked(); break;
        case 7: _t->on_b_guardar_clicked(); break;
        case 8: _t->on_b_cargar_clicked(); break;
        case 9: _t->on_b_eliminarF_clicked(); break;
        case 10: _t->on_b_reportegeneral_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
