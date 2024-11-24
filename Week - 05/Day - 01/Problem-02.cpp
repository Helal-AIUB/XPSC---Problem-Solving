#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,XOR=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            XOR=XOR^v[i];
        }
        // cout<<XOR<<'\n';
        int ans=XOR;
        for(int i=0; i<n; i++){
            int currXOR = XOR^v[i];
            ans=min(ans,currXOR);
        }
        cout<<ans<<'\n';
    }
    return 0;
}