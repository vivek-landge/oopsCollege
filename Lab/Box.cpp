#include<iostream>
using namespace std;

template <typename T> 

class Box{
    private :
    T val ;
    public :
    Box(T v){
        val = v;
    }
    
    void Display(){
      cout << "Value ="<<val << endl;
    }

};
int main(){
    Box<string> strBox("Bankai");
    Box<int> intBox(2543);
    Box<float> floatBox(25.43);

    strBox.Display();
    intBox.Display();
    floatBox.Display();


    return 0;
}



