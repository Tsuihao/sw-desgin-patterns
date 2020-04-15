#ifndef IOBSERVABLE_HPP
#define IOBSERVABLE_HPP

// forward declaration
class IObserver;

class IObservable
{
public:
    virtual ~IObservable(){}

    virtual void add(IObserver* observer) = 0;
    virtual void remove(IObserver* observer) = 0;
    virtual void notify() = 0;
};


#endif //IOBSERVABLE_HPP