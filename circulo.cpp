#include "circulo.h"

Circulo::Circulo()
    :QPoint(0,0)
{

}

Circulo::Circulo(int xpos, int ypos)
    :QPoint(xpos, ypos)
{

}

Circulo::~Circulo()
{

}

void Circulo::arriba()
{
    QPen pincel;
    pincel.setColor(mColor);
    pincel.setWidth(mAncho);

    mPainter->setPen(pincel);

    mPainter->drawEllipse(mInicial.x(),mInicial.y(),mFinal.x()- mInicial.x(),mFinal.y()- mInicial.y());
    update();
}

void Circulo::abajo()
{
    QPen pincel;
    pincel.setColor(mColor);
    pincel.setWidth(mAncho);

    mPainter->setPen(pincel);

    mPainter->drawEllipse(mInicial.x(),mInicial.y(),mFinal.x()- mInicial.x(),mFinal.y()- mInicial.y());
    update();
}

void Circulo::izquierda()
{
    QPen pincel;
    pincel.setColor(mColor);
    pincel.setWidth(mAncho);

    mPainter->setPen(pincel);

    mPainter->drawEllipse(mInicial.x(),mInicial.y(),mFinal.x()- mInicial.x(),mFinal.y()- mInicial.y());
    update();
}

void Circulo::derecha()
{
    QPen pincel;
    pincel.setColor(mColor);
    pincel.setWidth(mAncho);

    mPainter->setPen(pincel);

    mPainter->drawEllipse(mInicial.x(),mInicial.y(),mFinal.x()- mInicial.x(),mFinal.y()- mInicial.y());
    update();
}

