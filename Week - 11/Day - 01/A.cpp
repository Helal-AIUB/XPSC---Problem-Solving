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
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int pos=0;
        bool check=true;
        for(int i=1; i<n; i++){
             if(a[i-1] > a[i]){
                pos=i;
                check=false;
                break;
             }
        }
        if(check){
            yes;
        }else{
            vector<int> b,c;
            for(int i=0; i<pos; i++){
                b.push_back(a[i]);
            }
            for(int i=pos; i<n; i++){
                c.push_back(a[i]);
            }
            sort(a.begin(),a.end());
            for(int i=0; i<b.size(); i++){
                c.push_back(b[i]);
            }
            bool flag=true;
            for(int i=0; i<n; i++){
                if(a[i] != c[i]){
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