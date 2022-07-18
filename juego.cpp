#include "juego.h"
#include "ui_juego.h"

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    /*
         ui->setupUi(this);
    QPoint centro = ui->marco->geometry().center();
    m_circulo = new Circulo();
    m_circulo->setX(centro.x());
    m_circulo->setY(centro.y());
*/
    ui->setupUi(this);
    lienzo = QPixmap(500,500);
    this->dibujar();

    ui->outCuadro->setPixmap(lienzo);


}

Juego::~Juego()
{
    delete ui;
}

void Juego::paintEvent(QPaintEvent *event)
{
    ui->outCuadro->setPixmap(lienzo);
}


void Juego::on_btnArriba_released()
{

}


void Juego::on_btnAbajo_released()
{

}


void Juego::on_btnIzqueirda_released()
{

}


void Juego::on_btnDerecha_released()
{

}


void Juego::on_actionConfigraci0n_triggered()
{
    Configuracion *config = new Configuracion(this);
    int respuesta = config->exec();
    if (respuesta){
        qDebug() << config->color().name();
        qDebug() << config->dimension();
    }
}


void Juego::on_actionSalir_triggered()
{
    this->close();
}

void Juego::dibujar()
{
    QPainter pintor(this);
    lienzo.fill(Qt::white);

    QPainter painter(&lienzo);

    int x = 0;
    int y = 0;

    QPen pincel;
    pincel.setWidth(5);
    pincel.setJoinStyle(Qt::MiterJoin);

    QColor colorRelleno1(0,160,120);
    QColor colorBorde1(0, 122, 91);

    pincel.setColor(colorBorde1);
    painter.setPen(pincel);
    painter.setBrush(colorRelleno1);



    QPen pincel2;
    pincel2.setColor(Qt::black);
    pincel2.setWidth(5);
    pincel2.setStyle(Qt::DotLine);


    pintor.setPen(pincel2);

    pintor.drawEllipse(450,100,100,100);



}

int Juego::getAlto(int valor)
{
    return 4 * valor;

}

int Juego::incY(int alto)
{
    return 400 - alto;
}
