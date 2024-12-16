#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
using namespace std;
void solve(){
    int N;
    cin >> N;
    vector<int> myvalue(N);
    for(int i=0;i<N;i++) cin >> myvalue[i];
    
    bool flag = true;
 
    for(int i=0;i<N-1;i++)
    {
        if(myvalue[i] != myvalue[i+1])
        {
            flag = false;
            break;
        }
    }
    if(flag) cout << "0" << endl;
    else
    {
        int mn,mx;
        mn = myvalue[0],mx=0;
        for(int i=0;i<N;i++)
        {
            mx = (mx | myvalue[i]);
            mn = (mn & myvalue[i]);
        }
        cout << abs(mx-mn) << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}