#include <iostream>
#include <string>
using namespace std;

struct Car {
    string make;
    string model;
    double price;
};

int main() {
    Car c1;
    c1.make = "Toyota";
    c1.model = "Corolla";
    c1.price = 3500000;

    // Output
    cout << "Car Make: " << c1.make << endl;
    cout << "Car Model: " << c1.model << endl;
    cout << "Car Price: " << c1.price << endl;

    return 0;
}

