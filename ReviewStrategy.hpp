#ifndef REVIEWSTRATEGY_HPP
#define REVIEWSTRATEGY_HPP

#include "Shop.hpp"
class Shop; 
//prevents error from  ReviewStrategy and Shop use 
class ReviewStrategy
{
public:
	virtual void performReviews(Shop* Reviews,Shop* rate) = 0;
};

class FourStarReview : public ReviewStrategy //different Review Behaviors: four and five
{
	virtual void performReviews(Shop* Reviews,Shop* rate);
};

class FiveStarReview : public ReviewStrategy
{
        virtual void performReviews(Shop* Reviews,Shop* rate);
};

#endif //REVIEWSTRATEGY_HPP
