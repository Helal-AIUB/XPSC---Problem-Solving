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
        string a,b;
        cin>>a>>b;
        bool same;
        for(int i=0; i<n; i++){
            if(a[i]==b[i] || (a[i]=='G' && b[i]=='B') ||(a[i]=='B' && b[i]=='G')){
                  same=true;
            }else{
                same=false;
                break;
            }
        }
        if(same)  cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}