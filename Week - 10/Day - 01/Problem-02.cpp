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
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<q; i++){
        int key;
        cin>>key;
        int l=0,r=n-1,mid,ans=-1;
        while(l<=r){
            mid=(l+r)/2;
            if(key>=a[mid]){
                ans=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        cout<<(ans+1)<<endl;
    }
    return 0;
}