#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
       int n, k, q;
       cin>>n>>k>>q;
       int t[n];
       int pd = 0;
       ll ans = 0;
       for(int i=0; i<n; i++)
       {
           cin>>t[i];
           if(t[i] <= q)
           pd++;
           else
           pd = 0;
           ans += max(0, pd - k + 1);
       }
       cout<<ans<<endl;
    }
    return 0;
}