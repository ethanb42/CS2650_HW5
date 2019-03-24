#include <iostream>
#include "PreferredCustomer.h"



PreferredCustomer::PreferredCustomer() : CustomerData()
{
}

PreferredCustomer::PreferredCustomer(double p) :CustomerData()
{
	//sets the appropriate values for purchase and discount
	purchasedAmount = 0;
	purchase(p);
	

}

void PreferredCustomer::setpurchasedAmount(double p)
{
	if (p < 0) {
		//can't give away money ha
		std::cout << "Can not set negative purchase amount" << std::endl;
	}
	else {
		purchasedAmount = p;
	}
}

void PreferredCustomer::setdiscountLevel(double d)
{
	discountLevel = d;

}

double PreferredCustomer::getpurchasedAmount()
{
	return purchasedAmount;
}

double PreferredCustomer::getdiscountLevel()
{
	if (purchasedAmount >= 2000) {
		return 0.1;
	}
	else if (purchasedAmount >= 1500) {
		return 0.07;
	}
	else if (purchasedAmount >= 1000) {
		return 0.06;
	}
	else if (purchasedAmount >= 500) {
		return 0.05;
	}
	else {
		return 0;
	}
}

void PreferredCustomer::purchase(double buy)
{
	if (buy < 0) {
		std::cout << "You can't give away money" << std::endl;

	}
	else {
		purchasedAmount += buy;
		//discount level update
		setdiscountLevel(getdiscountLevel());
	}
}


