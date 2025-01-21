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
        int n,a,b;
        cin>>n>>a>>b;
        //n=3,a=5,b=9;
        ll ans=0;
        if(n%2==0){
            if((2*a)>b){
                 ans +=(n/2)*b;
            }else{
                ans +=n*a;
            }
        }else{
            if((2*a)>b){
                 ans +=(((n-1)/2)*b)+a;
            }else{
                ans +=(n)*a;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}