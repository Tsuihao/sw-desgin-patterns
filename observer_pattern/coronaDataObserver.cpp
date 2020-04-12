#include "coronaDataObserver.hpp"
#include "coronaDataCenter.hpp"
#include <iostream>


void CoronaDataObserver::update()
{
    int num_infection = m_dataCenter->getInfectionNumber();
    std::cout << m_name << " got update, the current infection number = " <<  num_infection << std::endl;
}