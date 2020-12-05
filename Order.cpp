#include "Order.hpp"
#include <iostream>
using namespace std;

void Order::display(){
    cout << "Order Number:\t#" << this->orderNum << endl;
    for (auto item: this->contents){
        item->display();
    }
}

int Order::count(){
    int total = 0;
    for (auto item: this->contents){
        total += item->count();
    }
    return total;
}

void Order::add(Base* product){
    this->contents.push_back(product);
    cout << "Product has been added." << endl;
}

double Order::cost(){
    double totalcost=0;
    for (auto item: this->contents){
        totalcost += item->cost();
    }
    return totalcost;
}

void Order::accept(Visitor* myvisitor){
    double orderTotal=0;
    for (auto item: this->contents){
        orderTotal += item->cost();
        myvisitor->storeItems(item);
    }
    myvisitor->visit_order(orderTotal);
}