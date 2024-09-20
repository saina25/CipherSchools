//Write a C++ code that take 2D array and key from user. Now you have to check that key exist inside
//the array or not if it exits print YES otherwise NO.

#include <iostream>
using namespace std;

int main() {
    int rows, cols, key;
    cin >> rows >> cols;

    int arr[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cin >> key;
    bool found = false;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == key) {
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
