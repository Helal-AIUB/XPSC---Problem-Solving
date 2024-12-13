#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
using namespace std;
int bit_floor(int x) {
    return 1 << (31 - __builtin_clz(x));
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<(x^bit_floor(x))<<" "<<bit_floor(x)<<endl;
    }
    return 0;
}