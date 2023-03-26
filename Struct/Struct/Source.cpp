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
namespace NumofFish {
	int creatures(int x, int y) {
		return x + y;
	}
}

int main() {

	int num1 = 5;
	int num2 = 4;
	int sum = NumofFish::creatures(num1, num2);

	// identifying variables // 
	aquarium aqua1;
	aqua1.decoration = "plants";
	aqua1.creature = "fish";
	aqua1.equipment = "filter";


	aquarium aqua2;
	aqua2.decoration = "rocks";
	aqua2.creature = "crabs";
	aqua2.equipment = "heater";
	



	cout << "This is what you need for aquarium one: " << aqua1.decoration << ", " << aqua1.creature << ", " << aqua1.equipment << endl;
	cout << "This is what you need for aquarium two: " << aqua2.decoration << ", " << aqua2.creature << ", " << aqua2.equipment << endl;
	cout << "the total amount of creatures in both tanks are: " << sum << endl;

}