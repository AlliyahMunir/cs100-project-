#include "discount.hpp"
#include <iostream>
#include <cstdlib>
void Discount::accept(Visitor* myvisitor, double userNum){
    double order_total = myvisitor->getTotal();
    this->discountGame();
    if (order_total >= 500){
        myvisitor->setDiscount(.10);
    }

    if (userNum == this->randomNum){
        myvisitor->setDiscount(this->discountPercent + .20);
        cout << "Congrats! We're adding a 20% discount to your active discounts!" << endl;
    }
    else{
        cout << "Aw! Unfortunately the number was " << this->randomNum << endl;
    }
}

void Discount::discountGame(){
    srand(time(0));
    this->randomNum = rand() % 5 + 1;
}