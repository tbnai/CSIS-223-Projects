
#include <iostream>

using namespace std;

int main()
{
    // variables // 
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;


    // prompt user to enter the numbers //
    while (true) {
        cout << "Enter the first number..";
        cin >> num1;
        // validate user input //
        if (num1 < 0 || num1 > 100)
        {
            cout << "Invalid input. Try numbers from 0 to 100!" << endl;
            continue;
        }
        cout << "Enter the second number..";
        cin >> num2;
        // validate user input //
        if (num2 < 0 || num2 > 100)
        {
            cout << "Invalid input. Starting over. Try numbers from 0 to 100!" << endl;
            continue;
        }
        cout << "Enter the third number..";
        cin >> num3;
        // validate user input //
        if (num3 < 0 || num3 > 100)
        {
            cout << "Invalid input. Starting over. Try numbers from 0 to 100!" << endl;
            continue;
        }
        break;
    }
    // Calculating input //
    if (num1 == 0 && num2 == 0 && num3 == 0)
    {
        cout << "Error! Cannot divide by 0" << endl;
    }
    else
    {
        float average = (num1 + num2 + num3) / 3;
        cout << "The total average is: " << average;
    }

    return 0;
}


