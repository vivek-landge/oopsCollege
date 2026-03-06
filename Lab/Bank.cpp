#include<iostream>
using namespace std;

class BankInfo{
    private:
    int accNo;
    string accName;
    double Balance;
    public:
    // constructor
    BankInfo(){}//Default
    BankInfo(int No,string name,double bal){
        accNo = No;
        accName = name;
        Balance = bal;
    }
    // getter 
    void getNo(){
        cout << "The Account Number is:"<< accNo <<endl;
    }
    void getName(){
        cout << "The Account Holder Name is:"<< accName <<endl;
    }
    void getBalance(){
        cout << "The Account Balance is:"<< Balance <<endl;
    }
     // setter 
    void setNo(int a){
        accNo = a;
    }
    void setName(string n){
        accName = n;
    }
    void setBalance(double b){
        Balance = b;
    }
    // Additional Methods
    void Deposit(double Amount){
        if(Amount >= 0){
            Balance += Amount;
        }
        else{
            cout << "Invalid Deposit Amount" << endl;
            cout << "Please Try Again"<<endl;
        }
    }
    void Withdraw(double Amount){
        if(Amount >= 0 && Amount <= Balance){
            Balance -= Amount;
        }
        else{
            cout << "Invalid Amount Or Insufficient Balance" << endl;
            cout << "Please Try Again"<<endl;
        }
    }

};
int main(){
    BankInfo B1,B2(1245,"Vivek",25000);
    B2.getBalance();

    B2.Deposit(12000);
    B2.getBalance();

    B2.Withdraw(2000);
    B2.getBalance();

    return 0;
}