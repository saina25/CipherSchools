// Create a Complex class to represent complex numbers and overload the +, -, operators to perform arithmetic operations on complex numbers.

// Sample Output:-

// Complex Number 1: 3 + 4i
// Complex Number 2: 1 + 2i
// Sum: 4 + 6i
// Difference: 2 + 2i

#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {

    int a1, b1, a2, b2;
    cin>>a1>>b1>>a2>>b2;
    Complex c1(a1, b1);
    Complex c2(a2, b2);

    Complex sum = c1 + c2;
    Complex difference = c1 - c2;

    cout << "Complex Number 1: ";
    c1.display();
    cout << "Complex Number 2: ";
    c2.display();
    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    difference.display();
}
