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
    ll n,k;
    cin>>n>>k;
    vector<ll> divisor;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            divisor.push_back(i);
            if(n/i !=i){
                divisor.push_back(n/i);
            }
        }
    }
    sort(divisor.begin(),divisor.end());
    if(divisor.size()>=k){
        cout<<divisor[k-1];
    }else{
        cout<<-1;
    }
    return 0;
}