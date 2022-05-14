#include "figures.h"

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(int x1, int y1, int x2, int y2)
{
    this->x[0] = x1;
    this->y[0] = y1;
    this->x[1] = x2;
    this->y[1] = y2;
}

/*
 * Rectangle::Rectangle(int x1, int y1, int x2, int y2)
{

    int i = 0;
    int j = 0;
    for(auto items: x_k)
    {
        x[i] = items;
        i++;
    }
    for(auto items: y_k)
    {
        y[j] = items;
        j++;
    }





}
 */

Rectangle::~Rectangle()
{

}


int Rectangle::getX(const int index)
{
    return x[index];
}

int Rectangle::getY(const int index)
{
    return y[index];
}

void Rectangle::drawCustomFigure(QPainter& figure)
{
    Rectangle rect;
    //figure.drawRect(rect.getX(0), rect.getY(0), rect.getX(1), rect.getY(1));
    figure.drawRect(x[0], y[0], x[1], y[1]);
}
//////////////////////////////////////////////////////////////////////////////////
Triangle::Triangle()
{

}

Triangle::Triangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    this->x[0] = x1;
    this->y[0] = y1;
    this->x[1] = x2;
    this->y[1] = y2;
    this->y[2] = x3;
    this->y[2] = y3;
}


Triangle::~Triangle()
{

}


int Triangle::getX(const int index)
{
    return x[index];
}

int Triangle::getY(const int index)
{
    return y[index];
}

void Triangle::drawCustomFigure(QPainter& figure)
{
    Triangle trial;
    QPolygon poligon;
    poligon << QPoint(x[0], y[0]) << QPoint(x[0], y[1]) << QPoint(x[1], y[2]);
    figure.drawPolygon(poligon);
}
//////////////////////////////////////////////////////////////////////////////////
Circle::Circle(int x_center, int y_center, int x_r, int y_r)
{
    this->x[0] = x_center;
    this->y[0] = y_center;
    this->x[1] = x_r;
    this->y[1] = y_r;
}


Circle::Circle()
{

}

Circle::~Circle()
{

}


int Circle::getX(const int index)
{
    return x[index];
}

int Circle::getY(const int index)
{
    return y[index];
}

void Circle::drawCustomFigure(QPainter& figure)
{
    Circle circle;
    QPoint center {x[0], y[0]};
    figure.drawEllipse(center, x[1], y[1]);
}
