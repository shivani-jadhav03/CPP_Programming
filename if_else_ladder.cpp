#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"Please answer the question asked below : "<<endl;
    cout<<endl;
    cout<<"What is your age? "<<setw(3)<<endl;
    cout<<"----> ";
    cin>>a;

    if((a<18) & (1<a)){
        cout<<endl;
        cout<<"SORRY! You are under age, you can't come for the Party."<<endl;
        cout<<endl;
    }
    else if(a<1){
        cout<<endl;
        cout<<"Hahahaha! You are not yet born, so you can't come to party. "<<endl;
        cout<<endl;
    }
    else if(a>30){
        cout<<endl;
        cout<<"SORRY! You are over age as per age restrictions for the Party."<<endl;
        cout<<endl;
    }
    else{
        cout<<endl;
        cout<<"Thanks for answering the question. You are invited for the Party. "<<endl;
        cout<<endl;
    }
    
    return 0;
}
