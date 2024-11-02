#include<bits/stdc++.h>
using namespace std;
string remove_semicolon(string str){
    if(!str.empty() && str.back()==';'){
        return str.substr(0,str.size()-1);
    }
    return str;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    string a,b;
    map<string,string> mp;
    map<string,string> mp2;
    vector<string> v;
    map<string,pair<string,string>> ans;
    for(int i=1; i<=n; i++){
        cin>>a>>b;
        b=remove_semicolon(b);
        mp[a]=b;
    }
    for(int i=1; i<=m; i++){
        string a,b;
        cin>>a>>b;
        b=remove_semicolon(b);
        v.push_back(a);
        mp2[a]=b;
    }
    for (auto [key2, value2] : mp2) {
        for(auto [key,value] : mp){
            if(value2==value){
                //cout<<key2<<" "<<value2<<"; #"<<key<<'\n';
                ans[key2]={value2,key};
            }
        }
    }
    // for(auto [x,y] : mp){
    //     cout<<x<<" "<<y<<'\n';
    // }
    // for(auto [x,y] : mp2){
    //     cout<<x<<" "<<y<<'\n';
    // }
    for(auto x:v){
        if(ans.find(x)!=ans.end()){
           cout<<x<<" "<<ans[x].first<<"; #"<<ans[x].second<<'\n';
        }
    }
    return 0;
}