#include "coronaDataCenter.hpp"
#include <algorithm>
#include <iostream>


/////////////////////////////////////////////////////////////////////////////
void CoronaDataCenter::add(IObserver* observer)
{
    m_observerList.push_back(observer);
}
/////////////////////////////////////////////////////////////////////////////
void CoronaDataCenter::remove(IObserver* observer)
{
    m_observerList.erase(
        std::remove(m_observerList.begin(), m_observerList.end(), observer),
        m_observerList.end());
}
/////////////////////////////////////////////////////////////////////////////
void CoronaDataCenter::notify()
{
    for(size_t i(0); i < m_observerList.size(); ++i)
    {
        m_observerList[i]->update();
    }
}
/////////////////////////////////////////////////////////////////////////////
int CoronaDataCenter::getInfectionNumber() const
{
    return m_numInfection;
}
/////////////////////////////////////////////////////////////////////////////
void CoronaDataCenter::setInfectionNumber(int num)
{
    m_numInfection = num;
}