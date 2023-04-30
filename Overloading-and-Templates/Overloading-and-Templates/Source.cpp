#include<iostream>

using namespace std;


// Operator Overload //
class Vector {
public:
    Vector(double x, double y) : x_(x), y_(y) {}

    Vector operator+(const Vector& other) const {
        return Vector(x_ + other.x_, y_ + other.y_);
    }

    Vector operator-(const Vector& other) const {
        return Vector(x_ - other.x_, y_ - other.y_);
    }

    double getX() const {
        return x_;
    }

    double getY() const {
        return y_;
    }

private:
    double x_;
    double y_;
};

// Function Overloading //
class MyClass {
public:
    int multiply(int a, int b) {
        return a * b;
    }

    double multiply(double a, double b) {
        return a * b;
    }
};



int main() {

 // Operator Overload //

    Vector v1(1, 2);
    Vector v2(3, 4);
    
    cout << "***Operator Overload***" << endl << endl;
    Vector v3 = v1 + v2;
    cout << "v1 + v2 = (" << v3.getX() << ", " << v3.getY() << ")" << endl;

    Vector v4 = v2 - v1;
    cout << "v2 - v1 = (" << v4.getX() << ", " << v4.getY() << ")" << endl;

    cout << endl;

 // Function Overloading // 


    cout << "***Function Overloading***" << endl << endl;
    MyClass obj;
    cout << obj.multiply(2, 3) << endl; // Output: 6
    cout << obj.multiply(2.5, 3.5) << endl; // Output: 8.75


    return 0;
}