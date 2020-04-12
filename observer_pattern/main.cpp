#include <iostream>
#include "coronaDataCenter.hpp"
#include "coronaDataObserver.hpp"

int main()
{
    CoronaDataCenter dataCenter;
    CoronaDataObserver taiwan(&dataCenter,"Taiwan")
                     , usa(&dataCenter, "USA")
                     , china(&dataCenter, "China")
                     , japen(&dataCenter, "Japen")
                     , germany(&dataCenter, "Germany");

    // register
    dataCenter.add(&taiwan);
    dataCenter.add(&usa);
    dataCenter.add(&china);
    dataCenter.add(&japen);
    dataCenter.add(&germany);

    // set dummy number
    dataCenter.setInfectionNumber(1000);

    // notify the observers
    dataCenter.notify();

    // remove china from the list
    std::cout << "remove China form the notification" << std::endl;
    dataCenter.remove(&china);

    // set another dummy numer
    dataCenter.setInfectionNumber(1000000);
    
    // notify again
    dataCenter.notify();

    return 0;
}   