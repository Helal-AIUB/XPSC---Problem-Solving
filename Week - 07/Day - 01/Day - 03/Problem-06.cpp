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
    int n,m,k;
    cin>>n>>m>>k;
    m++;
    vector<int> a(m);
    for(int i=0; i<m; i++){
        cin>>a[i];
    }
    int cnt = 0;
    for(int i=0;i<m-1;i++)
    {
        int dif=0;
        int x= a[i] ^ a[m-1];
        for(int k=20;k>=0;k--)
        {
            if((x>>k)&1)
            {
                dif++;
            }
            
        }
        if(dif <= k) cnt++;
    }
    cout << cnt << endl;
    return 0;
}