#include "mypainter.h"

MyPainter::MyPainter(QWidget *parent)
    : QWidget{parent}
{

}

void MyPainter::paintEvent(QPaintEvent *)
{
    for(auto &items: ptr_figures)
        {
            absFigure(std::move(items));
        }
}

void MyPainter::absFigure(std::unique_ptr<AbstractFigure> figure)
{
    QPainter painter;

    QPen pen;
    QColor DeepSkyBlue(115, 230, 255);


    pen.setColor(DeepSkyBlue);
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(10);


    painter.begin(this);
    painter.setPen(pen);

    figure->drawCustomFigure(painter);

    painter.end();
}

void MyPainter::setFigures(std::vector<std::unique_ptr<AbstractFigure>> _ptr_figures)
{
    ptr_figures = std::move(_ptr_figures);
}


