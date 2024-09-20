//Write a C++ code that take 2D array from user input.Now you have to find sum of all values of the array.

#include <iostream>
using namespace std;

int main() {
    int rows, cols, sum = 0;
    cin >> rows >> cols;

    int arr[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }

    cout << "Sum of all elements: " << sum << endl;

    return 0;
}
