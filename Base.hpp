#ifndef BASE_HPP
#define BASE_HPP

//component part of composite pattern
class Base{
public:
    Base(){};
    virtual void display() = 0;
    virtual int count() = 0;
    virtual double cost() = 0;
};


#endif //BASE_HPP