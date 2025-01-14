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
    int n;
    cin>>n;
    vector<int> a(n),prefix(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    prefix[0]=a[0];
    for(int i=1; i<n; i++){
       prefix[i]=prefix[i-1]+a[i];
    }
    // for(auto val:prefix){
    //     cout<<val<<" ";
    // }
    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        int key;
        cin>>key;
        int index=lower_bound(prefix.begin(),prefix.end(),key)-prefix.begin();
        cout<<++index<<endl;
    }
    return 0;
}