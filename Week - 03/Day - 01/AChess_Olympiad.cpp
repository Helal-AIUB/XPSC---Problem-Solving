#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,z;
    cin>>x>>y>>z;
    int cnt=x+y+z;
    if(x>z){
        cout<<"YES"<<'\n';
    }else if(cnt==4 && x<=z){
        cout<<"NO"<<'\n';
    }else if(z<4){
        int ans;
        ans=x+(4-cnt);
        if(ans>z){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}