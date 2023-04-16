#include <iostream>
#include <iomanip>
using namespace std;

double option2(double net, int cop) {
    const double royaltyRates = .125;
    return cop * (net * royaltyRates);
}

double option3(double net, int cop) {
    const double over4k = .10;
    const double under4k = .14;
    double sum = 0;
    int sold = 0;
    while (cop > 0) {
        if (sold < 4000) {
            sum += net * over4k;
            sold++;
        }
        else {
            sum += net * under4k;
        }
        --cop;
    }


    return sum;
}

int main() {
    double net_price;
    int copies;

    cout << "How much does the book cost?" << endl;
    cin >> copies;

    cout << "How many copies do you expect to sell?" << endl;
    cin >> net_price;

    cout << "Royalty option1: 25000.00" << endl;
    cout << "Royalty option2: " << fixed << setprecision(2) << option2(net_price, copies) << endl;
    cout << "Royalty option3: " << fixed << setprecision(2) << option3(net_price, copies) << endl;
}
