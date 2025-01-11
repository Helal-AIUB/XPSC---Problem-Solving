#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,q;        //O(N * log(n))
        cin>>n>>q;
        vector<int> a(n),prefix(n+1);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());
        for(int i=1; i<=n; i++){
            prefix[i]=prefix[i-1]+a[i-1];
        }
        for(int i=0; i<q; i++){
            int k;
            cin>>k;
            auto it=lower_bound(prefix.begin(),prefix.end(),k);
            if(it!=prefix.end()){
                cout<<it-prefix.begin()<<endl;
            }else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}