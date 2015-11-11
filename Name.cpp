#include"Name.h"
#include <iostream>
#include <iomanip>

using namespace std;

Name::Name(){
	firstName = "default";
	lastName = "default";
}

Name::Name(string first, string last){
	firstName = first;
	lastName = last;
}

void Name::setFirstName(string s){
	firstName = s;
}

void Name::setLastName(string s){
	lastName=s;
}

void Name::printName() {
	cout << "\n First name is: "<<firstName<<", Last name is: "<< lastName<<"\n";
}

//two getters already implemented in hearder file

