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
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[a[i]]++;
        }
        int ans=0;
        for(auto [key,value] : mp){
            ans +=(value/3);
        }
        cout<<ans<<endl;
    }
    return 0;
}