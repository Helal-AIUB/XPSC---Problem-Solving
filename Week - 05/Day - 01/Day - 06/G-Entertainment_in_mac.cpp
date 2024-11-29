#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string word=s;
    reverse(word.begin(),word.end());
    if(s<=word){
         cout<<s<<'\n';
    }else{
        cout<<word<<s<<'\n';
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