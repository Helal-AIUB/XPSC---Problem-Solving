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
    int l=1,r=n*3;
    int cnt=0;
    vector<pair<int,int>> v;
    while(l<=r){
        //if(l>r) break;
            v.push_back({l,r});
            cnt++;
            l=l+3;
            r=r-3;
    }
    cout<<cnt<<'\n';
    for(auto val:v){
        cout<<val.first<<" "<<val.second<<endl;
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