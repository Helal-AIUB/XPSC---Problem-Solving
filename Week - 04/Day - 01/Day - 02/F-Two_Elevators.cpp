#include<bits/stdc++.h>
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int a,b,c,E1,E2;
        cin>>a>>b>>c;
        E1=a-1;
        E2=abs(b-c)+abs(c-1);
        if(E1<E2){
            cout<<1<<'\n';
        }else if(E2<E1){
            cout<<2<<'\n';
        }else{
            cout<<3<<'\n';
        }
    }
    return 0;
}