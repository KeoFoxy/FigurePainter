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
    dotOnSurface()
    {

    }

    ~dotOnSurface()
    {
        
    }

private:
    S coordinates_x_y[2];

public:
    void setCoordinates(S x, S y)
    {
        this->coordinates_x_y[0] = x;
        this->coordinates_x_y[1] = y;
    }
    S *getCoordinates()
    {
        return coordinates_x_y;
    }
};

#endif