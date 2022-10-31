#include <iostream>
using namespace std;

int x = 7;  //Global variable.

void sub(){
    int x =9;  //Local variable. 

    cout<<x<<endl;
    cout<<::x<<endl;  // '::' is scope resolution operator to get the value of global variable.
}
int main(){
    sub();
    return 0;
}