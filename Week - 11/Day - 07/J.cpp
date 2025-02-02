#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
using namespace std;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    ll ans = 0;
    int ptr = 0;
    while(ptr < n && a[ptr] == 0)
        ptr++;
    for(int i = ptr; i < n-1; ++i){
        ans += a[i];
        if(a[i] == 0) ans++;
    }
    cout << ans << "\n";
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