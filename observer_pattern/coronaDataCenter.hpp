#ifndef CORONADATACETNER_HPP
#define CORONADATACENTER_HPP

#include <vector>
#include "IObservable.hpp"
#include "IObserver.hpp"

class CoronaDataCenter : public IObservable
{
public:
    CoronaDataCenter() : m_numInfection(0)
    {
        m_observerList.clear();
    }
    void add(IObserver* observer) override;
    void remove(IObserver* observer) override;
    void notify() override;

    void setInfectionNumber(int number);
    int getInfectionNumber() const;

private:
    std::vector<IObserver*> m_observerList;
    int m_numInfection;
};

#endif