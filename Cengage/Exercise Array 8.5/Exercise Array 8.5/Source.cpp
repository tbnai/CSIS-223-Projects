#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char word[100];

    // Prompt user to type a word 

    cout << "Type a word: ";
    cin.getline(word, 100);

    // Word prompt by user will be in ALL CAPS 
    for (int i = 0; i < strlen(word); i++) {
        word[i] = toupper(word[i]);
    }

    cout << word << endl;

    return 0;
}
