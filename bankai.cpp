#include"iostream"
#include"string"
using namespace std;

class bankai
{
private:
    int sal;
    string name ;
    string dept;
    string subject;

public:
void changeDept(string newDept){
    dept = newDept;

    cout <<"the new department of the teacher "<<name<< " is "<<newDept;
}
void get(){
    cout << "Enter the details:";
    cin >>name >>dept>>subject>>sal;
}

};
int main(){
    bankai b1,b2;
    b1.get();
    b1.changeDept("Physics");
    return 0;


}