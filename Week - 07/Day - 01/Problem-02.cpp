#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
using namespace std;
void solve(){
    ll n;
    cin>>n;
    deque<ll> ans;
    for(int k=0; k<=__lg(n); k++){
        if((n>>k)&1){
            ll value= n-(1LL<<k);
            if(value>0){
                ans.push_front(value);
            }
        }
    }
    ans.push_back(n);
    cout<<ans.size()<<endl;
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
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