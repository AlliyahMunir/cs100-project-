#ifndef ORDER_HPP
#define ORDER_HPP

#include <vector>
#include "Base.hpp"
#include <iostream>
#include "visitor.hpp"

using namespace std;
//composite part of composite pattern
class Order : public Base{
private:
    vector<Base*> contents;
    string name;
    int orderNum;
public: 
    Order() : Base(){}
    Order(int num){this->orderNum = num;}
    virtual void display();
    virtual int count();
    void add(Base*);
    virtual double cost();
    void accept(Visitor*);
};


#endif //ORDER_HPP