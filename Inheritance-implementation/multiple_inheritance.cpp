#include<iostream>
using namespace std;
// parent class 01
class Engine{
    protected:
    int horsePower;
    int cylinderCapacity;
   public:
   Engine(int horsePower,int cylinderCapacity)
    :horsePower(horsePower),cylinderCapacity(cylinderCapacity){
   
   }
};
// Parent Class 02 
class GPS{
    protected:
    string systemModel;
   public:
   GPS(string systemModel)
    :systemModel(systemModel){
   
   }
};

// Base Class 
class Car:public Engine,public GPS{
    private:
    string model;
    string brand;
    int speed;
    public:
     Car(string brand,string model, int speed ,int horsePower,int cylinderCapacity,string systemModel)
        : Engine(horsePower,cylinderCapacity),GPS(systemModel),model(model), brand(brand) {

        this->speed = (speed >= 0) ? speed : 0;
        
    }

    void display() const {
        cout << "Model: " << model << "\n";
        cout << "Brand: " << brand << "\n";
        cout << "Speed: " << speed << "\n";
        cout<<"Horse Power : "<<horsePower<<"\n";
        cout << "Cylinder Capacity : " << cylinderCapacity << "\n";
        cout<<"GPS System Model : "<<systemModel<<"\n";

    }
};
int main(){
    Car c1("Hyundai","Sonata",200,1300,8,"Google 1.2.3");
    c1.display();
}