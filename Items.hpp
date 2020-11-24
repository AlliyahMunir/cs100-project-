#ifndef ITEMS_HPP
#define ITEMS_HPP
#include "Base.hpp"
#include <string>
using namespace std;

class Items : public Base{
private:
    string name;
    double price;
public:
    Items() : Base(){}
    Items(string product, double tag){this->name = product; this->price = tag;}
    virtual void display();
    virtual int count();
    virtual double cost();
};

#endif