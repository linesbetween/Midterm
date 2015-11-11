#include "Name.h"
#include "Contact.h"
#include <iostream>
#include <iomanip>

using namespace std;

int Contact::numberOfContacts = 0;//  initialize static variable here

Contact::Contact(){
	name = Name();
	numberOfPhoneNumbers = 0;
	//phoneNumbers pointer still points to NULL
	//numberOfContacts++; // don't add number if empty contacts are created
	
}

Contact::Contact(string first, string last, int num){
	name = Name(first, last);
	numberOfPhoneNumbers = num;
	phoneNumbers = new string[num];//
	numberOfContacts++;
	
}


Contact::Contact(Contact &other){
	name = Name(other.name.getFirstName(), other.name.getLastName());
	numberOfPhoneNumbers = other.getNumberOfPhoneNumbers();
	phoneNumbers = other.getPhoneNumberArray();  //TODO, use getPhoneNumberArray()
	numberOfContacts++;
}

Contact::~Contact(){
	//TODO delete name
	cout<<"destroyed";
	delete[] phoneNumbers;
	//numberOfContacts--;
	
	
}

void Contact::setNumberOfPhoneNumbers(int num){
	numberOfPhoneNumbers = num;
}

int Contact::getNumberOfPhoneNumbers(){
	return numberOfPhoneNumbers;
}

string* Contact::getPhoneNumberArray(){
	return phoneNumbers;
}

void Contact::setPhoneNumberArray(string *list){ //pass pointer
	//copy the input array to phoneNumbers.
	phoneNumbers=list;
	/*
	for (int i = 0; i < numberOfPhoneNumbers; i++){
		phoneNumbers[i] = list[i];
	}
	*/
}


int Contact::showNumberOfContacts(){
	cout << "\n Number of contacts: " << numberOfContacts<<"\n";
	return numberOfContacts;
}

void Contact::displayContact(){
	name.printName();
	cout << "Number of phones: " << numberOfPhoneNumbers ;
	for (int i = 0; i < numberOfPhoneNumbers; i++){
		cout << "\n";
		cout << "Phone #" << i+1 << ": " << phoneNumbers[i];
	}
	cout << "\n";
}