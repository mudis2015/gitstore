/****************************************************************************
** Meta object code from reading C++ file 'aesserver_list.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../aesserver_list.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aesserver_list.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AESServer_List[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   53,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AESServer_List[] = {
    "AESServer_List\0\0showtext\0"
    "ShowClickTableText(QString)\0item\0"
    "ListitemClicked(QTableWidgetItem*)\0"
};

void AESServer_List::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AESServer_List *_t = static_cast<AESServer_List *>(_o);
        switch (_id) {
        case 0: _t->ShowClickTableText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->ListitemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AESServer_List::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AESServer_List::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_AESServer_List,
      qt_meta_data_AESServer_List, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AESServer_List::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AESServer_List::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AESServer_List::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AESServer_List))
        return static_cast<void*>(const_cast< AESServer_List*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int AESServer_List::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AESServer_List::ShowClickTableText(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE