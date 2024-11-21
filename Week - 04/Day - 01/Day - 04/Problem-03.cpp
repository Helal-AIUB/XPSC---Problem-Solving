#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,s;
    cin>>n>>s;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int l=0,r=0;
    long long cnt=0;
    long long sum=0;
    while(r<n){
        sum +=v[r];
        if(sum<=s){
            cnt++;
        }else{
            sum -=v[l];
            l++;
        }
        r++;
    }
    cout<<cnt<<'\n';
    return 0;
}