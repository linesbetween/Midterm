#ifndef CONTACT_H
#define CONTACT_H
#include "Name.h"
#include <string>
using namespace std;
class Contact{
private:
	Name name;
	string * phoneNumbers; //= nullptr;
	int numberOfPhoneNumbers;
	static int numberOfContacts;

public:
	Contact();
	Contact(string, string, int);
	Contact(Contact &);
	~Contact();

	void setNumberOfPhoneNumbers(int);
	int getNumberOfPhoneNumbers();
	string * getPhoneNumberArray();// renameed
	void setPhoneNumberArray(string *); //added
	int showNumberOfContacts();
	void displayContact();
};

#endif