#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
using namespace std;
void solve(){
    ll n,m;
    cin >> n >> m;
    ll f = n-m;
    ll s = n+m;
    if(f<0) f = 0;
    ll ans = 0;
    for (int i = 31; i>=0;--i) 
    {
        if ((f & (1LL << i)) || (s & (1LL << i)) || (f >> (i + 1)) != (s >> (i + 1))) 
        {
            ans |= (1LL << i);
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}