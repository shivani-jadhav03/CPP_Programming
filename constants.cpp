#include <iostream>
using namespace std;

int main(){

    int a = 5;
    cout<<"Value of a was "<<a<<endl;
    a = 8;
    cout<<"Value of a is "<<a<<endl;

    const int x = 6;   //Added constant so that value of x would not be changed.
    cout<<"Value of x is constant that is "<<x<<endl;

    return 0;    
}