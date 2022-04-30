#ifndef FIGURES_H
#define FIGURES_H

#include <list>
#include <array>
#include "abstractfigure.h"

class Rectangle: public AbstractFigure
{
private:
    //int x[4], y[4]; //Coordinates x y for rectangle

    std::array<int, 4> x;
    std::array<int, 4> y;

    std::list<int> x_k = {100, 200, 300, 400};
    std::list<int> y_k = {100, 200, 300, 600};

public:
    Rectangle();
    ~Rectangle();

    virtual int getX(const int index) override;
    virtual int getY(const int index) override;

    virtual void drawCustomFigure(QPainter& figure) override;
};


class Triangle: public AbstractFigure
{
private:
    std::array<int, 3> x;
    std::array<int, 3> y;

    std::list<int> x_k = {300, 500, 600};
    std::list<int> y_k = {300, 400, 300};

public:
    Triangle();
    ~Triangle();

    virtual int getX(const int index) override;
    virtual int getY(const int index) override;

    virtual void drawCustomFigure(QPainter& figure) override;
};


class Circle: public AbstractFigure
{
private:
    std::array<int, 4> x;
    std::array<int, 4> y;

    std::list<int> x_k = {100, 200, 300, 400};
    std::list<int> y_k = {100, 200, 300, 600};

public:
    Circle();
    ~Circle();

    virtual int getX(const int index) override;
    virtual int getY(const int index) override;

    virtual void drawCustomFigure(QPainter& figure) override;
};
#endif // FIGURES_H
