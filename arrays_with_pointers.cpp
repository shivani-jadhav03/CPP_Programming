#include <bits/stdc++.h>
using namespace std;

int main(){

    int marks[4] = {76, 87, 98, 99};
    int* p = marks;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1) <<endl;
    cout<<"The value of marks[2] is "<<*(p+2) <<endl;
    cout<<"The value of marks[3] is "<<*(p+3) <<endl;
    return 0;
}