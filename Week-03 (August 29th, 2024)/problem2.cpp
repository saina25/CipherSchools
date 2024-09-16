//You are given an array and target value. You have to find the index of target value.
//If target doest exist inside the array then print -1.Assume indexing is 1 based.

#include <iostream>
using namespace std;

int findTargetIndex(const int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 7, 8};
    int target = 6;
    
    cout << findTargetIndex(arr, 5, target) << endl;

    return 0;
}

