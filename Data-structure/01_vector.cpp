#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v1;

    int n;
    cout << "How many numbers do you want to enter: ";
    cin >> n;

    if(n <= 0){
        cout << "Invalid input!\n";
        return 0;
    }

    int num;
    for(int i = 0; i < n; i++){
        cout << "Enter number " << i+1 << " : ";
        cin >> num;
        v1.push_back(num);
    }

    cout << "\nNumbers: ";
    for(int x : v1){
        cout << x << " ";
    }

    // Sum
    int sum = 0;
    for(int x : v1){
        sum += x;
    }
    cout << "\nSum = " << sum;

    // Maximum
    int maxVal = v1[0];
    for(int x : v1){
        if(x > maxVal){
            maxVal = x;
        }
    }
    cout << "\nMaximum = " << maxVal << endl;

    return 0;
}