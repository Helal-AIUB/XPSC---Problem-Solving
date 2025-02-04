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
        vector<int> a(n);
        int cnt=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]%2!=0){
                cnt++;
            }
        }
        if(cnt%2==0){
            yes;
        }else{
            no;
        }
    }
    return 0;
}