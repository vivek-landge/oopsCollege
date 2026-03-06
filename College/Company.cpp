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
    void get(){
        cout << "Enter Company Details :"<< endl ;
        cin >> name >> estdYr;
    }
};
class Employee : public Company {
    protected:
    int Salary;
    string Name ;
    public:
    void display(){
        cout << "Employee Name"<< Name <<endl;
        cout << "Employee Salary :"<< Salary <<endl;

    }
    void enter(){
        cout << "Enter Employee Details :"<< endl ;
        cin >> Name >> Salary;
    }
};
int main(){
    Employee E1;
    E1.get();//take info
    E1.enter();

    E1.set();//show
    E1.display();
    
    return 0;

}
