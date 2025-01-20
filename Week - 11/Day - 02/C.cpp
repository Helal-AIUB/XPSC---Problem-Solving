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
        int n,mid;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if(n%2!=0){
           mid=(n/2)+1;
        }else{
            mid=n/2;
        }
        mid--;
        int res=count(a.begin()+mid,a.end(),a[mid]);
        // for(int i=mid-1; i<n; i++){
        //     if(a[i]==a[i+1]){
        //         count++;
        //     }else{
        //         break;
        //     }
        // }
        cout<<res<<endl;
        //cout<<mid<<endl;
    }
    return 0;
}