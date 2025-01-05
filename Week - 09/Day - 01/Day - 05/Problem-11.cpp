#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
using namespace std;
int isprime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return i;
        }
    }
    return n;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        if(l<=3 && r<=3){
            cout<<-1<<endl;
        }else if(l<r){
            if(r%2==0){
                cout<<r/2<<" "<<r/2<<endl;
            }else{
                r--;
                cout<<r/2<<" "<<r/2<<endl;
            }
        }else if(l==r){
            if(isprime(r)==r){
                cout<<-1<<endl;
            }else{
                cout<<isprime(r)<<" "<<r-isprime(r)<<endl;
            }
        }
    }
    return 0;
}