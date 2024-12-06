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
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        bool check=false;
        int pos=0;
        for(int i=1; i<n; i++){
            if(arr[i-1]>arr[i]){
                check=true;
                pos=i;
                break;
            }
        }
        if(!check){
            yes;
        }else{
            vector<int> v1,v2;
            for(int i=0; i<pos; i++){
                v1.push_back(arr[i]);
            }
            for(int i=pos; i<n; i++){
                v2.push_back(arr[i]);
            }
            sort(arr.begin(),arr.end());
            for(int i=0; i<v1.size(); i++){
                v2.push_back(v1[i]);
            }
            bool flag=true;
            for(int i=0; i<n; i++){
                 if(arr[i] != v2[i]){
                    flag=false;
                    break;
                 }
            }
            if(flag) yes;
            else no;
        }
    }
    return 0;
} 