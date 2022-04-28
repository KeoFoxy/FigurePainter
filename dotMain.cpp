#include "dotOnSurface.h"
//template <typename S>

int main()
{
    dotOnSurface<int> dot;

    dot.setCoordinates(3, 4);
    std::cout<<dot.getCoordinates()<<std::endl;

   // dot.setCoordinates_2(3, 4);
  //  std::cout<<dot.getCoordinates_2()<<std::endl;
    return 0;
}