#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        //int XOR=0;
        int flag=-1;
        for(int x=0; x<256; x++){
            int XOR=0;
            for(int j=0; j<a.size(); j++){
                int currXOR=0;
                currXOR=x^a[j];
                XOR=XOR^currXOR;
            }
            if(XOR==0){
                flag=x;
                break;
            }
        }
         cout<<flag<<'\n';
        //else cout<<-1<<'\n';
    }
    return 0;
}