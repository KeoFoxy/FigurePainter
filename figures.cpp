#include "figures.h"

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(const std::array<QPoint, 2>& _xyCoords)
{
    this->xyCoords = _xyCoords;
}

QString Rectangle::figureDescription()
{
    return "Rectangle";
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

void Rectangle::SetXYCoordinates(const QPoint& point)
{
    int ax = std::abs(xyCoords[0].x() - xyCoords[1].x());
    int ay = std::abs(xyCoords[0].y() - xyCoords[1].y());

    xyCoords[0].rx() = (point.x() + ax/2);
    xyCoords[1].rx() = (point.x() + ax/2);

    xyCoords[0].ry() = (point.y() + ay/2);
    xyCoords[1].ry() = (point.y() + ay/2);

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

QString Triangle::figureDescription()
{
    return "Triangle";
}

bool Triangle::checkInside(const QPoint& mousePoint)
{
    auto trialInside = [mousePoint](QPoint p1, QPoint p2)
    {
        int p = (p1.x() - mousePoint.x())*(p2.y() - p1.y())-(p2.x() - p1.y())*(p1.y()-mousePoint.y());
        return p;
    };

    int p1 = trialInside(xyCoords[0], xyCoords[1]);
    int p2 = trialInside(xyCoords[1], xyCoords[2]);
    int p3 = trialInside(xyCoords[2], xyCoords[0]);

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

void Triangle::SetXYCoordinates(const QPoint& point)
{
    QPoint sumPoints = xyCoords[0] + xyCoords[1] + xyCoords[2];
    QPoint center = QPoint(sumPoints.x()/3, sumPoints.y()/3);

    QPoint dot = center - point;

    xyCoords[0] = xyCoords[0] - dot;
    xyCoords[1] = xyCoords[1] - dot;
    xyCoords[2] = xyCoords[2] - dot;

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

QString Circle::figureDescription()
{
    return "Circle";
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

void Circle::SetXYCoordinates(const QPoint& point)
{
    center = point;
}
