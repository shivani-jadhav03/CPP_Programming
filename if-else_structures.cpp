#include <iostream>
using namespace std;

int main(){
    // condition (i) ---> if (1<=a<=6) print english uppercase for a number Ex. one for 1, two for 2, etc.
    // condition (ii) ---> if (n>6) print greater than six.
    int a;
    cout<<"What is the value of 'a' ";
    cin>>a;
    if(a==1){
        cout<<"one"<<endl;
    }
    else if(a==2){
        cout<<"two"<<endl;
    }
    else if(a==3){
        cout<<"three"<<endl;
    }
    else if(a==4){
        cout<<"four"<<endl;
    }
    else if(a==5){
        cout<<"five"<<endl;
    }
    else if(a==6){
        cout<<"six"<<endl;
    }
    else{
        cout<<"Greater than six."<<endl;
    }
    return 0;
}