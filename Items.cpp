#include "Items.hpp"
#include <iostream>
using namespace std;
#include <iomanip>

void Items::display(){
    cout << fixed;
    cout << setprecision(2);

    if(this->name == "Flat Tire Repair"){
        cout << this->name << "\t\t" << this->price << endl;
    }
    else if(this->name == "Tires" || this->name == "Window" || this->name == "Wrench"){
        cout << this->name << "\t\t\t\t" << this->price << endl;
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