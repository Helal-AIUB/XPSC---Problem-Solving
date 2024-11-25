#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x1= (a^0) + (b^0);
        int x2= (a^a) + (b^a);
        int x3= (a^b) + (b^b);
        cout<<min({x1,x2,x3})<<'\n';
    }
    return 0;
}