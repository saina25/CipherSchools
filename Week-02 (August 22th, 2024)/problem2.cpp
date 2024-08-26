// Write a C++ program that takes an array as input and prints the sum of odd numbers and the sum of even numbers separately.

// Sample Input:
// Enter the size of the array: 5
// Enter the array: 5 10 15 20 25

// Sample Output:
// Sum of odd numbers: 45
// Sum of even numbers: 30


#include <iostream>
using namespace std;

int main() {
    int n, sumOdd = 0, sumEven = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            sumEven += arr[i];
        else
            sumOdd += arr[i];
    }
    cout << "Sum of odd numbers: " << sumOdd << endl;
    cout << "Sum of even numbers: " << sumEven << endl;
    return 0;
}
