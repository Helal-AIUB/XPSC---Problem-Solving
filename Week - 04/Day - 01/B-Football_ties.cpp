#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x<3){
            cout<<x<<'\n';
        }else if(x%3==0){
            cout<<0<<'\n';
        }else{
            int z=x/3;
            int ans=z*3;
            cout<<x-ans<<'\n';
        }
    }
    return 0;
}