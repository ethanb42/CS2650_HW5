#include "PersonData.h"



PersonData::PersonData()
{
	firstName = "";
	lastName = "";
	address = "";
	city = "";
	state = "";
	zip = "";
	phone = "";

}



PersonData::PersonData(std::string f, std::string l, std::string a, std::string c, std::string s, std::string z, std::string p)
{
	firstName = f;
	lastName = l;
	address = a;
	city = c;
	state = s;
	zip = z;
	phone = p;
}

void PersonData::setfirstName(std::string f)
{
	firstName = f;
}

void PersonData::setlastName(std::string l)
{
	lastName = l;
}

void PersonData::setAddress(std::string a)
{
	address = a;
}

void PersonData::setCity(std::string c)
{
	city = c;
}

void PersonData::setState(std::string s)
{
	state = s;
}

void PersonData::setZip(std::string z)
{
	zip = z;
}

void PersonData::setPhone(std::string p)
{
	phone = p;
}

std::string PersonData::getfirstName()
{
	return firstName;
}

std::string PersonData::getlastName()
{
	return lastName;
}

std::string PersonData::getAddress()
{
	return address;
}

std::string PersonData::getCity()
{
	return city;
}

std::string PersonData::getState()
{
	return state;
}

std::string PersonData::getZip()
{
	return zip;
}

std::string PersonData::getPhone()
{
	return phone;
}
