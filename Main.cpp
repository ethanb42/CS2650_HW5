//the main for homework 5

#include "CustomerData.h"
#include "PreferredCustomer.h"
#include <iostream>


int main() {



	//testing question 7
	//persondata and customer data
	std::cout << "Testing Homework Question 7\n\n" << std::endl;
	//make a default customer
	CustomerData bob = CustomerData();

	//make a real customer
	CustomerData jim = CustomerData(0001, true, "Billy", "Bronco","1717 Horse Way", "Pomona", "California", "91768", "909-869-7659");
	
	std::cout << "Pritning out default constructed customer!\n-------------------------------\n" << std::endl;
	std::cout << "Name: " << bob.getfirstName() << " "<< bob.getlastName()<< "\nAddress: "<< bob.getAddress() << ", "<< bob.getCity() << ", "<< bob.getState()<<
		", "<< bob.getZip() << "\nPhone Number: "<< bob.getPhone() << "\nCustomer Number: "<< bob.getcustomerNumber()<< "\nMailingList: " << bob.printMailList() << std::endl;

	std::cout << "\nPritning out created constructed customer!\n-------------------------------\n" << std::endl;
	std::cout << "Name: " << jim.getfirstName() << " " << jim.getlastName() << "\nAddress: " << jim.getAddress() << ", " << jim.getCity() << ", " << jim.getState() <<
		", " << jim.getZip() << "\nPhone Number: " << jim.getPhone() << "\nCustomer Number: " << jim.getcustomerNumber() << "\nMailingList: " << jim.printMailList() << std::endl;

	std::cout << "\n-----------------------------------\nQuestion 7 Testing complete\n\n" << std::endl;
	//testing question 7 finished

	std::cout << "Testing Question 8\n" << std::endl;
	//testing question 8
	//create a preferred customer

	PreferredCustomer pref = PreferredCustomer(0); //a prefered customer with 0 purchases
	//set the relevant data for this customer
	pref.setfirstName("Cool");
	pref.setlastName("Guy");
	pref.setAddress("1919 Horse Way");
	pref.setCity("Pomona");
	pref.setState("California");
	pref.setZip("91768");
	pref.setmailingList(true);
	pref.setPhone("909-213-9821");
	pref.setcustomerNumber(20034);

	std::cout << "Printing out created PreferredCustomer!\n---------------------------\n" << std::endl;
	std::cout << "Name: " << pref.getfirstName() << " " << pref.getlastName() << "\nAddress: " << pref.getAddress() << ", " << pref.getCity() << ", " << pref.getState() <<
		", " << pref.getZip() << "\nPhone Number: " << pref.getPhone() << "\nCustomer Number: " << pref.getcustomerNumber() << "\nMailingList: " << pref.printMailList() << 
		"\nPurchased: $" << pref.getpurchasedAmount()<< "\nDiscount:" << pref.getdiscountLevel()<< std::endl;
	//update purchase level
	std::cout << "\nCustomer purchased $500." << std::endl;
	pref.purchase(500.00);
	//check new discount
	std::cout << "Purchased: $" << pref.getpurchasedAmount() << "\nDiscount:" << pref.getdiscountLevel() << std::endl;
	//update purchase level
	std::cout << "\nCustomer purchased $1500." << std::endl;
	pref.purchase(1500.00);
	//check new discount
	std::cout << "Purchased: $" << pref.getpurchasedAmount() << "\nDiscount:" << pref.getdiscountLevel() << std::endl;


	return 0;


}

