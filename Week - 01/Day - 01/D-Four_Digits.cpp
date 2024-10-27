#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=0 && n<10){
        cout<<"000"<<n;
    }else if(10<=n && n<100){
        cout<<"00"<<n;
    }else if(100<=n && n<1000){
        cout<<"0"<<n;
     }else if(n>=1000 && n<10000){
        cout<<n;
    }
    
    return 0;
}