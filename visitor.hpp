#ifndef VISITOR_HPP
#define VISITOR_HPP

#include <vector>
#include "Base.hpp"

using namespace std;

class Base;
class Visitor{
    private:
        double orderTotal=0;
        vector<Base*> items;
        double discount=0;
        double balance=850;
        bool payed;
    public:
        void visit_order(double);
        void storeItems(Base*);
        double getTotal();
        void displayItems();
        void setDiscount(double);
        double getDiscount();
        double getRawDiscount();
        void showMenu();
        void pay(double);
        void steal();
        bool getPayed();
};



#endif
