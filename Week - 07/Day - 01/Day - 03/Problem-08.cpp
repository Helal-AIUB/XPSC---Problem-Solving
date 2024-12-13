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
    string n;
    cin>>n;
    int index=0, len=n.length();
    for(int i=1; i<len; i++){
        index += pow(2,i);
    }
    for(int i=0; i<len; i++){
        if(n[i]=='7'){
            index +=pow(2,len-i-1);
        }
    }
    index +=1;
    cout<<index<<endl;
    return 0;
}