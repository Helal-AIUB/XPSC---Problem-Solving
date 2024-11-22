#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int l=0,r=0;
    long long sum=0,cnt=0;
    while(r<n){
        sum +=v[r];
        if(sum>=k){
            while(sum >= k){
                cnt +=n-r;
                sum -=v[l];
                l++;
            }
        }
        r++;
    }
    cout<<cnt<<'\n';
    return 0;
}