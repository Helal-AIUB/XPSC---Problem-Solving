#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int res=0;
    if(a>b){
        res=a+a-1;
    }else if(a<b){
        res=b+b-1;
    }else{
        res=a+b;
    }
    cout<<res;
    return 0;
}