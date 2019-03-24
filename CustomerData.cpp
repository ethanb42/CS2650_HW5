#include "CustomerData.h"
#include <iostream>


CustomerData::CustomerData() : PersonData()
{
	customerNumber = 0;
	mailingList = false;
}


CustomerData::CustomerData(int c, bool m, std::string f, std::string l, std::string a, std::string ci, std::string s, std::string z, std::string p) :PersonData(f, l, a, ci, s, z, p)
{
	customerNumber = c;
	mailingList = m;
	
}


void CustomerData::setcustomerNumber(int c)
{
	customerNumber = c;
}

void CustomerData::setmailingList(bool m)
{
	mailingList = m;
}

int CustomerData::getcustomerNumber()
{
	return customerNumber;
}

bool CustomerData::getmailingList()
{
	return mailingList;
}

std::string CustomerData::printMailList()
{
	if (mailingList == false) {
		return "false";
	}
	else {
		return "true";
	}
	
}

