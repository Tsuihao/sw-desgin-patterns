#ifndef CORONADATAOBSERVER_HPP
#define CORONADATAOBSERVER_HPP

#include "interfaces/IObserver.hpp"
#include <string>
// forward declaration
class CoronaDataCenter;

class CoronaDataObserver : public IObserver
{
public:
    CoronaDataObserver(CoronaDataCenter* dataCenter, std::string name) : 
    m_dataCenter(dataCenter),
    m_name(name)
    {
    }

    void update() override;
private:
    CoronaDataCenter* m_dataCenter;
    std::string m_name;
};
#endif