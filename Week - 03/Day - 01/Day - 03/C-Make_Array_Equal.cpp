#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(n==1){
            cout<<"YES"<<'\n';
        }else if(n==2){
            if(v[0] == v[1] || v[0]==0 || v[1]==0){
                cout<<"YES"<<'\n';
            }else{
                cout<<"NO"<<'\n';
            }
        }else{
            bool flag=true;
            for(int i=0; i<n-1; i++){
                if(v[i]==0){
                    continue;
                }else if(v[i] != v[i+1]){
                    flag=false;
                    break;
                }
            }
            if(flag) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
    }
    return 0;
}