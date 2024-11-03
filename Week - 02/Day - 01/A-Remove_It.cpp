#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,x;
    cin>>n>>x;
    long long int arr[n];
    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i] != x){
            v.push_back(arr[i]);
        }
    }
    for(auto val:v){
        cout<<val<<" ";
    }
    return 0;
}