#include "dotOnSurface.h"

template<typename A>

A avgValue(std::vector<A> xyValue)
{
    A t_pointer = xyValue[0];
    A sum = xyValue[0];

    for(auto &item: xyValue)
    {
        sum = sum + item;
    }
    
    return ((sum - t_pointer)/xyValue.size());
}

int main()
{
    /*
    dotOnSurface<int> dot;
    dot.setCoordinates(3, 4);
    for(int i = 0; i < 2; i++)
    {
        std::cout<<dot.getCoordinates()[i]<< std::endl;
    }
    */
    std::vector<float> coords = {1, 2, 3, 4};

    std::vector<dotOnSurface<float>> a = {dotOnSurface<float>(1, 3), dotOnSurface<float>(5, 2), dotOnSurface<float>(7, 4)};
    dotOnSurface<float> c =  avgValue<dotOnSurface<float>>(a);
    std::cout << c.getX() <<std::endl;
    std::cout << c.getY() <<std::endl;

    return 0;
}