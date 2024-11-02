#include<bits/stdc++.h>
using namespace std;    //System Registration
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<string,int>mp;
    for(int i=1; i<=n; i++){
        string name;
        cin>>name;
        if(mp.find(name)==mp.end()){
            mp[name] = 0;
            cout<<"OK"<<'\n';
        }else{
            mp[name]++;
            cout<<name+to_string(mp[name])<<'\n';
        }
    }

    return 0;
}