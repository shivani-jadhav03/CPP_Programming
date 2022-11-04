#include <bits/stdc++.h>
using namespace std;

int main(){

    int marks[]{65,66,77,86,85};
    // Scores using for loop in arrays.
    for(int i=0; i<4; i++){
        cout<<"The marks scored by student "<<i<<" is "<<marks[i]<<endl;
    }
    cout<<endl;

    // Scores using while loop in arrays.
    int a=0;
    while(a<4){
        cout<<"The marks scored by student "<<a<<" is "<<marks[a]<<endl;
        a++;
}
    cout<<endl;

    // Scores using do-while loop in arrays.
    int b=0;
    do{
        cout<<"The marks scored by student "<<b<<" is "<<marks[b]<<endl;
        b++;
    }while(b<4);
    cout<<endl;
    
    return 0;
}