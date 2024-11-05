#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    multiset<int> ml;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        ml.insert(x);
    }
    int cnt=0,start=1;
    while(!ml.empty()){
        auto LB = ml.lower_bound(start);
        if(LB != ml.end()){
            cnt++;
            ml.erase(LB);
        }else{
            break;
        }
        start++;
    }
    cout<<cnt;
    return 0;
}