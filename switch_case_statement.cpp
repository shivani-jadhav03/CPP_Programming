#include <bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    switch(age){
    case 1 :
        cout<<"You are 1 year old. "<<endl;
        break;

    case 19 :
        cout<<"You are 19 years old. "<<endl;
        break;

    case 22 : 
        cout<<"You are 22 years old. "<<endl;
        break;

    default : 
        cout<<"There is no such case "<<endl;
        break;

    }
    return 0;
}