#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,set<int>>mp;
        for(int i=1; i<=n; i++){
            int x;
            cin>>x;
            mp[x].insert(i);
        }
        for(int i=1; i<=k; i++){
            int l,r;
            cin>>l>>r;
            if(mp.find(l)==mp.end() || mp.find(r)==mp.end()){
                cout<<"NO"<<'\n';
            }else{
                int left_st,right_st;
                left_st = *mp[l].begin();
                right_st = *mp[r].rbegin();
                if(left_st<right_st){
                    cout<<"YES"<<'\n';
                }else{
                    cout<<"NO"<<'\n';
                }
            }
        }
    }
    return 0;
}