/****************************************************************************
** Meta object code from reading C++ file 'aesserverwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../aesserverwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aesserverwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AESServerWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      30,   16,   16,   16, 0x0a,
      41,   16,   16,   16, 0x0a,
      50,   16,   16,   16, 0x0a,
      89,   62,   16,   16, 0x0a,
     145,  136,   16,   16, 0x0a,
     173,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AESServerWindow[] = {
    "AESServerWindow\0\0UpdateData()\0MenuExit()\0"
    "Detect()\0CopyRight()\0changelist,row,column,text\0"
    "SetItemText(AESServerListName,int,int,QString)\0"
    "showtext\0ShowClickTableText(QString)\0"
    "RunTimeUpdateData()\0"
};

void AESServerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AESServerWindow *_t = static_cast<AESServerWindow *>(_o);
        switch (_id) {
        case 0: _t->UpdateData(); break;
        case 1: _t->MenuExit(); break;
        case 2: _t->Detect(); break;
        case 3: _t->CopyRight(); break;
        case 4: _t->SetItemText((*reinterpret_cast< AESServerListName(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 5: _t->ShowClickTableText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->RunTimeUpdateData(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AESServerWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AESServerWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AESServerWindow,
      qt_meta_data_AESServerWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AESServerWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AESServerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AESServerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AESServerWindow))
        return static_cast<void*>(const_cast< AESServerWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AESServerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
