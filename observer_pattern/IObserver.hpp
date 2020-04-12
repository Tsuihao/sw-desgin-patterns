#ifndef IOBSERVER_HPP
#define IOBSERVER_HPP

class IObserver
{
public:
    virtual ~IObserver(){}
    virtual void update() = 0;
};



#endif // IOBSERVER_HPP