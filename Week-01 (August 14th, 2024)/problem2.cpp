// Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.

// Sample Input:- Enter grade 1: 85
// Enter grade 2: 90
// Enter grade 3: 78
// Enter grade 4: 92
// Enter grade 5: 88

// Sample Output:- The average grade is: 86.6

#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cout<<"Enter grade 1: ";
    cin>>a;
    cout<<"Enter grade 2: ";
    cin>>b;
    cout<<"Enter grade 3: ";
    cin>>c;
    cout<<"Enter grade 4: ";
    cin>>d;
    cout<<"Enter grade 5: ";
    cin>>e;
    cout<<"The average grade is: "<<(a+b+c+d+e)/5.0;

}