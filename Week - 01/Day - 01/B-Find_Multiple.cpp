#include<iostream>
using namespace std;
int find_multiple(int a,int b, int c,int n){
    int res=c*n;
    if(res>b) return -1;
    if(res>=a && res<=b){
        return res;
    }else{
        find_multiple(a,b,c,n+1);
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<find_multiple(a,b,c,2);
    
    return 0;
}