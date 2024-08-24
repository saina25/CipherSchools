// Write a C++ program that takes two integers as input and performs the following arithmetic operations:
// Addition
// Subtraction
// Multiplication
// Division (ensure that you handle division by zero)
// Modulus

// Sample Output :-

// Enter first integer: 10
// Enter second integer: 3
// Addition: 13
// Subtraction: 7
// Multiplication: 30
// Division: 3.33333
// Modulus: 1

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;

    double division;
    if (num2 != 0) {
        division = static_cast<double>(num1) / num2;
    } else {
        cout << "Division by zero is not allowed." << endl;
        return 1;
    }

    int modulus;
    if (num2 != 0) {
        modulus = num1 % num2;
    } else {
        cout << "Modulus by zero is not allowed." << endl;
        return 1;
    }

    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    cout << "Division: " << division << endl;
    cout << "Modulus: " << modulus << endl;
}
