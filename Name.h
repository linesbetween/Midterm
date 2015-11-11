#ifndef NAME_H
#define NAME_H
#include <string>
using namespace std;
class Name {
private:
	string firstName;
	string lastName;
public:
	Name();
	Name(string, string);
	void setFirstName(string s);
	void setLastName(string s);
	void printName();
	string getFirstName() { return firstName; }//moved ';' inside }
	string getLastName() { return lastName; }

};
#endif