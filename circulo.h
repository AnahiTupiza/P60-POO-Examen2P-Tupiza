#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint>
#include<QColor>

class Circulo : public QPoint
{
public:
    Circulo();
    Circulo(int xpos, int ypos);

    QColor m_color;
    int m_dim;

private:
    void subir();
    void bajar ();
    int getx ();
    int gety ();
};

#endif // CIRCULO_H
