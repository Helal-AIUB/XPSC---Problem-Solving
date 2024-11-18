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
        string s;
        cin>>s;
        int cnt_0=0,cnt_1=0;
        for(int i=0; i<n-1; i++){
            if(s[i] != s[i+1]){
                if(s[i]=='0'){
                    cnt_0++;
                }else{
                    cnt_1++;
                }
            }
        }
        if(s[n-1]=='0'){
            cnt_0++;
        }else{
            cnt_1++;
        }
        cout<<min(cnt_0,cnt_1)<<'\n';
    }
    return 0;
}