#ifndef ABSTRACTFIGURE_H
#define ABSTRACTFIGURE_H

#include <array>
#include <list>
#include <QPainter>

class AbstractFigure
{
public:
    virtual int getX(int index) = 0;
    virtual int getY(int index) = 0;

    virtual void drawCustomFigure(QPainter& figure)= 0;

};

#endif // ABSTRACTFIGURE_H
