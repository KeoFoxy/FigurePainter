#include "figures.h"

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(const std::array<QPoint, 2>& _xyCoords)
{
    this->xyCoords = _xyCoords;
}

void Rectangle::figureDescription(QPoint& point)
{
    QToolTip::showText(point, Description);
}

bool Rectangle::checkInside(const QPoint& mousePoint)
{
    if(mousePoint.y() <= xyCoords[0].y() && mousePoint.y() >= xyCoords[1].y() && mousePoint.x() <= xyCoords[0].x() && mousePoint.x() >= xyCoords[1].x())
    {
        return true;
    }
    else
    {
        return false;
    }
}

Rectangle::~Rectangle()
{

}

void Rectangle::drawCustomFigure(QPainter& figure)
{
    QPolygon rect;
    rect << xyCoords[0] << QPoint(xyCoords[0].x(), xyCoords[1].y()) << xyCoords[1] << QPoint(xyCoords[1].x(), xyCoords[0].y());
    figure.drawPolygon(rect);
}
////////////////////////////////////////////////////////////////////////////////
/// ************************************************************************ ///
////////////////////////////////////////////////////////////////////////////////
Triangle::Triangle()
{

}

Triangle::Triangle(const std::array<QPoint, 3>& _xyCoords)
{
    this->xyCoords = _xyCoords;
}

void Triangle::figureDescription(QPoint& point)
{
    QToolTip::showText(point, Description);
}

bool Triangle::checkInside(const QPoint& mousePoint)
{
    int p1 = (xyCoords[0].x()-mousePoint.x())*(xyCoords[1].y()-xyCoords[0].y())-(xyCoords[1].x()-xyCoords[0].x())*(xyCoords[0].y()-mousePoint.y());
    int p2 = (xyCoords[1].x()-mousePoint.x())*(xyCoords[2].y()-xyCoords[1].y())-(xyCoords[2].x()-xyCoords[1].x())*(xyCoords[1].y()-mousePoint.y());
    int p3 = (xyCoords[2].x()-mousePoint.x())*(xyCoords[0].y()-xyCoords[2].y())-(xyCoords[0].x()-xyCoords[2].x())*(xyCoords[2].y()-mousePoint.y());

    if(p1*p2 > 0 && p1*p3 > 0 && p2*p3 > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Triangle::~Triangle()
{

}

void Triangle::drawCustomFigure(QPainter& figure)
{  
    QPolygon poligon;
     poligon << xyCoords[0] << xyCoords[1] << xyCoords[2];
    figure.drawPolygon(poligon);
}
////////////////////////////////////////////////////////////////////////////////
/// ************************************************************************ ///
////////////////////////////////////////////////////////////////////////////////
Circle::Circle()
{

}

Circle::Circle(const QPoint& _centerPoint, const int _radius)
{
    this->center = _centerPoint;
    this->radius = _radius;
}

void Circle::figureDescription(QPoint& point)
{
    QToolTip::showText(point, Description);
}

bool Circle::checkInside(const QPoint& mousePoint)
{
    if(pow(mousePoint.y() - center.y(), 2) + pow(mousePoint.x() - (center.x()), 2) < pow(radius, 2))
    {
        return true;
    }
    else
    {
        return false;
    }
}

Circle::~Circle()
{

}

void Circle::drawCustomFigure(QPainter& figure)
{
    figure.drawEllipse(center, radius, radius);
}
