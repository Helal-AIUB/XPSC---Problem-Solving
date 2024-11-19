#include<bits/stdc++.h>
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long a,b,n,s,ans;
        cin>>a>>b>>n>>s;
        ans=s/n;
        ans=min(ans,a);
        ans=s-ans*n;
        if(ans<=b){
            yes;
        }else{
           no;
        }
    }
    return 0;
}