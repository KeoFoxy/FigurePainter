#include "mypainter.h"

MyPainter::MyPainter(std::vector<AbstractFigure *> _ptr_figures)
{
    this->ptr_figures = _ptr_figures;

}

MyPainter::MyPainter(QWidget *parent)
    : QWidget{parent}
{

}

void MyPainter::paintEvent(QPaintEvent *)
{
    //ptr_figures;

    //for(auto items: prt_figures);
/*
    Rectangle *rect = new Rectangle;
    Circle *circle = new Circle;
    Triangle *trial = new Triangle;

    std::vector<AbstractFigure *> ptr_figures = {rect, circle, trial};;
*/
    for(auto items: this->ptr_figures)
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

std::vector<AbstractFigure *> MyPainter::GetVector(std::vector<AbstractFigure *> _ptr_figures)
{
    //ptr_figures.insert(ptr_figures.end(), _ptr_figures.begin(), _ptr_figures.end());
    //ptr_figures.swap(_ptr_figures);
    this->ptr_figures = _ptr_figures;
    return ptr_figures;
}

