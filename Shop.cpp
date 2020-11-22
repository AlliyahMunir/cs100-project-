#include "Shop.hpp"

void Shop::review(Shop *rate)

{
if(this->_strategy)
this->_strategy->performReviews(this, rate); //create if else statement
}

void Shop::setReviewStrategy(ReviewStrategy *s)
{	this->_strategy = s; }
