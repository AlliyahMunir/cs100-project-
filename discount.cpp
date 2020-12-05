#include "discount.hpp"
#include <iostream>
#include <cstdlib>
#include <iomanip>  
void Discount::accept(Visitor* myvisitor, double userNum){
    double order_total = myvisitor->getTotal();
    this->discountGame();
    if (order_total >= 500){
        myvisitor->setDiscount(.10);
    }

    cout << fixed << setprecision(0);
    if (userNum == this->randomNum){
        myvisitor->setDiscount(myvisitor->getRawDiscount() + .20);
        cout << "Congrats! The lucky number was " << this->randomNum << "! We're adding a 20% discount to your active discounts!" << endl;
    }
    else{
        cout << "Aw! Unfortunately the number was " << this->randomNum << endl;
        cout << "Continuing to payment..." << endl;
    }
}

void Discount::discountGame(){
    srand(time(0));
    this->randomNum = rand() % 5 + 1;
}
