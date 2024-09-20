//Define a car class with properties brand name , model, engine, number of seats and method displayInfo that display the all information of class.

#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    string engine;
    int seats;

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Number of Seats: " << seats << endl;
    }
};

int main() {
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Camry";
    car1.engine = "V6";
    car1.seats = 5;

    car1.displayInfo();
    return 0;
}
