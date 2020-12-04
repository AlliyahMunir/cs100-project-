#include "Items.hpp"
#include <iostream>
using namespace std;


void Items::display(){
    if (this->name == "Oil Change" || this->name == "Flat tire Repair"){
        cout << this->name << "\t\t" << this->price << endl;

    }
    else{
        cout << this->name << "\t\t\t" << this->price << endl;
    }
}

int Items::count(){
    return 1;
}

double Items::cost(){
    return this->price;
}