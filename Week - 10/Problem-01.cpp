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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    vector<int> q(k);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<k; i++){
        int key;
        cin>>key;
        int l=0,r=n-1,mid;
        bool found=false;
        while(l<=r){
            mid=(l+r)/2;
            if(v[mid]==key){
                found=true;
                break;
            }else if(key<v[mid]){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        if(found) yes;
        else no;
    }
    return 0;
}