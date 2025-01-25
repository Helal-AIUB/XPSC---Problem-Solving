#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll even=0,odd=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    if((even==odd-1) || (odd==even-1)){
         cout<<0<<endl;
    }else{
         sort(a.begin(),a.end());
         if(even>odd){
            ll x=even-(odd+1);
            ll sum=0;
            for(ll i=0; i<x; i++){
                sum +=a[i];
            }
            cout<<sum<<endl;
         }else{
            ll x=odd-(even+1);
            ll sum=0;
            for(ll i=0; i<x; i++){
                sum +=a[i];
            }
            cout<<sum<<endl;
         }
    }
    return 0;
}