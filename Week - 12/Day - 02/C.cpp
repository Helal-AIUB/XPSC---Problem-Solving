#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
const int N=100100;
using namespace std;
//int n,a[N];
void solve(){
    int n;
    cin>>n;
    int a[N];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1,greater<int>());
    cout<<a[(n+1)/2]<<endl;
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