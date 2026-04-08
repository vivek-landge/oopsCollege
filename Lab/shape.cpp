#include <iostream>
using namespace std;

void calculateArea(float rad){
    cout << "Area of the Circle : "<< 3.14*rad*rad << endl;
}
float calculateArea(float base , float height){
    return (0.5*base*height);
}
void calculateArea(int len ,int wid){
    cout << "Area of the Rectangle : "<< len*wid<< endl;
}

int main(){
    calculateArea(2.5);
    calculateArea(5,4);
    cout<<"Area of Triangle :"<<calculateArea(2.2f,3.2f)<< endl;
    return 0;
}
