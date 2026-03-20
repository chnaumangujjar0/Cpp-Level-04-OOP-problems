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

    void showVehicle() const {
        cout << "Brand: " << brand << "\n";
        cout << "Speed: " << speed << "\n";
    }
};

class Car : public Vehicle {
protected:
    string model;

public:
    Car(string brand, int speed, string model)
        : Vehicle(brand, speed), model(model) {}

    void showCar() const {
        showVehicle();
        cout << "Model: " << model << "\n";
    }
};

class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    ElectricCar(string brand, int speed, string model, int batteryCapacity)
        : Car(brand, speed, model) {
        this->batteryCapacity = (batteryCapacity > 0) ? batteryCapacity : 0;
    }

    void display() const {
        showCar();
        cout << "Battery Capacity: " << batteryCapacity << " watt\n";
    }
};

int main() {
    ElectricCar e1("Toyota", 230, "Corolla", 12000);
    e1.display();
}