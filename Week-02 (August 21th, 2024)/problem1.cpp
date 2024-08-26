// rite a C++ function that checks whether an integer is odd or even. If the integer is odd, print "Odd"; otherwise, print "Even."

// Sample Input:
// Enter a number: 5

// Sample Output:
// Odd

#include <iostream>
using namespace std;

void checkOddOrEven(int num) {
    if (num % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    checkOddOrEven(number);
    return 0;
}
