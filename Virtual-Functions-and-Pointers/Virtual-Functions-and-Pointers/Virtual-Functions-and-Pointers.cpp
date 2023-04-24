#include <iostream>
using namespace std;

class Animal {
public:
	virtual void Sound() const {
		cout << "Animals make a sound." << endl;
	}
};
class Dog : public Animal {
public:
	void Sound() const override{
		cout << "Dog says woof!" << endl;
	}
};
class Cat : public Animal {
public:
	void Sound() const override {
		cout << "Cat says meow!" << endl;
	}
};

class Vehicle {
public:
	virtual void SomeSound() const = 0;
};
// Derived class 1 //
class Car : public Vehicle {
public:
	void SomeSound() const override {
		cout << "Vroom!";
	}
};
// Derived class 2 // 
class Bike : public Vehicle {
public:
	void SomeSound() const override {
		cout << "Ding Ding!";
	}
};



int main()
{
	// pointers //
	int x = 10;

	// declare a pointer variable and assign its value to x's memory address //
	int* p = &x;

	// output p // 
	cout << "***Pointers Example***" << endl;
	cout << p << endl << endl;

	// virtual functions // 
	cout << "***Virtual Function Example***" << endl;
	Animal* Animals[] = { new Animal(), new Dog, new Cat() };
	//outputing animal sound
	for (const auto& animals : Animals) {
		animals->Sound();
	}
	cout << endl;


	// abstract classes //
	Car car;
	Bike bike;

	cout << "***Abstract Classes Example***" << endl;
	// Output for Car // 
	car.SomeSound();
	cout << endl;
	// Output for Bike //
	bike.SomeSound();
	cout << endl;

}
