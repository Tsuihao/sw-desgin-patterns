#include <iostream>
#include "randomNumGenerator.hpp"


int main()
{

    float aFloatNum = SingletonRandomNumGenerator::genFloat();

    std::cout << "float = " << aFloatNum << std::endl;
}