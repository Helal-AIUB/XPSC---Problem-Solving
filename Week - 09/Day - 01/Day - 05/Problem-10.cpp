#include<bits/stdc++.h>
#define endl '\n'
#define ll long long 
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    ll sum = 0;
    int g1=0,mx=0;
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
        mx = max(mx,ar[i]);
    }
    //cout<<mx<<endl;   
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        g1 = __gcd(g1,(mx - ar[i]));
    }
    for(int i=0;i<n;i++)
    {
        v.push_back((mx - ar[i])/g1);
    }
    for(auto x : v) sum+=x;
    cout << sum <<" " << g1 <<endl ;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
 
    return 0;
}