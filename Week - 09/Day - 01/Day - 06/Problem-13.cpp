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
        ll a,b;
        cin>>a>>b;
        if(b==1){
            no;
        }else{
            ll x,y,z;
            x=a;
            y=a*b;
            z=a*(b+1);
            yes;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
    return 0;
}