#include <iostream>
using namespace std;

int a = 6;  //This is Global variable.

void add(){
    int b = 8;  //This is Local variable.
    cout<<a<<endl;
    cout<<b<<endl;
}

int main(){
    add();
    cout<<a<<endl;
    return 0;
}