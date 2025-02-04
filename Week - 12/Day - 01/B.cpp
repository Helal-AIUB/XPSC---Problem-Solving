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
        int max1=INT_MIN;
        int min1=INT_MAX;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(max1<a[i]){
                max1=a[i];
            }
            if(min1>a[i]){
                min1=a[i];
            }
        }
        cout<<max1-min1<<endl;
    }
    return 0;
}