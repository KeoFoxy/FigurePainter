#ifndef DOTONSURFACE_H
#define DOTONSURFACE_H

#include <array>
#include <iostream>
#include <vector>

template <typename S>

class dotOnSurface {
public:
    dotOnSurface() = default;

    dotOnSurface(S x, S y) {
        this->x = x;
        this->y = y;
    }

private:
    S x = 0;
    S y = 0;

public:
    dotOnSurface operator-(dotOnSurface<S> &other) {
        dotOnSurface<S> _default(0, 0);
        _default.x = this->x - other.x;
        _default.y = this->y - other.y;
        return _default;
    }

    dotOnSurface operator+(dotOnSurface<S> &other) {
        dotOnSurface<S> _default(0, 0);
        _default.x = this->x + other.x;
        _default.y = this->y + other.y;
        return _default;
    }

    dotOnSurface operator/(const int div) {
        dotOnSurface def_d;
        def_d.x = this->x / div;
        def_d.y = this->y / div;
        return def_d;
    }

    S getX() {
        return x;
    }
    S getY() {
        return y;
    }
};

#endif