// Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.

// Sample Input :- Enter the first string: Hello
// Enter the second string: World

// Sample Output:- Concatenated string: HelloWorld

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1, str2;
    cout<<"Enter the first string: ";
    getline(cin,str1);
    cout<<"Enter the second string: ";
    getline(cin,str2);

    cout<<"Concantenated string: "<<str1+str2;
}