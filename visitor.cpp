#include "visitor.hpp"
#include <iostream>
using namespace std;

void Visitor::visit_order(double total){
    this->orderTotal = total;
}

double Visitor::getTotal(){
    return this->orderTotal;
}

void Visitor::storeItems(Base* product){
    this->items.push_back(product);
}

void Visitor::displayItems(){
    for (auto item: this->items){
        item->display();
    }
}

void Visitor::setDiscount(double num){
    this->discount = num;
}

double Visitor::getDiscount(){
    if (this->discount != 0){
        return discount*100;
    }
    else{
        return 0;
    }
}


void Visitor::showMenu(){
    cout << "1. Tires\t\t$104.99" << endl;
    cout << "2. Window\t\t$60.00" << endl;
    cout << "3. Oil Change\t\t$99.99" << endl;
    cout << "4. Wrench\t\t$45.00" << endl;
    cout << "5. Flat tire Repair\t$90.00" << endl;
    cout << "6. Floor mats\t\t$200.00" << endl;
    cout << "7. Realignment\t\t$250.00" << endl;
    cout << "8. Seat covers\t\t$350.00" << endl;
    cout << "9. Exit menu\n";
}