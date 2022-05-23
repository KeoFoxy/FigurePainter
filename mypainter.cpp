#include "mypainter.h"

MyPainter::MyPainter(QWidget *parent)
    : QWidget{parent}
{

}

void MyPainter::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen;
    QColor SoulSkyBlue(198, 226, 255);

    pen.setColor(SoulSkyBlue);
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(10);

    painter.setPen(pen);
    painter.setBrush(QBrush(SoulSkyBlue));

    for(auto &item: ptr_figures)
        {
            item->drawCustomFigure(painter);
        }

    QColor Lilac(225,196,255);
    pen.setColor(Lilac);
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(10);

    painter.setBrush(QBrush(Lilac));

    for(auto &item: ptr_figures)
    {
        if(item->checkInside(mousePosition))
        {
            item->drawCustomFigure(painter);
        }
    }
}

void MyPainter::setFigures(std::vector<std::unique_ptr<AbstractFigure>> &&_ptr_figures)
{
    ptr_figures = std::move(_ptr_figures);
}

void MyPainter::mouseMoveEvent(QMouseEvent * event)
{
    mousePosition = event->pos();
    update();
}

void MyPainter::mousePressEvent(QMouseEvent *)
{
    for(auto& item : ptr_figures)
    {
        if(item->checkInside(mousePosition))
        {
            item->figureDescription(mousePosition);
        }
    }

    repaint();
}
