#include <bits/stdc++.h>
using namespace std;
int main()
{
    int add[10];
    int n;
    int count=0;
    cout<<"Enter numbers in array : ";
    cin>>add[0]>>add[1]>>add[2]>>add[3]>>add[4]>>add[5]>>add[6]>>add[7]>>add[8]>>add[9];
    cout<<"Enter number : ";
    cin>>n;
    for(int i=0;i<11;i++)
    {
        if(add[i]==n)
        {
            count=count+1;
        }
    }
    cout<<"Number of repetation = "<<count;
    return 0;
}