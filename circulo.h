#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint>
#include <QColor>
#include <QPainter>
#include <QColorDialog>

//#include<QGraphicsScene>


class Circulo : public QPoint
{
    Q_OBJECT

public:
    Circulo();
    Circulo(int xpos, int ypos);

    Circulo (QWidget *parent =nullptr);
    ~Circulo ();



private:
    void arriba ();
    void abajo ();
    void izquierda ();
    void derecha ();

    QPoint mInicial;
    QPoint mFinal;
    QPoint mCentro;
    int mAncho;
    QColor mColor;

};

#endif // CIRCULO_H
