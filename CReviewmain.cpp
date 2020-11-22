#include <iostream>
#include <string>
#include "Shop.hpp"
using namespace std;

int main()
{
	Shop cparts("\nCar Parts\n", 2737478); //Category and ID #
	FourStarReview four;
	cparts.setReviewStrategy(&four); //overall car parts rating: four

	Shop oils("\nOils and Fluids\n", 9657488);
	FiveStarReview five;
	oils.setReviewStrategy(&five); //overall oils and fluids rating: five

	Shop tools("\nTools\n", 8997200);
	tools.setReviewStrategy(&five); //overall tools rating: five

        Shop additions("\nAdditions\n", 1239875);
        additions.setReviewStrategy(&four); //overall additions rating: four

	Client Product ("\nRefundability: YES\n",0); //all products(client) are refundable

	cparts.review(&Product); //all categories have identical refundability 
	oils.review(&Product);
	tools.review(&Product);
	additions.review(&Product);
	return 0;
}
