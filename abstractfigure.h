#ifndef ABSTRACTFIGURE_H
#define ABSTRACTFIGURE_H

#include <array>
#include <list>
#include <memory>
#include <QPainter>

class AbstractFigure
{
public:
    virtual bool checkInside(const QPoint&) = 0;

    virtual void drawCustomFigure(QPainter& figure)= 0;
    virtual void figureDescription(QPoint&) = 0;

};

#endif // ABSTRACTFIGURE_H
