#ifndef DISCOUNT_HPP
#define DISCOUNT_HPP

#include "visitor.hpp"
class Discount{
    private:
        double discountPercent=0;
        double randomNum=0;
    public:
        void accept(Visitor*, double);
        void discountGame();
};


#endif