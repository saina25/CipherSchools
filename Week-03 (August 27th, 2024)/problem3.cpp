//Create a program that demonstrates the use of a pointer to a pointer. Declare an integer variable,
//a pointer to the integer, and a pointer to that pointer. Use all three to print the value of the integer.

#include <iostream>
using namespace std;

int main() {
    int num = 20;
    int *ptr = &num;
    int **ptr2 = &ptr;
    
    cout << "Value of num using variable: " << num << endl;
    cout << "Value of num using pointer: " << *ptr << endl;
    cout << "Value of num using pointer to pointer: " << **ptr2 << endl;
    
    return 0;
}
