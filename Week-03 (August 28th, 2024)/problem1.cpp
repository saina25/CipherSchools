//Write a function int findMax(const int arr[], int size) that finds and returns the maximum value
//in an integer array. Test your function with various arrays in the main() function.

#include <iostream>
using namespace std;

int findMax(const int arr[], int size) {
    int maxVal = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int arr1[] = {1, 5, 3, 9, 2};
    int arr2[] = {10, 15, 7, 23, 1, 8};
    
    cout << "Max value in arr1: " << findMax(arr1, 5) << endl;
    cout << "Max value in arr2: " << findMax(arr2, 6) << endl;

    return 0;
}
