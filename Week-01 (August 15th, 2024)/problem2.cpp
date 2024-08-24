// Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.
// Grade Criteria:
// A: 90-100
// B: 80-89
// C: 70-79
// D: 60-69
// F: 0-59

// Sample Input:- Enter the score: 85
// Sample Output:- Grade: B"
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the score: ";
    cin>>a;
    while(a<0 || a>100){
        cout<<"Invalid input! Try again."<<endl;
        cout<<"Enter the score: ";
        cin>>a;
    }
    if(a>=90 && a<=100) cout<<"Grade: A";
    else if(a>=80 && a<=89) cout<<"Grade: B";
    else if(a>=70 && a<=79) cout<<"Grade: C";
    else if(a>=60 && a<=69) cout<<"Grade: D";
    else if(a>=0 && a<=59) cout<<"Grade: F";
}
