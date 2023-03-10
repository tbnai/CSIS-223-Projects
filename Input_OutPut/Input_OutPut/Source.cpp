#include<iostream>
#include<string>

using namespace std;

int main() {

	// Variables //
	int age = 0;
	float num = 0;
	string color;
	string name;
	
	// welcome message to the user //
	cout << "Please state your name: ";
	cin >> name;
	cout << "Welcome " << name << "!" << endl;
	// prompt the user to enter their age //
	cout << "Please enter your age: ";
	cin >> age;
	// message that comfirms the users age // 
	cout << "Your age is " << age << "!" << endl;
	// prompt the user to enter their favorite color //
	cout << "Please enter your favorite color: ";
	cin >> color;
	// a message that confurms the users favorite color // 
	cout << "Your favorite color is " << color << "!" << endl;
	// prompt the user to enter a decimal number //
	cout << "Please enter a decimal number: ";
	cin >> num;
	// message that confirms the users input //
	cout << "You entered the number " << num << "!" << endl;
	// goodbye message to the user // 
	cout << "Thank you good bye!!" << endl;


	return 0;
}