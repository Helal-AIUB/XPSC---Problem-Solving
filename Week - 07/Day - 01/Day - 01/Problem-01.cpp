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
    bool flag=false;
    for(int mask=0; mask<(1<<n); mask++){
        int sum = 0;
        for(int k=0; k<n; k++){
            if((mask>>k)&1){
                sum +=a[k];
            }else{
                sum -=a[k];
            }
        }
        if(sum % 360 == 0){
            flag=true;
            break;
        }
    }
    if(flag) yes;
    else no;
    return 0;
}