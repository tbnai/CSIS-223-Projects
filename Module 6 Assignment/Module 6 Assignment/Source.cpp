#include<iostream>
#include<string>

using namespace std;

int main()
{

	// Finding the largest number in an array of integers //
	// Reversing a string //
	// Checking whether a number is prime or not //
	
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
	
	for (int i = 0; i < 5; i++) 
	{
		lowest = i;
		for()
	}



	return 0;
}