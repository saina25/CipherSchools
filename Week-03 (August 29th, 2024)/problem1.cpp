//You are given an array and target value. Your task is to find the target value that exists in the array.
//If it exists inside an array then print YES otherwise NO.

#include <iostream>
using namespace std;

string findTarget(const int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int arr[] = {2, 4, 6, 7, 8};
    int target = 6;
    
    cout << findTarget(arr, 5, target) << endl;

    return 0;
}
