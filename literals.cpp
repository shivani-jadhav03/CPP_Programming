#include <iostream>
using namespace std;

int main(){
    float d = 12.3F;
    long double e = 12.3L;
 
    cout<<sizeof(12.3)<<endl;
    cout<<sizeof(12.3f)<<endl;
    cout<<sizeof(12.3F)<<endl;
    cout<<sizeof(12.3l)<<endl;
    cout<<sizeof(12.3L)<<endl;
    return 0;
    }