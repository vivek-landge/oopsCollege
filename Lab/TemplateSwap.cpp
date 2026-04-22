#include<iostream>
using namespace std;

template <class T>

void swapValues(T x, T y){
    cout << "Before swap"<<endl;
    cout << "X="<<x<<endl;
    cout << "Y="<<y<<endl;

    x = x+y;
    y = x-y;
    x = x-y;

    cout << "After swap"<<endl;
    cout << "X="<<x<<endl;
    cout << "Y="<<y<<endl;
}

int main(){
    int x,y;
    cout << "Enter the value X:" ;
    cin >> x ;
    cout << "Enter the value Y:" ;
    cin >> y ;
    swapValues(x,y);
    return 0;

}