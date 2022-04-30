#include "figures.h"

Rectangle::Rectangle()
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
    figure.drawRect(rect.getX(0), rect.getY(0), rect.getX(3), rect.getY(3));
}
//////////////////////////////////////////////////////////////////////////////////
Triangle::Triangle()
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
    poligon << QPoint(trial.getX(0), trial.getY(0)) << QPoint(trial.getX(0), trial.getY(1)) << QPoint(trial.getX(1), trial.getY(2));
    figure.drawPolygon(poligon);
}
//////////////////////////////////////////////////////////////////////////////////
Circle::Circle()
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
    //QPolygon poligon;
    //poligon << QPoint(trial.getX(0), trial.getY(0)) << QPoint(trial.getX(1), trial.getY(1)) << QPoint(trial.getX(3), trial.getY(3));
    figure.drawEllipse(circle.getX(0), circle.getY(0), circle.getX(3), circle.getX(3));
}
