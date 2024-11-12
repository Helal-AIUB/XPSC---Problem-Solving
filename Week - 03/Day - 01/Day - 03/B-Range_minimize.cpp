/*      Observation
There can be total 3 possibilities - 
1)We've deleted the first and the second minimum elemets.
2)We've deleted the first maximum and the second maximum elements from the array. 
3)We've deleted the first maximum and the first minimum element.
*/

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
        deque<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int possible1=v[n-1] - v[2];
        int possible2=v[n-3] - v[0];
        int possible3=v[n-2] - v[1];
        int minimum=min(possible1,possible2);
        int final=min(minimum,possible3);
        cout<<final<<'\n';
    }
    return 0;
}