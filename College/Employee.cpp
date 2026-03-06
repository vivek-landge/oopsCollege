#include<iostream>
using namespace std;

class Company{
    protected:
    int estdYr;
    string name ;
    public:
    void set(){
        cout << "Company Establishment Year :"<< estdYr <<endl;
        cout << "Company Name :"<< name <<endl;

    }
    void get(int e, string n){
        estdYr = e;
        name = n;
    }
};
class Employee : public Company {
    protected:
    int Salary;
    string Name ;
    public:
    void display(){
        cout << "Employee Name :"<< Name <<endl;
        cout << "Employee Salary :"<< Salary <<endl;

    }
    void enter(int S, string n){
        Name = n;
        Salary = S;
    }
};
int main(){
    Employee E1;
    E1.get(1920,"Bankai");//take info
    E1.enter(25000 , "Vivek");

    E1.set();//show info
    E1.display();
    
    return 0;

}
