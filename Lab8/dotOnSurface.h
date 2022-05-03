#ifndef DOTONSURFACE_H
#define DOTONSURFACE_H
#pragma once

#include <iostream>
#include <vector>
#include <array>

template <typename S>

class dotOnSurface
{   
public:
    dotOnSurface(){};
    ~dotOnSurface(){};

    dotOnSurface(S x, S y)
    {
        this->x = x;
        this->y = y;
    }


private:
    S coordinates_x_y[2];
    S x, y;

public:
    dotOnSurface operator -(dotOnSurface<S> &other)
    {
        dotOnSurface<S> _default(0, 0);
        _default.x = this->x - other.x;
        _default.y = this->y - other.y;
        return _default;
    }

       dotOnSurface operator +(dotOnSurface<S> &other)
    {
        dotOnSurface<S> _default(0, 0);
        _default.x = this->x + other.x;
        _default.y = this->y + other.y;
        return _default;
    }

       dotOnSurface operator /(const int div)
    {
        dotOnSurface def_d;
        def_d.x = this->x / div;
        def_d.y = this->y / div;
        return def_d;
    }
    /*
    void setCoordinates(S x, S y)
    {
        this->coordinates_x_y[0] = x;
        this->coordinates_x_y[1] = y;
    }
    S *getCoordinates()
    {
        return coordinates_x_y;
    }
    */
    S getX()
    {
        return x;
    }
    S getY()
    {
        return y;
    }
};

#endif