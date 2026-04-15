#include<iostream>
using namespace std;

int main(){
    int nr= 10;
    int dr= 0;
    
    try{
        if(dr==0){
            throw 0;
        }
        cout << "Result:"<<(nr/dr)<<endl;
    }
    catch(int e){
        cout<<"Error:Division by "<<e<<endl;
    }
    return 0;
}