#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main()
{
	
	// Appropriate variables // 

	int response;
	int radius;
	int area;
	float celsius;
	float fahrenheit;

	// Calculating the area of a circle, given the radius //

	do {
		cout << "Press no.1 to find the area ";
		cin >> response;
		switch (response) 
		{
			case 1:
				cout << "Enter the radius of the circle: " << endl;
				cin >> radius;
				cout << "The Area of the circle given the radius is: " << 3.14 * radius * radius << endl;
				break;
		}
			cout << "Press no.1 to continue or no.2 to exit ";
			cin >> response;

	} while (response == 1);

	// Converting a temperature from Celsius to Fahrenheit //

	cout << "Please enter the temperature for Celsius: " << endl;
	cin >> celsius;

	// converting to fahrenheit //

	fahrenheit = (celsius * 9 / 5) + 32;
	cout << celsius << " Celsius is equal to " << fahrenheit << " Fahrenheit" << endl << endl;

	// Sorting an array of integers in ascending order //

	int arr[5] = { 109,4,12,7,1 };
	int temp;
	int lowest;
	
	cout << "Arrays in order: " << endl;
	for (int i = 0; i < 5; i++) 
	{
		lowest = i;
		for (int j = i + 1; j < 5; j++) {
			if (arr[j] < arr[lowest]) {
				lowest = j;
			}
		}
		if (i != lowest) {
			temp = arr[i];
			arr[i] = arr[lowest];
			arr[lowest] = temp;
		}
		cout << arr[i] << " ";
	
	}
	cout << endl;
	// Finding the largest number in an array of integers after the loop //
	cout << arr[4] << endl;

	string str;

	// Reversing a string //
	cout << "Please type in a word: " << endl;
	cin >> str;
	cout << "The word you chose is " << str << endl;
	str = string(str.rbegin(), str.rend());
	cout << "Word in reverse: " << endl;
	cout << str << endl;

	// Checking whether a number is prime or not //
	
	int input = 0;

	cout << "Type a number: " << endl;
	cin >> input;
	
	for (int i = 2;i < input; i++) {
		if (input % i == 0) 
		{
			temp++;
		}
	}
	if (temp == 2) {
		cout << "number is Prime" << endl;
	}
	else {
		cout << "number is not Prime" << endl;
	}

	return 0;
}