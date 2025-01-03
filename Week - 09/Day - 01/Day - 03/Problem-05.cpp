#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
const int MOD=1e9+7;         //Modular Arithmatic Module
using namespace std;         // Week-07, Module-07

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=1;
        for(int i=1; i<=n; i++){
            ans =(1LL*ans%MOD*i%MOD)%MOD;
        }
        cout<<ans<<endl;
    }
    return 0;
}