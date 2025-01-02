#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
using namespace std;
ll LCM(ll a,ll b){
    return (a/__gcd(a,b))*b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll x=(n/a)*p, y=(n/b)*q, overlap=(n/LCM(a,b));
    ll ans=((x+y)-(overlap*(p+q)))+(overlap*max(p,q));
    cout<<ans<<endl;
    
    // ll cnt1=0,cnt2=0,cnt3=0;
    // for(int i=1; i<=n; i++){
    //     if(i%a==0){
    //         cnt1++;
    //     }
    //     if(i%b==0){
    //         cnt2++;
    //     }
    //     if((i%a==0) && (i%b==0)){
    //         cnt3++;
    //     }
    // }
    // cnt1=cnt1-cnt3;
    // cout<<(cnt1*p)+(cnt2*q);
    return 0;
}
