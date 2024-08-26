// Write a C++ function that takes a string as input and reverses it.

// Sample Input:
// Enter a string: CipherSchools

// Sample Output:
// Reversed string: sloohcSrehpiC

#include <iostream>
#include <string>
using namespace std;

void reverseString(string str) {
    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Reversed string: ";
    reverseString(input);
    return 0;
}
