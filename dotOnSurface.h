#ifndef DOTONSURFACE_H
#define DOTONSURFACE_H
#pragma once

#include <iostream>
#include <vector>

template <typename S>

class dotOnSurface
{
    
public:
    dotOnSurface();
    ~dotOnSurface();

private:
    S coordinates_x_y[2];

public:

    void setCoordinates(S x, S y);
    S getCoordinates() const;


};

#endif