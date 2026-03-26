#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    int marks;

    Student(string name, int marks) : name(name), marks(marks) {}

    void display() const {
        cout << "Name : " << name << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main() {
    vector<Student> students;

    int n;
    cout << "How many student data do you want to enter: ";
    cin >> n;

    if(n <= 0){
        cout << "Invalid student numbers\n";
        return 0;
    }

    for(int i = 0; i < n; i++){
        string name;
        int marks;

        cout << "\nEnter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;

        students.push_back(Student(name, marks));
    }

    int maxVal = students[0].marks;
    string topStudentName = students[0].name;

    cout << "\n======= Student Data =======\n";

    for(const Student& s : students){
        s.display();

        if(s.marks > maxVal){
            maxVal = s.marks;
            topStudentName = s.name;
        }
    }

    cout << "\nTop Student:\n";
    cout << "Name: " << topStudentName << endl;
    cout << "Highest Marks: " << maxVal << endl;
}