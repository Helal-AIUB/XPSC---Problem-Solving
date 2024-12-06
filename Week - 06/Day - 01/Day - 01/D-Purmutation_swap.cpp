#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> dis(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        dis[i]=abs(arr[i]-(i+1));
    }
    int k=dis[0];
    for(int i=1; i<n; i++){
        k=__gcd(k,dis[i]);
        if(k==1) break;
    }
    cout<<k<<'\n';
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