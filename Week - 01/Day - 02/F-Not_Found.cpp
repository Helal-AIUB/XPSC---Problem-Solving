#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int cnt[26]={0};
    for(int i=0; i<s.size(); i++){
        char val=s[i];
        cnt[val-'a']++;
    }
    bool found=false;
    for(int i=0; i<26; i++){
        if(!cnt[i]){
            //cout<<char(i+'a')<<" - "<<cnt[i]<<"\n";
            found=false;
            cout<<char(i+'a');
            break;
        }else{
            found=true;
        }
    }
    if(found) cout<<"None"<<'\n';

    return 0;
}