#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,t;
    cin>>a>>b>>t;
    int count=0;
    int n=1;
    while(n*a <= t+0.5){
         count +=b;
         n++;
    }
    cout<<count;
    return 0;
}