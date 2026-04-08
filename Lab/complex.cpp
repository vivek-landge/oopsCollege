#include<iostream>
using namespace std;

class Complex{
    private:
    float x,y;
    public:
    Complex(){}
    Complex(float a, float b){
        x = a;
        y = b;
    }
    void display(){
        cout<<x<<"+i"<<y<<endl;
    }
    Complex operator +(Complex c){ 
        Complex temp ;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;

    }
};
int main(){
    Complex c1 (3.5,8.6);
    Complex c2(9.2,8.3);
    Complex c3 = c1 + c2;

    cout << "C1=" ; c1.display();
    cout << "C2=" ; c2.display();
    cout << "C2=" ; c3.display();

    
    return 0;


}