#ifndef FIGURES_H
#define FIGURES_H

#include <list>
#include <array>
#include <QMouseEvent>
#include <QToolTip>
#include <QString>
#include <math.h>
#include "abstractfigure.h"

class Rectangle: public AbstractFigure
{
private:
    std::array<QPoint, 2> xyCoords;

    QString Description = "Rectangle";

public:
    Rectangle();
    Rectangle(const std::array<QPoint, 2>& _xyCoords);
    ~Rectangle();

    virtual void drawCustomFigure(QPainter& figure) override;
    virtual void figureDescription(QPoint&) override;

    virtual bool checkInside(const QPoint&) override;
};
////////////////////////////////////////////////////////////////////////////////
/// ************************************************************************ ///
////////////////////////////////////////////////////////////////////////////////
class Triangle: public AbstractFigure
{
private:
    std::array<QPoint, 3> xyCoords;

    QString Description = "Triangle";

public:
    Triangle();
    Triangle(const std::array<QPoint, 3>& _xyCoords);
    ~Triangle();

    virtual void drawCustomFigure(QPainter& figure) override;
    virtual void figureDescription(QPoint&) override;

    virtual bool checkInside(const QPoint&) override;
};
////////////////////////////////////////////////////////////////////////////////
/// ************************************************************************ ///
////////////////////////////////////////////////////////////////////////////////
class Circle: public AbstractFigure
{
private:
    QPoint center;
    int radius;

    QString Description = "Circle";

public:
    Circle();
    Circle(const QPoint& _centerPoint, const int _radius);
    ~Circle();

    virtual void drawCustomFigure(QPainter& figure) override;
    virtual void figureDescription(QPoint&) override;

    virtual bool checkInside(const QPoint&) override;
};
#endif // FIGURES_H
