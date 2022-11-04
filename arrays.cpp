#include <bits/stdc++.h>
using namespace std;

int main(){

    // Arrays example :
    int score[4] = {99, 76, 64, 52};
    int mathematics[] = {87, 86, 85, 83};

    cout<<"Student from A division scored "<<score[0]<<endl;
    cout<<"Student from B division scored "<<score[1]<<endl;
    cout<<"Student from C division scored "<<score[2]<<endl;
    cout<<"Student from D division scored "<<score[3]<<endl;

    cout<<endl;

    cout<<"These are mathematics score of students: "<<endl;
    cout<<"1st rank scored "<<mathematics[0]<<endl;
    cout<<"2nd rank scored "<<mathematics[1]<<endl;
    cout<<"3rd rank scored "<<mathematics[2]<<endl;
    cout<<"4th rank scored "<<mathematics[3]<<endl;
    cout<<endl;

    // We can change the value of an array.
    score[3]=66;
    mathematics[1]=81;
    cout<<"Updated score of D division is "<<score[3]<<endl;
    cout<<"Updated score of mathematics 2nd rank is "<<mathematics[1]<<endl;
    
    return 0;
}