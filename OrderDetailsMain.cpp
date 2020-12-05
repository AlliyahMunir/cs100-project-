#include <iostream>
#include <string>
#include "Order.hpp"
#include "Items.hpp"
#include "visitor.hpp"
#include "discount.hpp"
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    //statements for user
    cout << "******WOW REPAIRS******" << endl;
    cout << "*****by Auto Squad*****\n"<<endl;
    cout << "Disclaimer: You have a balance of $850 that you may spend here." << endl;
    cout << "Today's special: Spend $500 and get 10% off!\n" << endl;

    //creates base objects for each item on menu
    Base* tires = new Items("Tires", 104.99);
    Base* window = new Items("Window", 60.00);
    Base* oil = new Items("Oil Change", 99.99);
    Base* wrench = new Items("Wrench", 45.00);
    Base* flatTire = new Items("Flat Tire Repair", 90.00);
    Base* floorMats = new Items("Floor Mats", 200.00);
    Base* realignment = new Items("Realignment", 250.00);
    Base* seatCovers = new Items("Seat Covers", 350.00);

    //create visitor(customer)
    Visitor* visitor = new Visitor();   //works

    //creates random order number
    srand(time(0));
    double orderNum = rand() % 100 + 1;
    Order* order1 = new Order(orderNum);

    //create discount
    Discount* discount = new Discount();

    //loop the user input so they can add items to their order
    //exits when user enters 9
    //every time user adds item, it adds to order class which utilizes
    //composite pattern
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
                cin.ignore(100000, '\n');
        }
    }

    //order object accepts visitor
    //essentially fills visitor with info of their order
    order1->accept(visitor);

    if (visitor->getTotal() == 0){
        cout << "You wish to exit without adding anything to order!" << endl;
        cout << "Thank you for coming in! Please come again!" << endl;
        exit(0);
    }
    //display current order
    cout << "\nCurrent Items" << endl;
    cout << "Product\t\t\t\tPrice" << endl;
    visitor->displayItems(); 
    //allow user to apply discounts or checkout
    cout << "\nPress 1 to apply discounts or press 2 to continue to checkout." << endl;
    int discountNum;
    
    //input validation
    while(discountNum != 1 && discountNum != 2){
        cin >> discountNum;
        if (discountNum != 1 && discountNum != 2){
            cout << "Invalid input" << endl;
            cin.clear();
            cin.ignore(100000, '\n');
        }
    }
    //This loop gets users input for discount. user guesses 1-5 for lucky discount
    //if user enters 2 then immediately checkout
    bool flag2 = true;
    while(flag2){
        if(discountNum == 1){
            cout << "Feeling lucky? Enter 1-5 for a special discount!" << endl;
            double userNum;
            cin >> userNum;
            discount->accept(visitor, userNum);  //works
            flag2 = false;
        }
        else if(discountNum == 2){
            flag2 = false;
        }
    }

    //prints receipt
    cout << "\n********** RECEIPT **********" << endl << endl;
    visitor->displayItems();
    cout << "\nSubtotal: $" << visitor->getTotal() << endl;
    cout << fixed << setprecision(0) << "Discount: " << visitor->getDiscount() << "%" << endl;
    double total, discountSub;
    discountSub = visitor->getTotal() * visitor->getRawDiscount();
    total = visitor->getTotal() - discountSub;
    cout << fixed << setprecision(2) << "Total: $" << total << endl;

    //for fun
    //gives user option to pay, steal or leave
    cout << "Options: 1. Pay, 2. Steal, 3. Leave" << endl;
    cin.clear();
    cin.ignore(100000, '\n');
    int userCheckNum;
    bool flag3 = true;

    //loop to get user choice for pay steal or leave
    while (flag3){
        cin >> userCheckNum;
        if (userCheckNum == 1){
            visitor->pay(total);
            if (visitor->getPayed()){
                cout << "Thank you for coming in! Please come again!" << endl;  
                flag3 = false;
            }
            cin.clear();
            cin.ignore(100000, '\n');
        }
        else if (userCheckNum == 2){
            visitor->steal();
            flag3 = false;
        }
        else if (userCheckNum == 3){
            cout << "Thank you for coming in! Please come again!" << endl;
            flag3 = false;
        }
        else{
            cout << "Invalid input." << endl;   
            cin.clear();
            cin.ignore(100000, '\n');
        }
    }

    
	return 0;
}
