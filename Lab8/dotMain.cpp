#include "dotOnSurface.h"

template<typename A>

A avgValue(std::vector<A> xyValue)
{
    
    A sum{};
    
    for(auto &item: xyValue)
    {
        sum = sum + item;
    }
    
    A res = sum;
    //return ((sum - t_pointer)/static_cast<int>(xyValue.size()));
    return res/ static_cast<int>(xyValue.size());
}
/*
template<typename S>
S avgValues(const std::vector<S> &numbers)
{
    S avgResult = 0;
    for(int i = 0; i < numbers.size(); i++)
    {
        avgResult += numbers[i];
    }

    return (avgResult/numbers.size());
}
*/
int main()
{
    std::vector<float> coords = {1, 2, 3, 4};

    //std::vector<dotOnSurface<float>> a = {dotOnSurface<float>(1, 3), dotOnSurface<float>(5, 2), dotOnSurface<float>(7, 4)};
    //dotOnSurface<float> c =  avgValue<dotOnSurface<float>>(a);
    //std::cout << c.getX() <<std::endl;
    //std::cout << c.getY() <<std::endl;

    std::vector<int> MintValues = {-2, -2, -2};
    std::vector<int> intValues = {1, 2 ,3, 4, 5, 6};
    std::vector<float> floatValues = {1.23, 2.45};
    std::vector<double> doubleValues = {1.253, 2.4325, 3.32314, 2.732231};

    std::cout<< "Average value of -int vector: " << avgValue(MintValues) <<std::endl;
    std::cout<< "Average value of int vector: " << avgValue(intValues) <<std::endl;
    std::cout<< "Average value of float vector: " << avgValue(floatValues)<<std::endl;
    std::cout<< "Average value of double vector: " << avgValue(doubleValues)<<std::endl;



    return 0;
}