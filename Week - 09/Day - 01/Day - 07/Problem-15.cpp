#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
using namespace std;
int LCM(int x,int y){
    return (x/__gcd(x,y))*y;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll l,r,ans1,ans2;
        cin>>l>>r;
        if(2*l <=r){
            cout<<l<<" "<<2*l<<endl;
        }else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
    return 0;
}