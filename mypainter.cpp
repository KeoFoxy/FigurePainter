#include "mypainter.h"

MyPainter::MyPainter(QWidget *parent)
    : QWidget{parent}
{

}

void MyPainter::paintEvent(QPaintEvent *)
{
    for(auto items: ptr_figures)
    {
        absFigure(*items);
    }
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

std::vector<AbstractFigure *> MyPainter::setFigures(std::vector<AbstractFigure *> _ptr_figures)
{
    ptr_figures = _ptr_figures;
    return ptr_figures;
}


