#include<iostream>
using namespace std;

class School{
    private:
    int rollNo;
    float marks;
    string name ;
    public:
    School(int r,float m,string n){
        cout << "The Constructor is invoked"<<endl;
        rollNo =r;
        marks = m;
        name = n;
    }
    ~School(){
        cout << "The Constructor is invoked"<<endl;
    }
    void display(){
        cout << "Student Name :"<< name << endl;
        cout << "Student Roll No :"<< rollNo << endl;
        cout << "Student Marks :"<< marks << endl;

    }

};
int main(){
    School S1(71,62.28,"Vivek");
    S1.display();

    return 0;
}