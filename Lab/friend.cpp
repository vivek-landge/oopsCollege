#include <iostream>
using namespace std;
 class Rectangle{
    private:
    float Length, Breadth;
    public:
    void get(float x,float y){
        Length = x;
        Breadth = y;
    }
    friend void Area(Rectangle R);
 };
 void Area(Rectangle R){
    cout << "Area Of Rectangle:"<< R.Length * R.Breadth<<endl; 
 }

 int main(){
    Rectangle R1;
    R1.get(10.0,20.0);
    Area(R1);
    return 0;
 }