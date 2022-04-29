#include "dotOnSurface.h"

int main()
{
    dotOnSurface<int> dot;
    dot.setCoordinates(3, 4);
    for(int i = 0; i < 2; i++)
    {
        std::cout<<dot.getCoordinates()[i]<< std::endl;
    }
    return 0;
}