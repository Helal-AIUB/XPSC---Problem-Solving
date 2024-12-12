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
    string s,t;
    cin>>s>>t;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            yes;
            return;
        }else{
            if(s[i] != t[i]){
                no;
                return;
            }
        }
    }
    yes;
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