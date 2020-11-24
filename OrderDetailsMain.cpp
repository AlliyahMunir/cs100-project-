#include <iostream>
#include <string>
#include "Order.hpp"
#include "Items.hpp"
using namespace std;

int main()
{
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
    cout << "Total cost:\t" << order2->cost() << endl;

	return 0;
}
