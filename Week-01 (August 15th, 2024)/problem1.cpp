// Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.

// Sample Input:- Enter the first number: 10
// Enter the second number: 20
// Enter the third number: 15

// Sample Output :- The largest number is: 20

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;

    if(a>b && a>c){
        cout<<"The largest number is: "<<a;
    }
    else if(b>a&&b>c){
        cout<<"The largest number is: "<<b;
    }
    else{
        cout<<"The largest number is: "<<c;
    }
}