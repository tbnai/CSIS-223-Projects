#include <iostream>

using namespace std;

int main() {
    // Write your main here
    int num;

    cout << "Input a number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Number is negative" << endl;
    }
    else if (num > 0) {
        cout << "Number is positive" << endl;
    }
    else {
        cout << "Number is zero" << endl;
    }
    return 0;
}
