#include<iostream>
using namespace std;

class Student {
private:
    string name;
    string fatherName;
    int regNo;
    int marks;
    bool isLoggedIn;
public:
   //====== Parameterized Constructor =======================
    Student(string name, string fatherName, int regNo, int marks)
        : name(name), fatherName(fatherName), regNo(regNo), isLoggedIn(false) {

        if(marks >= 0 && marks <= 100)
            this->marks = marks;
        else
            this->marks = 0;
    }

    void login() {
        isLoggedIn = true;
    }

    void logout() {
        isLoggedIn = false;
    }

    void setMarks(int m) {
        if(m >= 0 && m <= 100)
            marks = m;
        else
            cout<<"Invalid marks!"<<endl;
    }

    bool isPassed() const {
        return marks >= 40;
    }
//====== Display =================
    void display() const {
        cout<<"Name: "<<name<<endl;
        cout<<"Father Name: "<<fatherName<<endl;
        cout<<"Reg No: "<<regNo<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Status: "<<(isLoggedIn ? "Logged In" : "Logged Out")<<endl; // condition
    }
};

int main() {
    Student s1("Sam", "Allen", 1001, 85);

    s1.login();
    s1.setMarks(75);
   
    if(s1.isPassed())
        cout<<"s1 Passed"<<endl;
    else
        cout<<"s1 Failed"<<endl;
   
    s1.display();
    
}