#include<iostream>
#include<string>

using namespace std;

// declaring a struct named "aquarium" // 
struct aquarium {

	// what an aquarium needs // 
	string decoration;
	string creature;
	string equipment;

};


int main() {

	// identifying variables // 
	aquarium aqua1;
	aqua1.decoration = "plants";
	aqua1.creature = "fish";
	aqua1.equipment = "filter";


	cout << "This is what you need to start up an aquarium: " << aqua1.decoration << ", " << aqua1.creature << ", " << aqua1.equipment << endl;
}