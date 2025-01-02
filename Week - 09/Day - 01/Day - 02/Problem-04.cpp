#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
using namespace std;
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<1<<endl;
    }else if(n%2==0){
        cout<<2<<endl;
    }else{
        if(isPrime(n-2)){
            cout<<2<<endl;
        }else{
            cout<<3<<endl;
        }
    }
    return 0;
}