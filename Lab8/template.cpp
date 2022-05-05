#include <iostream>
#include <vector>

template<typename T>

T avgValue(const std::vector<T> &numbers)
{
    T avgResult = 0;

    for(int i = 0; i < numbers.size(); i++)
    {
        avgResult += numbers[i];
    }
    
    return (avgResult/numbers.size());
}

int main()
{
    std::vector<int> intValues = {1, 2 ,3, 4, 5, 6};
    std::vector<float> floatValues = {1.23, 2.45};
    std::vector<double> doubleValues = {1.253, 2.4325, 3.32314, 2.732231};

    std::cout<< "Average value of int vector: " << avgValue(intValues) <<std::endl;
    std::cout<< "Average value of float vector: " << avgValue(floatValues)<<std::endl;
    std::cout<< "Average value of double vector: " << avgValue(doubleValues)<<std::endl;


    return 0;
}