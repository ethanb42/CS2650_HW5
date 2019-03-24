#pragma once
#include "PersonData.h"
class CustomerData : public PersonData
{
private: 
	int customerNumber;
	bool mailingList;
public:
	CustomerData(); //default constructor
	//overloaded constructor
	CustomerData(int c, bool m, std::string f, std::string l, std::string a, std::string ci, std::string s, std::string z, std::string p);
	
	//setter and getters
	void setcustomerNumber(int c);
	void setmailingList(bool m);

	int getcustomerNumber();
	bool getmailingList();

	//returns a string for true or false based on mailingList var
	std::string printMailList();
};

