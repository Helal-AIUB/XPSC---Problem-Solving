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
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll>a(n),prefix(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
            if(i==0){
                prefix[i]=a[i];
            }else{
                prefix[i]=prefix[i-1]+a[i];
            }
        }
        ll maxx=INT_MIN;
        vector<ll>mx(n);
        for(ll i=0; i<n; i++){
            maxx=max(maxx,a[i]);
            mx[i]=maxx;
        }
        while(q--){
            ll key;
            cin>>key;
            ll l=0,r=n-1,mid,ans=0;
            while(l<=r){
                mid=(l+r)/2;
                if(mx[mid]<=key){
                    ans=prefix[mid];
                    l=mid+1;
                }else{
                    r=mid-1;
                }
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}