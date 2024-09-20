//Write a program that defines a Student class and uses the this pointer in a member function to display the student's details.

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    int rollNumber;

    void display() {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Roll Number: " << this->rollNumber << endl;
    }
};

int main() {
    Student student1;
    student1.name = "John";
    student1.age = 20;
    student1.rollNumber = 101;

    student1.display();
    return 0;
}
