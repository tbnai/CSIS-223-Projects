#include<iostream>
#include<string>
using namespace std;

// Details of students // 
struct Student {
	string name;
	int age;
	double GPA;
};

int main() {

	// Identifying how many students // 
	Student student[3];

	// Input details for each student // 
	for (int i = 0; i < 3; i++) {
		cout << "Please enter details for Student " << i + 1 << endl;
		cout << "Name: ";
		getline(cin, student[i].name);
		cout << "Age: ";
		cin >> student[i].age;
		cout << "GPA: ";
		cin >> student[i].GPA;
		cin.ignore();
	}
	cout << endl;

	// Output display of details // 
	for (int i = 0;i < 3;i++) {
		cout << "Student " << i + 1 << endl;
		cout << "Name " << student[i].name << endl;
		cout << "Age " << student[i].age << endl;
		cout << "GPA " << student[i].GPA << endl;
	}


	return 0;
}