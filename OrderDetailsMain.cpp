#include <iostream>
#include <string>
#include "Order.hpp"
#include "Items.hpp"
#include "visitor.hpp"
#include "discount.hpp"
#include <cstdlib>
using namespace std;

int main()
{
    /*
    Base* tires = new Items("Tires", 5.99);
    Base* hood = new Items("Hood", 10.99);
    Order* order1 = new Order(5);
    order1->add(tires);
    order1->add(hood);
    order1->display();
    cout << "Total item count: " << order1->count() << endl;
    cout << "Total cost:\t" << order1->cost() << endl;


    Base* wrench = new Items("Wrench", 21.99);
    Base* rims = new Items("Rims", 429.99);
    Base* chair = new Items("Chair", 212.99);
    Order* order2 = new Order(21);
    order2->add(wrench);
    order2->add(rims);
    order2->add(chair);
    order2->display();
    cout << "Total item count: " << order2->count() << endl;
    cout << "Total cost:\t" << order2->cost() << endl;*/

    cout << "******WOW REPAIRS******" << endl;
    cout << "*****by Auto Squad*****\n"<<endl;
    cout << "Today's special: Spend 500 and get 10% off!\n" << endl;

    Base* tires = new Items("Tires", 104.99);
    Base* window = new Items("Window", 60.00);
    Base* oil = new Items("Oil Change", 99.99);
    Base* wrench = new Items("Wrench", 45.00);
    Base* flatTire = new Items("Flat Tire Repair", 90.00);
    Base* floorMats = new Items("Floor Mats", 200.00);
    Base* realignment = new Items("Realignment", 250.00);
    Base* seatCovers = new Items("Seat Covers", 350.00);

    Visitor* visitor = new Visitor();   //works

    srand(time(0));
    double orderNum = rand() % 100 + 1;
    Order* order1 = new Order(orderNum);
    Discount* discount = new Discount();
    bool flag = true;
    int userInput;
    cout << "********** MENU **********" << endl;
    visitor->showMenu();
    while(flag){
        cin >> userInput;
        switch(userInput){
            case 1:
                order1->add(tires);
                break;
            case 2:
                order1->add(window);
                break;
            case 3:
                order1->add(oil);
                break;
            case 4:
                order1->add(wrench);
                break;
            case 5:
                order1->add(flatTire);
                break;
            case 6:
                order1->add(floorMats);
                break;
            case 7:
                order1->add(realignment);
                break;
            case 8:
                order1->add(seatCovers);
                break;
            case 9:
                flag = false;
                break;
            default:
                cout << "Invalid input" << endl;
                cin.clear();
        }

        //order1->add(tires);
        //order1->add(oil);
        //order1->add(tires);
    }
    order1->accept(visitor);    //works
    //cout << visitor->getTotal();    //works
    cout << "\nCurrent Items" << endl;
    visitor->displayItems(); //works
    //cout << "Your discount is " << visitor->getDiscount() << "%" << endl; // works
    cout << "Press 1 to apply discounts." << endl;
    cout << "Feeling lucky? Enter 1-5 for a special discount!" << endl;
    double userNum;
    cin >> userNum;
    discount->accept(visitor, userNum);  //works



    

    
	return 0;
}
