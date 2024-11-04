#include<bits/stdc++.h>
using namespace std;
bool spell_check(string s){
    string original="Timur";
    if(s.length()!=original.length()){
        return false;
    }
    sort(original.begin(),original.end());
    sort(s.begin(),s.end());
    return original==s;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag=false;
        if(spell_check(s)) cout<<"yes"<<'\n';
        else cout<<"no"<<'\n';
    }
    return 0;
}