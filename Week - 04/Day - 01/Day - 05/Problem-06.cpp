#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,k;
    cin>>n>>k;
    vector<long long int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int l=0,r=0;
    long long int cnt=0;
    multiset<long long int> ml;
    while(r<n){
         ml.insert(v[r]);
         long long mn=*ml.begin(), mx=*ml.rbegin();
         if(mx-mn <= k){
            cnt +=r-l+1;
         }else{
            while(l<=r){
                mn=*ml.begin(), mx=*ml.rbegin();
                if(mx-mn <= k) break;
                ml.erase(ml.find(v[l]));
                l++;
            }
            mn=*ml.begin(), mx=*ml.rbegin();
            if(mx-mn <= k){
                cnt +=r-l+1;
            }
         }
         r++;
    }
    cout<<cnt<<'\n';
    return 0;
}