#include<iostream>
using namespace std;
class Complex{
    private:
    int real;
    int imag;
    public:
    // Constructor
    Complex(int real=0,int imag=0):real(real),imag(imag){

    }
    Complex operator +(const Complex& obj) {
        Complex res;
        res.real=real + obj.real;
        res.imag=imag + obj.imag;
        return res;
    }

    void display() const {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};
int main(){
    Complex c1(10,12),c2(6,6);
    Complex c3=c1 + c2;
    c3.display();

}