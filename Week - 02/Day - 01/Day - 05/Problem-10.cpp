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
        vector<pair<int,int>>v;
        multiset<int>ml;
        for(int i=1; i<=n; i++){
            ml.insert(i);
        }
        for(int i=0; i<n-1; i++){
            auto it1 = ml.end();
            it1--;
            int a=*it1;
            ml.erase(it1);
            auto it = ml.end();
            it--;
            int b = *it;
            ml.erase(it);
            ml.insert((a+b+1)/2);
            v.push_back({a,b});
        }
        cout<<*ml.begin()<<'\n';
        for(int i=0; i<v.size(); i++){
            cout<<v[i].first<<" "<<v[i].second<<'\n';
        }
    }
    return 0;
}