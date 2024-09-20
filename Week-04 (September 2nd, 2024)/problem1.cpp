//Write C++ program to demonstrate how to create dynamic variable using new keyword.

#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;
    *ptr = 42;
    cout << "The value of the dynamically allocated integer is: " << *ptr << endl;
    delete ptr;
    return 0;
}
