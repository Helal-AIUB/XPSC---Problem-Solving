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
    ll l,r;
    cin>>l>>r;
    cout<<"YES"<<endl;
    for(ll i=l; i<=r; i +=2){
           cout<<i<<" "<<i+1<<endl;
    }
    return 0;
}