/****************************************************************************
** Meta object code from reading C++ file 'homenewwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../homenewwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'homenewwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HomeNewWindow_t {
    QByteArrayData data[7];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HomeNewWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HomeNewWindow_t qt_meta_stringdata_HomeNewWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "HomeNewWindow"
QT_MOC_LITERAL(1, 14, 19), // "on_gotocart_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 31), // "on_electronicpushbutton_clicked"
QT_MOC_LITERAL(4, 67, 26), // "on_bookspushbutton_clicked"
QT_MOC_LITERAL(5, 94, 28), // "on_clothesPushButton_clicked"
QT_MOC_LITERAL(6, 123, 31) // "on_getDetailsPushButton_clicked"

    },
    "HomeNewWindow\0on_gotocart_clicked\0\0"
    "on_electronicpushbutton_clicked\0"
    "on_bookspushbutton_clicked\0"
    "on_clothesPushButton_clicked\0"
    "on_getDetailsPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HomeNewWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HomeNewWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HomeNewWindow *_t = static_cast<HomeNewWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_gotocart_clicked(); break;
        case 1: _t->on_electronicpushbutton_clicked(); break;
        case 2: _t->on_bookspushbutton_clicked(); break;
        case 3: _t->on_clothesPushButton_clicked(); break;
        case 4: _t->on_getDetailsPushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject HomeNewWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_HomeNewWindow.data,
      qt_meta_data_HomeNewWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HomeNewWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HomeNewWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HomeNewWindow.stringdata0))
        return static_cast<void*>(const_cast< HomeNewWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int HomeNewWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
