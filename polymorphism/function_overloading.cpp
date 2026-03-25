#include<iostream>
using namespace std;
class Calculator{
    public:

    int add(int x,int y){
        return x + y;
    }
   double add(double x,double y){
         return x + y;
    }
    int add(int x,int y,int z){
         return x + y + z;
    }
};

int main(){
    Calculator c;
    cout<<"Sum = "<<c.add(5,5)<<endl;
    cout<<"Sum = "<<c.add(3.4,3.6)<<endl;
    cout<<"Sum = "<<c.add(10,20,30)<<endl;

}