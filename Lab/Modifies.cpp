// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Student{
  private:
  int m;
  protected :
  string name;
  public :
  int rollNo;
  void Get(int x,string n,int r){
      m= x;
      name = n;
      rollNo = r;
  }
};
class College :public Student {
  public:
  void Display(){
  cout << "Marks ="<< "in private" << endl;
  cout << "Name ="<< name  << endl;
  cout << "Roll No ="<< rollNo << endl;
  }
};


int main() {
    College c;
    c.Get(70,"Vivek",71);
    cout<< "in class"<<endl;
    c.Display();
    cout << "in main"<<endl;
    cout << "Marks ="<< "in private" << endl;
    cout << "Name ="<< "in protected"  << endl;
    cout << "Roll No ="<< c.rollNo << endl;
    
    return 0;
}