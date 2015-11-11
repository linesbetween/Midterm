#include "Name.h"
#include "Contact.h"
#include <iostream>
using namespace std;

int main(){

	string first;
	string last;
	int num;

	//test name.h
	/*
	cout << "below is a tester for name.h \n"
		<< "please type a first name \n";
	cin >> first;
	cout << "please type a last name \n";
	cin >> last;
	Name alice(first, last);
	alice.printName();
	cout 
		<< "please type a NEW first name \n";
	cin >> first;
	cout << "please type a NEW last name \n";
	cin >> last;
	alice.setFirstName(first);
	alice.setLastName(last);
	alice.printName();	//missing '()'
	*/


	//test contact.h
	const int CAP = 10;
	int i = 0;
	char condition ='y';
	Contact list[CAP];//array of contacts, the max capacity is 100;
	while ((i < CAP) && (condition == 'y')) {
		
		cout << "Please enter contact first name \n";
		cin >> first;
		cout << "Please enter contact last name \n";
		cin >> last;
		cout << "Please enter number of phone numbers \n";
		cin >> num;
		list[i] = Contact(first, last, num);
		list[i].showNumberOfContacts();

		//use temp to store user input
		string * temp = new string[num]; //can't definfe array with variable, use pointer like the header cpp does
		for (int j = 0; j < num; j++) {
			cout << "please enter phone number \n";
			cin >> temp[j];

		}
		list[i].setPhoneNumberArray(temp);
		list[i].displayContact();
		i++;
		cout << "conitnue? y/n (lowercase)";		
		cin >> condition;
	}

	for (int k = 0; k < i; k++) {
		list[k].displayContact();
	}
		

	system("pause");
	return 0;
}