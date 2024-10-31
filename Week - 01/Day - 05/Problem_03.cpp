#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<pair<string,string>,bool> mp;
    while(n--){
        string s1,s2;
        cin>>s1,s2;
        mp[{s1,s2}]=true;
    }
    // for(auto val : mp){
    //     // pair<string,string> key = val.first;
    //     // bool value = val.second;
    //     // cout<<key.first<<" "<<key.second<<" "<<value<<endl;
    //     cout<<val.first.first<<" "<<val.first.second<<" "<<val.second<<endl;
    // }
    cout<<mp.size();
    return 0;
}