#include<iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {};

    virtual ~Shape() {} 
};

class Circle : public Shape {
public:
    void draw()  {
        cout << "Circle Draw\n";
    }
};

class Rectangle : public Shape {
public:
    void draw()  {
        cout << "Rectangle Draw\n";
    }
};

int main() {
    Shape* s;

    Circle c;
    Rectangle r;

    s = &c;
    s->draw();   // Circle version

    s = &r;
    s->draw();   // Rectangle version
}