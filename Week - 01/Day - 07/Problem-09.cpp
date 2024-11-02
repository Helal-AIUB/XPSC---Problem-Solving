#include<bits/stdc++.h>
using namespace std;
class cmp{
    public:
     bool operator()(pair<string,int>a,pair<string,int>b){
        return a.second>b.second;
     }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<string,int> mp;
    for(int i=1; i<=n; i++){
        string s;
        cin>>s;
        mp[s]=i;
    }
    vector<pair<string,int>>v;
    for(auto [x,y] : mp){
        // cout<<x<<" "<<y<<'\n';
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),cmp());
    for(auto msg: v){
        cout<<msg.first<<'\n';
    }
    return 0;
}