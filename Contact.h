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

	Name getName()
	{return name;}//added
	void setName(string first, string last)
	{name.setFirstName(first);
	name.setLastName(last);}//added

	void setNumberOfPhoneNumbers(int);
	int getNumberOfPhoneNumbers();

	void setPhoneNumberArray(string *); //added
	string * getPhoneNumberArray();// renameed

	void increaseNumberOfContacts(){numberOfContacts++;};//added
	int showNumberOfContacts();

	void displayContact();
};

#endif