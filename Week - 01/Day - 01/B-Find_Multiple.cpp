#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    int flag,ans=0;
    for(int i=a; i<=b; i++){
        if(i%c==0){
            flag=1;
            ans=i;
            break;
        }else{
            flag=0;
        }
    }
    if(flag) cout<<ans<<endl;
    else cout<<-1<<endl;
    
    return 0;
}
