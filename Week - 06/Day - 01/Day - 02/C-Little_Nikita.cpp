#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    if(n==m){
        yes;
    }
    else if(n>m)
    {
        if(n%2 != m%2){
            no;
        }else{
            yes;
        }
    }
    else{
        no;
    }
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