#include <iostream>

using namespace std;

int main() {
    // Write your main here
    int num1;
    int num2;
    int num3;
    int temp;

    cout << "Input 3 numbers: " << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;

    if (num1 > num2) {
        swap(num1, num2);
    }
    if (num2 > num3) {
        swap(num2, num3);
    }
    if (num1 > num2) {
        swap(num1, num2);
    }

    cout << num1 << " " << num2 << " " << num3 << endl;


    return 0;
}
