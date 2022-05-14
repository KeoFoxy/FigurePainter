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
    return res/ static_cast<int>(xyValue.size());
}

int main()
{
    std::vector<float> coords = {1, 2, 3, 4};

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