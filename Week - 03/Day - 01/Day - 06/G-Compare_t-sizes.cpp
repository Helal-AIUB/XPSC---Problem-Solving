#include<bits/stdc++.h>
using namespace std;
void solve(){
    string a,b;
    cin>>a>>b;
    char lca=a.back();
    char lcb=b.back();
    int countA=count(a.begin(),a.end(),'X');
    int countB=count(b.begin(),b.end(),'X');
    if(lca==lcb){
        if (lca == 'S') 
        { 
            if (countA < countB) cout << ">" << endl;
            else if (countA > countB) cout << "<" << endl;
            else cout << "=" << endl;
        } 
        else if (lca == 'L') 
        { 
            if (countA < countB) cout << "<" << endl;
            else if (countA > countB) cout << ">" << endl;
            else cout << "=" << endl;
        } 
        else 
        {
            cout << "=" << endl;
        }
    }else{
        if(lca=='S') cout<<"<"<<'\n';
        else if(lca=='M' && lcb=='L') cout<<"<"<<'\n';
        else cout<<">"<<'\n';
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}