#pragma once

#include <string>
class PersonData
{
private: 
	std::string firstName, lastName, address, city, state, zip, phone;

public:
	PersonData(); //default constructor
	PersonData(std::string f, std::string l, std::string a, std::string c, std::string s, std::string z, std::string p );

	//setter functions
	void setfirstName(std::string f);
	void setlastName(std::string l);
	void setAddress(std::string a);
	void setCity(std::string c);
	void setState(std:: string s);
	void setZip(std::string z);
	void setPhone(std::string p);

	//getter functions
	std::string getfirstName();
	std::string getlastName();
	std::string getAddress();
	std::string getCity();
	std::string getState();
	std::string getZip();
	std::string getPhone();

};

