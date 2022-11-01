#include <iostream>
using namespace std;

int main(){
    int a = 44;
    float b = 65.37;
    cout<<"Value of a is "<<(float)a<<endl; 
    cout<<"Value of b is "<<(int)b<<endl;
    cout<<"Value of a is "<<float(a)<<endl;
    cout<<"Valus of a is "<<int(b)<<endl;

    int x = 63;
    float y = 11.5;
    cout<<"The expression is "<<x + y<<endl;
    cout<<"The expression is "<<x + (int)y<<endl;
    cout<<"The expression is "<<x + int(y)<<endl;
    return 0;
}