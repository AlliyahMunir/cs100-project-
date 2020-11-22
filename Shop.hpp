#ifndef SHOP_HPP
#define SHOP_HPP
#include <iostream>
#include <string>
#include "ReviewStrategy.hpp"
using namespace std;
class ReviewStrategy;
class Shop
{
protected:
        int _id;
        string _rate;
        ReviewStrategy* _strategy;

public:
Shop(string rate, int id) : _rate(rate), _id(id), _strategy(0) { } //Constructor: rate, id
void setReviewStrategy(ReviewStrategy* s);
void review(Shop *rate); //find review rating of category
void setID(int id) { this->_id = id; } //set values
const string& getReview() const { return this->_rate; } //get values

};

class Client : public Shop  
{
public:
	Client(string rate, int id) : Shop(rate, id) { }
};
#endif
