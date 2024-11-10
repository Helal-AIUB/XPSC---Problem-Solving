#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    int l=0,r=0,cnt=0;
    vector<int> v;
    while(r<m){
        if(l<n && a[l] < b[r]){
            cnt++,l++;
        }else{
            r++;
            v.push_back(cnt);
            //cout<<cnt<<" ";
        }
    }
    for(auto val:v){
        cout<<val<<" ";
    }
    return 0;
}