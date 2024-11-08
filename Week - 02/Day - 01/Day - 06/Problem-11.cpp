#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
void solved(){
    int n,m,q;
    cin>>n>>m>>q;
    vector<int>v(m);
    for(int i=0; i<m; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    while(q--){
        int x;
        cin>>x;
        int k=upper_bound(v.begin(),v.end(),x)-v.begin();
        if(k==0){
            cout<<v[0]-1<<endl;
        }else if(k==m){
            cout<<n-v[m-1]<<endl;
        }else{
            cout<<(v[k]-v[k-1])/2<<endl;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solved();
    }
    return 0;
}