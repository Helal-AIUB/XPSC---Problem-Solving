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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int plus=0,minus=0;
        for(int i=0; i<n; i++){
            if(s[i]== '+') plus++;
            else minus++;
        }
        cout<<abs(plus-minus)<<endl;
    }
    return 0;
}