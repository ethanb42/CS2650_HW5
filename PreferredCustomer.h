#pragma once
#include "CustomerData.h"
class PreferredCustomer : public CustomerData
{
private:
	double purchasedAmount;
	double discountLevel;
public:
	PreferredCustomer();
	PreferredCustomer(double p);

	//setter functions
	void setpurchasedAmount(double p); 
	void setdiscountLevel(double d);

	//getter functions
	double getpurchasedAmount();
	double getdiscountLevel();

	void purchase(double buy); //adds to the purchased amount and checks if it needs to update discount

	
};

