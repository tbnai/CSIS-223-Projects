#include <iostream>

using namespace std;


int main()
{
    
    int size = 0;

    // Prompt user the array size //
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    // Allocate memory for array //
    int* arr = new int[size];

    // Prompt user the elements of the array //
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0;i < size;i++) {
        cin >> arr[i];
    }
    // finding max // 
    int max = arr[0];
    for (int i = 1;i < size;i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "The maximum element is: " << max << endl;

    return 0;
}

