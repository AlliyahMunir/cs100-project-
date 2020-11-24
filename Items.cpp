#include "Items.hpp"
#include <iostream>
using namespace std;


void Items::display(){
    cout << this->name << "\t\t" << this->price << endl;
}

int Items::count(){
    return 1;
}

double Items::cost(){
    return this->price;
}