// Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.

// Sample Input:- Enter a number: 4
// Sample Output:- The factorial of 4 is: 24

#include <iostream>
using namespace std;

int main() {
    int N;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }

    cout << "The factorial of " << N << " is: " << factorial << endl;
}
