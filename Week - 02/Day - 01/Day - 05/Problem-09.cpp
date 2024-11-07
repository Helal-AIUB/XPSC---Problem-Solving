#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        multiset<ll,greater<ll>>ml;
        ll ans=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i] != 0){
                ml.insert(v[i]);
            }else{
                if(!ml.empty()){
                    ans +=*ml.begin();
                    ml.erase(ml.begin());
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}