#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
using namespace std;
ll LCM(ll a,ll b){
    return (a/__gcd(a,b))*b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll x,ans;
    cin>>x;
    for(ll i=1; i<=sqrt(x); i++){
        if(x%i==0 && (LCM(i,(x/i))==x)){
            ans=i;
        }
    }
    cout<<ans<<" "<<x/ans<<endl;
    return 0;
}