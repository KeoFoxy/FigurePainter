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
    std::array<S, 2> coords;

public:

    void setCoordinates_2(S x, S y)
    {
        this->coords.at(0) = x;
        this->coords.at(1) = y;
    }

    void setCoordinates(S x, S y)
    {
        this->coordinates_x_y[0] = x;
        this->coordinates_x_y[1] = y;
    }
    S getCoordinates()
    {
        return coordinates_x_y[1];
    }

    std::array<S, 2> getCoordinates_2()
    {
        return coords;
    }

};

#endif