#include<iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    int speed;

public:
    Vehicle(string brand, int speed)
        : brand(brand) {
        this->speed = (speed >= 0) ? speed : 0;
    }

    void showInfo() const {
        cout << "Brand: " << brand << "\n";
        cout << "Speed: " << speed << "\n";
    }
};

class Car : public Vehicle {
private:
    string model;
    string fuelType;

public:
    Car(string brand, int speed, string model, string fuelType)
        : Vehicle(brand, speed), model(model), fuelType(fuelType) {}

    void display() const {
        showInfo(); 
        cout << "Model: " << model << "\n";
        cout << "Fuel Type: " << fuelType << "\n";
    }
};

int main() {
    Car c1("Hyundai", 157, "Sonata", "Petrol");
    c1.display();
}