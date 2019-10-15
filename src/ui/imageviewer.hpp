#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H

#include <QMainWindow>
#include <QImage>
#ifndef QT_NO_PRINTER
  #include <QPrinter>
#endif

#include "src/image/image.hpp"
#include "src/image/exception.hpp"
#include "src/adjustment/adjustment.hpp"
#include <iostream>

QT_BEGIN_NAMESPACE
class QAction;
class QLabel;
class QMenu;
class QScrollArea;
class QScrollBar;
QT_END_NAMESPACE

class ImageViewer : public QMainWindow
{
  Q_OBJECT

public:
  ImageViewer();
  bool loadFile(const QString &);

private slots:
  void open();
  void saveAs();
  void print();

  void showMessage();

  void brighten();
  void unbrighten();
  void rotate90CW();
  void rotate90CCW();
  void translate();
  void flipHorizontal();
  void flipVertical();
  void zoom2In();
  void zoom2Out();
  void showHistogramRed();
  void showHistogramGreen();
  void showHistogramBlue();
  void showHistogram(Qt::GlobalColor colorCode);

  void copy();
  void paste();
  void zoomIn();
  void zoomOut();
  void normalSize();
  void fitToWindow();
  void about();

private:
  void createActions();
  void createMenus();
  void updateActions();
  bool saveFile(const QString &fileName);
  void setImage(const QImage &newImage);
  void scaleImage(double factor);
  void adjustScrollBar(QScrollBar *scrollBar, double factor);

  QImage image;
  Image* img;
  QString filename;
  QLabel *imageLabel;
  QScrollArea *scrollArea;
  double scaleFactor;

#ifndef QT_NO_PRINTER
  QPrinter printer;
#endif

  QAction *brightenAct;
  QAction *unbrightenAct;
  QAction *rotate90CWAct;
  QAction *rotate90CCWAct;
  QAction *translateAct;
  QAction *flipHorizontalAct;
  QAction *flipVerticalAct;
  QAction *zoom2InAct;
  QAction *zoom2OutAct;
  QAction *redHistogramAct;
  QAction *greenHistogramAct;
  QAction *blueHistogramAct;

  QAction *saveAsAct;
  QAction *printAct;
  QAction *copyAct;
  QAction *zoomInAct;
  QAction *zoomOutAct;
  QAction *normalSizeAct;
  QAction *fitToWindowAct;
};

#endif
