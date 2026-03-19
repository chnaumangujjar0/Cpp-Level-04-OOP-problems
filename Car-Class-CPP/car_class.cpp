#include<iostream>
using namespace std;

class Car {
private:
    string model;
    string brand;
    int speed;
    int maxspeed;

public:
    Car(string model, string brand, int speed, int maxspeed)
        : model(model), brand(brand) {

        this->speed = (speed >= 0) ? speed : 0;
        this->maxspeed = (maxspeed > 0) ? maxspeed : 100;
    }

    ~Car() {
        cout << "Car object destroyed\n";
    }

    void accelerate(int m) {
        if(m <= 0) return;

        speed += m;
        if(speed > maxspeed){
            speed = maxspeed;
            cout << "Reached maximum speed!\n";
        }
    }

    void brake(int b) {
        if(b <= 0) return;

        speed -= b;
        if(speed < 0){
            speed = 0;
        }
    }

    void display() const {
        cout << "Model: " << model << "\n";
        cout << "Brand: " << brand << "\n";
        cout << "Speed: " << speed << "\n";
        cout << "Max Speed: " << maxspeed << "\n";
    }
};

int main() {
    Car c1("Corolla","Toyota", 100, 180);

    c1.accelerate(150);
    c1.display();

    c1.brake(300);
    c1.display();
}