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
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        int key;
        cin>>key;
        int x= upper_bound(a.begin(),a.end(),key)-a.begin();
        cout<<x<<endl;
    }
    return 0;
}