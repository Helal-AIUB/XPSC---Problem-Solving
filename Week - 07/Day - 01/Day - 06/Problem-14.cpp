#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    int mn = INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        mn = min(mn,v[i]);
    }
    int ans = mn;
    for(int i=0;i<n;i++)
    {
        ans &= v[i];
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