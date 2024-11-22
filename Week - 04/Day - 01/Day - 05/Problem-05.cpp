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
    int l=0;
    long long int cnt=0;
    unordered_map<int,int>mp;
    for(int r=0; r<n; r++){
        mp[v[r]]++;
        while (mp.size() > k) {
           mp[v[l]]--;
            if (mp[v[l]] == 0) {
                mp.erase(v[l]);
            }
            l++;
        }
        cnt +=r-l+1;
    }
    cout<<cnt<<'\n';
    return 0;
}