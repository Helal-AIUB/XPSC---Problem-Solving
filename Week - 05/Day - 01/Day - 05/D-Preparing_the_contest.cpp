#include<bits/stdc++.h>
using namespace std;
void solved(){
    int n,k;
    cin>>n>>k;
    for(int i=1; i<=k; i++){
        cout<<i<<" ";
    }
    for(int i=n; i>k; i--){
        cout<<i<<" ";
    }
    cout<<'\n';
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