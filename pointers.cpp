#include <bits/stdc++.h>
using namespace std;

int main(){
    // What is Pointer? ---> Data type which holds the address of other data type.

    int a = 3;
    int* b = & a; 

    // & is Address of operator.      
    cout<<"The address of a is "<<&a<<endl; 
    cout<<"The address of a is "<<b<<endl;

    // * is (Value at) Dereference operator.
    cout<<"The value at address b is "<<*b<<endl;
    cout<<"The value at address b is "<<a<<endl;

    int** c = & b;     // ** indicates pointer to pointer.
    int*** d = & c;
    
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address(value_at(value_at c)) is "<<**c<<endl;
    cout<<"The address of c is "<<d<<endl;
    cout<<"The address of c is "<<&c<<endl;
    cout<<"The value at address (value_at(value_at(value_at d))) is "<<***d<<endl;
    return 0; 
}