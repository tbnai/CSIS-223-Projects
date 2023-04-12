#include <iostream>
#include<cmath>

using namespace std;

int main() {
    // Write your main here
    double alpha[50];
    // array 0 - 24 ^2 && 25 - 50 ^3
    for (int i = 0; i < 50; i++) {
        if (i < 25) {
            alpha[i] = pow(i, 2.0);
        }
        else if (i >= 25) {
            alpha[i] = i * 3;
        }
    }

    // 10 elements per line
    for (int i = 0; i < 50; i++) {
        if (i % 10 == 0) {
            cout << endl;
        }
        cout << alpha[i] << " ";
    }
    return 0;
}
