#include <iostream>
#include <string>
#include "ReviewStrategy.hpp"

using namespace std;

void FourStarReview::performReviews(Shop *Reviews, Shop *rate) //every category in Shop contains Review and Rate
{
cout<<Reviews->getReview() << "Rating: **** " << rate->getReview() << endl;
} //lowest category rate: 4stars


void FiveStarReview::performReviews(Shop *Reviews, Shop *rate)
{
cout<<Reviews->getReview() << "Rating: ***** " << rate->getReview() << endl;
} //highest category rate: 5stars

