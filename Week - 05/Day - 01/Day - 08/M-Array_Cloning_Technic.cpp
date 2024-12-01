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
        map<int,int> mp;
        for(int i=0;i<n;i++)
        { 
            int x;
            cin>>x;
            mp[x]++;
        }
        int mx=0;
        for(auto [x,y]:mp)
        {
            mx=max(mx,y);
        }
        int op=0;
        while(mx<n)
        {
            int add=min(n-mx,mx);
            op +=1+add;
            mx +=add;
        }
        cout<<op<<endl;
    }
    return 0;
}