#include<iostream>
using namespace std;
class Bank{
    private:
    string name;
    string accountNumber;
    double balance;
    bool isLoggedIn;
    public:

    Bank(string name, string accountNumber, double balance)
    : name(name),accountNumber(accountNumber),isLoggedIn(false){
        if(balance >0 ){
            this->balance=balance;
        }else{
            cout<<"Invalid Balance!\n";
            this->balance=0;
        }
    }
    void login(){
        isLoggedIn=true;
    }
    void logOut(){
        isLoggedIn=false;
    }

    void deposit(double b){
         if(!isLoggedIn){
           cout << "Please login first!\n";
        return;
    }
       if(b<=0){
       cout << "Invalid deposit amount!\n";
       return;
       }
        balance+=b;
    }

    void withdraw(double b){
        if(!isLoggedIn){
           cout << "Please login first!\n";
           return;
        } 
        if(b<=0){
            cout<<"Invalid withdraw amount.\n";
            return;
        }
         if(b>balance){
           cout<<"Insufficient Balance\n";
           return;
        }
        balance-=b;
    }

    void checkBalance() const{
         if(!isLoggedIn){
           cout << "Please login first!\n";
           return;
        } 
        cout<<"Name : "<<name<<" \n";
        cout<<"Account number : "<<accountNumber<<" \n";
        cout<<"balance : "<<balance<<" \n";
        cout<<"Status : "<<(isLoggedIn ? "logged In\n": "Logged Out\n");
    }
};
int main(){
   Bank b1("Harry","123456790",5000);
   b1.login();
   b1.checkBalance();
   b1.deposit(5000);
   b1.checkBalance();
   b1.withdraw(3000);
   b1.checkBalance();
}