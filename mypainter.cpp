#include "mypainter.h"

MyPainter::MyPainter(QWidget *parent)
    : QWidget{parent}
{

}

void MyPainter::paintEvent(QPaintEvent *)
{
    Rectangle rect;
    Circle circle;
    Triangle trial;

    absFigure(rect);
    absFigure(trial);
    absFigure(circle);
}

void MyPainter::absFigure(AbstractFigure &figure)
{
    QPainter painter;

    QPen pen;
    QColor DeepSkyBlue(115, 230, 255);


    pen.setColor(DeepSkyBlue);
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(10);


    painter.begin(this);
    painter.setPen(pen);

    figure.drawCustomFigure(painter);

    painter.end();
}
