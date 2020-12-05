#include "visitor.hpp"
#include <iostream>
#include <iomanip>
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

double Visitor::getRawDiscount(){
    return this->discount;
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

void Visitor::pay(double orderTot){
    if (this->balance >= orderTot){
        cout << "You have payed the bill." << endl;
        cout << "Current balance: " << fixed << setprecision(2) << this->balance - orderTot << endl;
        this->payed = true;
    }
    else if (this->balance < orderTot){
        cout << "You do not have enough money. Please select another option." << endl;
        this->payed = false;
    }
}

void Visitor::steal(){
    srand(time(0));
    int stealNum = rand() % 4 + 1;
    cout << endl;
    switch(stealNum){
        case 1:
            cout << "You grab all the items off the counter and run towards the door. " << endl;
            cout << "The worker chases after you and beats you to the door. " << endl;
            cout << "You hit him with a spin move and successfully escape. " << endl;
            cout << "Congratulations you have successfully stolen and evaded. " << endl;
            break;
        case 2: 
            cout << "You grab all the items off the counter and run towards the door. " << endl;
            cout << "The employee grabs a baseball bat and chases you. " << endl;
            cout << "You trip and fall and are caught. " << endl;
            cout << "You have failed to steal the items. " << endl;
            break;
        case 3:
            cout << "You grab all the items off the counter and run towards the door. " << endl;
            cout << "A bystander blocks the doorway and you're forced towards the back. " << endl;
            cout << "The employee blocks the other exit and you are trapped. " << endl;
            cout << "You have failed to steal the items. " << endl;
            break;
        case 4:
            cout << "You grab all the items off the counter and run towards the door. " << endl;
            cout << "A security guard is eating his doughnut outside. " << endl;
            cout << "The employee yells and the guard drops his doughnut and catches you. " << endl;
            cout << "You have failed to steal the items. " << endl;
            break;
    }
    
}

bool Visitor::getPayed(){
    return this->payed;
}