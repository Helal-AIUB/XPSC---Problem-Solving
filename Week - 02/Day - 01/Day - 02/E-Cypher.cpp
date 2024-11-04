#include<bits/stdc++.h>
using namespace std;
int cyper2(char x){
    if(x=='D') return 1;
    else if(x=='U') return -1;
    return 0;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        vector<vector<char>> v(n);
        for(int i=0; i<n; i++){
            int b;
            cin>>b;
            for(int j=0; j<b; j++){
                char x;
                cin>>x;
                v[i].push_back(x);
                arr[i] +=cyper2(x);
                if(arr[i]>9){
                   arr[i]=0;
                }else if(arr[i]<0){
                    arr[i]=9;
                }
            }
            cout<<arr[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}