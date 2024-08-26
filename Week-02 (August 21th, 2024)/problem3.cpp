// Write a C++ function that takes a string as a parameter and checks how many vowels and consonants are in that string.
// Assuming that string contains only lowercase.

// Sample Input:
// Enter a string: cipherschools

// Sample Output:
// Number of vowels: 4
// Number of consonants: 9

#include <iostream>
#include <string>
using namespace std;

void countVowelsAndConsonants(string str) {
    int vowels = 0, consonants = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vowels++;
        else
            consonants++;
    }
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    countVowelsAndConsonants(input);
    return 0;
}
