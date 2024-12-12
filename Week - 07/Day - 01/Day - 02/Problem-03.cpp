#include "bits/stdc++.h"
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> cnt(31, 0), a(n);
        for(int i = 0;i < n; ++i) {
            cin >> a[i];
            for(int j = 30; j >= 0; --j) {
                if(a[i] & (1 << j)) ++cnt[j];
            }
        }
        int ans = 0;
        for(int i = 30; i >= 0; --i) {
            int need = n - cnt[i];
            if(need <= k) {
                k -= need;
                ans += (1 << i);
            }
        }
        cout << ans << "\n";
    }
}
// #include<bits/stdc++.h>
// #define all(x) x.begin(),x.end()
// #define endl '\n'
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// #define ll long long int
// using namespace std;
// void solve(){
//     int n,k;
//     cin>>n>>k;
//     vector<int> a(n);
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     for(int i=1; i<=k; i++){
//         a[i] = (a[i] | (2>>30));
//     }
//     int res = 1;
//     for(int i=0; i<n; i++){
//         res = (a[i] & res);
//     }
//     cout<<res<<endl;
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }