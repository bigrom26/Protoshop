/****************************************************************************
** Meta object code from reading C++ file 'imageviewer.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/ui/imageviewer.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageviewer.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageViewer_t {
    QByteArrayData data[86];
    char stringdata0[1144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageViewer_t qt_meta_stringdata_ImageViewer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ImageViewer"
QT_MOC_LITERAL(1, 12, 4), // "open"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 6), // "saveAs"
QT_MOC_LITERAL(4, 25, 5), // "print"
QT_MOC_LITERAL(5, 31, 8), // "imageAdd"
QT_MOC_LITERAL(6, 40, 13), // "imageMultiply"
QT_MOC_LITERAL(7, 54, 8), // "imageAnd"
QT_MOC_LITERAL(8, 63, 7), // "imageOr"
QT_MOC_LITERAL(9, 71, 14), // "loadSecondFile"
QT_MOC_LITERAL(10, 86, 9), // "operation"
QT_MOC_LITERAL(11, 96, 12), // "imageOperate"
QT_MOC_LITERAL(12, 109, 9), // "scalarAdd"
QT_MOC_LITERAL(13, 119, 15), // "scalarSubstract"
QT_MOC_LITERAL(14, 135, 14), // "scalarMultiply"
QT_MOC_LITERAL(15, 150, 12), // "scalarDivide"
QT_MOC_LITERAL(16, 163, 9), // "scalarNot"
QT_MOC_LITERAL(17, 173, 13), // "scalarOperate"
QT_MOC_LITERAL(18, 187, 5), // "char*"
QT_MOC_LITERAL(19, 193, 4), // "hint"
QT_MOC_LITERAL(20, 198, 12), // "scalarDialog"
QT_MOC_LITERAL(21, 211, 16), // "fourierTransform"
QT_MOC_LITERAL(22, 228, 23), // "inverseFourierTransform"
QT_MOC_LITERAL(23, 252, 8), // "brighten"
QT_MOC_LITERAL(24, 261, 10), // "unbrighten"
QT_MOC_LITERAL(25, 272, 10), // "rotate90CW"
QT_MOC_LITERAL(26, 283, 11), // "rotate90CCW"
QT_MOC_LITERAL(27, 295, 9), // "translate"
QT_MOC_LITERAL(28, 305, 14), // "flipHorizontal"
QT_MOC_LITERAL(29, 320, 12), // "flipVertical"
QT_MOC_LITERAL(30, 333, 7), // "zoom2In"
QT_MOC_LITERAL(31, 341, 8), // "zoom2Out"
QT_MOC_LITERAL(32, 350, 8), // "equalize"
QT_MOC_LITERAL(33, 359, 13), // "brightenScale"
QT_MOC_LITERAL(34, 373, 15), // "contrastStretch"
QT_MOC_LITERAL(35, 389, 3), // "log"
QT_MOC_LITERAL(36, 393, 10), // "inverseLog"
QT_MOC_LITERAL(37, 404, 5), // "power"
QT_MOC_LITERAL(38, 410, 11), // "graySlicing"
QT_MOC_LITERAL(39, 422, 10), // "bitSlicing"
QT_MOC_LITERAL(40, 433, 16), // "showHistogramRed"
QT_MOC_LITERAL(41, 450, 18), // "showHistogramGreen"
QT_MOC_LITERAL(42, 469, 17), // "showHistogramBlue"
QT_MOC_LITERAL(43, 487, 26), // "showNormalizedHistogramRed"
QT_MOC_LITERAL(44, 514, 28), // "showNormalizedHistogramGreen"
QT_MOC_LITERAL(45, 543, 27), // "showNormalizedHistogramBlue"
QT_MOC_LITERAL(46, 571, 13), // "showHistogram"
QT_MOC_LITERAL(47, 585, 15), // "Qt::GlobalColor"
QT_MOC_LITERAL(48, 601, 9), // "colorCode"
QT_MOC_LITERAL(49, 611, 12), // "isNormalized"
QT_MOC_LITERAL(50, 624, 11), // "showMessage"
QT_MOC_LITERAL(51, 636, 4), // "copy"
QT_MOC_LITERAL(52, 641, 5), // "paste"
QT_MOC_LITERAL(53, 647, 6), // "zoomIn"
QT_MOC_LITERAL(54, 654, 7), // "zoomOut"
QT_MOC_LITERAL(55, 662, 10), // "normalSize"
QT_MOC_LITERAL(56, 673, 11), // "fitToWindow"
QT_MOC_LITERAL(57, 685, 13), // "filterGeneral"
QT_MOC_LITERAL(58, 699, 10), // "KernelType"
QT_MOC_LITERAL(59, 710, 10), // "kernelType"
QT_MOC_LITERAL(60, 721, 13), // "filterAverage"
QT_MOC_LITERAL(61, 735, 14), // "filterGaussian"
QT_MOC_LITERAL(62, 750, 12), // "filterMedian"
QT_MOC_LITERAL(63, 763, 9), // "filterMax"
QT_MOC_LITERAL(64, 773, 9), // "filterMin"
QT_MOC_LITERAL(65, 783, 11), // "filterHighA"
QT_MOC_LITERAL(66, 795, 11), // "filterHighB"
QT_MOC_LITERAL(67, 807, 11), // "filterHighC"
QT_MOC_LITERAL(68, 819, 11), // "filterHighD"
QT_MOC_LITERAL(69, 831, 11), // "filterHighE"
QT_MOC_LITERAL(70, 843, 11), // "filterHighF"
QT_MOC_LITERAL(71, 855, 13), // "filterUnsharp"
QT_MOC_LITERAL(72, 869, 15), // "filterHighboost"
QT_MOC_LITERAL(73, 885, 22), // "edgeDetectionGradientX"
QT_MOC_LITERAL(74, 908, 22), // "edgeDetectionGradientY"
QT_MOC_LITERAL(75, 931, 21), // "edgeDetection2ndDeriv"
QT_MOC_LITERAL(76, 953, 20), // "edgeDetectionLaplace"
QT_MOC_LITERAL(77, 974, 16), // "edgeDetectionLoG"
QT_MOC_LITERAL(78, 991, 19), // "edgeDetectionSobelX"
QT_MOC_LITERAL(79, 1011, 19), // "edgeDetectionSobelY"
QT_MOC_LITERAL(80, 1031, 21), // "edgeDetectionPrewittX"
QT_MOC_LITERAL(81, 1053, 21), // "edgeDetectionPrewittY"
QT_MOC_LITERAL(82, 1075, 21), // "edgeDetectionRoberts1"
QT_MOC_LITERAL(83, 1097, 21), // "edgeDetectionRoberts2"
QT_MOC_LITERAL(84, 1119, 18), // "edgeDetectionCanny"
QT_MOC_LITERAL(85, 1138, 5) // "about"

    },
    "ImageViewer\0open\0\0saveAs\0print\0imageAdd\0"
    "imageMultiply\0imageAnd\0imageOr\0"
    "loadSecondFile\0operation\0imageOperate\0"
    "scalarAdd\0scalarSubstract\0scalarMultiply\0"
    "scalarDivide\0scalarNot\0scalarOperate\0"
    "char*\0hint\0scalarDialog\0fourierTransform\0"
    "inverseFourierTransform\0brighten\0"
    "unbrighten\0rotate90CW\0rotate90CCW\0"
    "translate\0flipHorizontal\0flipVertical\0"
    "zoom2In\0zoom2Out\0equalize\0brightenScale\0"
    "contrastStretch\0log\0inverseLog\0power\0"
    "graySlicing\0bitSlicing\0showHistogramRed\0"
    "showHistogramGreen\0showHistogramBlue\0"
    "showNormalizedHistogramRed\0"
    "showNormalizedHistogramGreen\0"
    "showNormalizedHistogramBlue\0showHistogram\0"
    "Qt::GlobalColor\0colorCode\0isNormalized\0"
    "showMessage\0copy\0paste\0zoomIn\0zoomOut\0"
    "normalSize\0fitToWindow\0filterGeneral\0"
    "KernelType\0kernelType\0filterAverage\0"
    "filterGaussian\0filterMedian\0filterMax\0"
    "filterMin\0filterHighA\0filterHighB\0"
    "filterHighC\0filterHighD\0filterHighE\0"
    "filterHighF\0filterUnsharp\0filterHighboost\0"
    "edgeDetectionGradientX\0edgeDetectionGradientY\0"
    "edgeDetection2ndDeriv\0edgeDetectionLaplace\0"
    "edgeDetectionLoG\0edgeDetectionSobelX\0"
    "edgeDetectionSobelY\0edgeDetectionPrewittX\0"
    "edgeDetectionPrewittY\0edgeDetectionRoberts1\0"
    "edgeDetectionRoberts2\0edgeDetectionCanny\0"
    "about"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageViewer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      76,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  394,    2, 0x08 /* Private */,
       3,    0,  395,    2, 0x08 /* Private */,
       4,    0,  396,    2, 0x08 /* Private */,
       5,    0,  397,    2, 0x08 /* Private */,
       6,    0,  398,    2, 0x08 /* Private */,
       7,    0,  399,    2, 0x08 /* Private */,
       8,    0,  400,    2, 0x08 /* Private */,
       9,    1,  401,    2, 0x08 /* Private */,
      11,    2,  404,    2, 0x08 /* Private */,
      12,    0,  409,    2, 0x08 /* Private */,
      13,    0,  410,    2, 0x08 /* Private */,
      14,    0,  411,    2, 0x08 /* Private */,
      15,    0,  412,    2, 0x08 /* Private */,
      16,    0,  413,    2, 0x08 /* Private */,
      17,    2,  414,    2, 0x08 /* Private */,
      20,    2,  419,    2, 0x08 /* Private */,
      21,    0,  424,    2, 0x08 /* Private */,
      22,    0,  425,    2, 0x08 /* Private */,
      23,    0,  426,    2, 0x08 /* Private */,
      24,    0,  427,    2, 0x08 /* Private */,
      25,    0,  428,    2, 0x08 /* Private */,
      26,    0,  429,    2, 0x08 /* Private */,
      27,    0,  430,    2, 0x08 /* Private */,
      28,    0,  431,    2, 0x08 /* Private */,
      29,    0,  432,    2, 0x08 /* Private */,
      30,    0,  433,    2, 0x08 /* Private */,
      31,    0,  434,    2, 0x08 /* Private */,
      32,    0,  435,    2, 0x08 /* Private */,
      33,    0,  436,    2, 0x08 /* Private */,
      34,    0,  437,    2, 0x08 /* Private */,
      35,    0,  438,    2, 0x08 /* Private */,
      36,    0,  439,    2, 0x08 /* Private */,
      37,    0,  440,    2, 0x08 /* Private */,
      38,    0,  441,    2, 0x08 /* Private */,
      39,    0,  442,    2, 0x08 /* Private */,
      40,    0,  443,    2, 0x08 /* Private */,
      41,    0,  444,    2, 0x08 /* Private */,
      42,    0,  445,    2, 0x08 /* Private */,
      43,    0,  446,    2, 0x08 /* Private */,
      44,    0,  447,    2, 0x08 /* Private */,
      45,    0,  448,    2, 0x08 /* Private */,
      46,    2,  449,    2, 0x08 /* Private */,
      50,    0,  454,    2, 0x08 /* Private */,
      51,    0,  455,    2, 0x08 /* Private */,
      52,    0,  456,    2, 0x08 /* Private */,
      53,    0,  457,    2, 0x08 /* Private */,
      54,    0,  458,    2, 0x08 /* Private */,
      55,    0,  459,    2, 0x08 /* Private */,
      56,    0,  460,    2, 0x08 /* Private */,
      57,    1,  461,    2, 0x08 /* Private */,
      60,    0,  464,    2, 0x08 /* Private */,
      61,    0,  465,    2, 0x08 /* Private */,
      62,    0,  466,    2, 0x08 /* Private */,
      63,    0,  467,    2, 0x08 /* Private */,
      64,    0,  468,    2, 0x08 /* Private */,
      65,    0,  469,    2, 0x08 /* Private */,
      66,    0,  470,    2, 0x08 /* Private */,
      67,    0,  471,    2, 0x08 /* Private */,
      68,    0,  472,    2, 0x08 /* Private */,
      69,    0,  473,    2, 0x08 /* Private */,
      70,    0,  474,    2, 0x08 /* Private */,
      71,    0,  475,    2, 0x08 /* Private */,
      72,    0,  476,    2, 0x08 /* Private */,
      73,    0,  477,    2, 0x08 /* Private */,
      74,    0,  478,    2, 0x08 /* Private */,
      75,    0,  479,    2, 0x08 /* Private */,
      76,    0,  480,    2, 0x08 /* Private */,
      77,    0,  481,    2, 0x08 /* Private */,
      78,    0,  482,    2, 0x08 /* Private */,
      79,    0,  483,    2, 0x08 /* Private */,
      80,    0,  484,    2, 0x08 /* Private */,
      81,    0,  485,    2, 0x08 /* Private */,
      82,    0,  486,    2, 0x08 /* Private */,
      83,    0,  487,    2, 0x08 /* Private */,
      84,    0,  488,    2, 0x08 /* Private */,
      85,    0,  489,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,    2,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 18,   10,   19,
    QMetaType::Int, QMetaType::Int, 0x80000000 | 18,   10,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 47, QMetaType::Bool,   48,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 58,   59,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ImageViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->open(); break;
        case 1: _t->saveAs(); break;
        case 2: _t->print(); break;
        case 3: _t->imageAdd(); break;
        case 4: _t->imageMultiply(); break;
        case 5: _t->imageAnd(); break;
        case 6: _t->imageOr(); break;
        case 7: _t->loadSecondFile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: { bool _r = _t->imageOperate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->scalarAdd(); break;
        case 10: _t->scalarSubstract(); break;
        case 11: _t->scalarMultiply(); break;
        case 12: _t->scalarDivide(); break;
        case 13: _t->scalarNot(); break;
        case 14: _t->scalarOperate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2]))); break;
        case 15: { int _r = _t->scalarDialog((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->fourierTransform(); break;
        case 17: _t->inverseFourierTransform(); break;
        case 18: _t->brighten(); break;
        case 19: _t->unbrighten(); break;
        case 20: _t->rotate90CW(); break;
        case 21: _t->rotate90CCW(); break;
        case 22: _t->translate(); break;
        case 23: _t->flipHorizontal(); break;
        case 24: _t->flipVertical(); break;
        case 25: _t->zoom2In(); break;
        case 26: _t->zoom2Out(); break;
        case 27: _t->equalize(); break;
        case 28: _t->brightenScale(); break;
        case 29: _t->contrastStretch(); break;
        case 30: _t->log(); break;
        case 31: _t->inverseLog(); break;
        case 32: _t->power(); break;
        case 33: _t->graySlicing(); break;
        case 34: _t->bitSlicing(); break;
        case 35: _t->showHistogramRed(); break;
        case 36: _t->showHistogramGreen(); break;
        case 37: _t->showHistogramBlue(); break;
        case 38: _t->showNormalizedHistogramRed(); break;
        case 39: _t->showNormalizedHistogramGreen(); break;
        case 40: _t->showNormalizedHistogramBlue(); break;
        case 41: _t->showHistogram((*reinterpret_cast< Qt::GlobalColor(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 42: _t->showMessage(); break;
        case 43: _t->copy(); break;
        case 44: _t->paste(); break;
        case 45: _t->zoomIn(); break;
        case 46: _t->zoomOut(); break;
        case 47: _t->normalSize(); break;
        case 48: _t->fitToWindow(); break;
        case 49: _t->filterGeneral((*reinterpret_cast< KernelType(*)>(_a[1]))); break;
        case 50: _t->filterAverage(); break;
        case 51: _t->filterGaussian(); break;
        case 52: _t->filterMedian(); break;
        case 53: _t->filterMax(); break;
        case 54: _t->filterMin(); break;
        case 55: _t->filterHighA(); break;
        case 56: _t->filterHighB(); break;
        case 57: _t->filterHighC(); break;
        case 58: _t->filterHighD(); break;
        case 59: _t->filterHighE(); break;
        case 60: _t->filterHighF(); break;
        case 61: _t->filterUnsharp(); break;
        case 62: _t->filterHighboost(); break;
        case 63: _t->edgeDetectionGradientX(); break;
        case 64: _t->edgeDetectionGradientY(); break;
        case 65: _t->edgeDetection2ndDeriv(); break;
        case 66: _t->edgeDetectionLaplace(); break;
        case 67: _t->edgeDetectionLoG(); break;
        case 68: _t->edgeDetectionSobelX(); break;
        case 69: _t->edgeDetectionSobelY(); break;
        case 70: _t->edgeDetectionPrewittX(); break;
        case 71: _t->edgeDetectionPrewittY(); break;
        case 72: _t->edgeDetectionRoberts1(); break;
        case 73: _t->edgeDetectionRoberts2(); break;
        case 74: _t->edgeDetectionCanny(); break;
        case 75: _t->about(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ImageViewer::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_ImageViewer.data,
    qt_meta_data_ImageViewer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImageViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageViewer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ImageViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 76)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 76;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 76)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 76;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
