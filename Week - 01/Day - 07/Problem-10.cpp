#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    bool found;
    for(int i=n-1; i>=0; i--){
        for(int j=i-1; j>=0; j--){
            if(v[i]==v[j]){
                // cout<<"yes\n"
                found=true;
            }else{
                // cout<<"no\n";
                found=false;
            }
        }
        if(found){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }
    }
    // for(int i=0; i<n; i++){
    //     cout<<v[i]<<endl;
    // }
    // if(found){
    //     cout<<"yes\n";
    // }else{
    //     cout<<"no\n";
    // }
    return 0;
}