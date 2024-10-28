#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long int arr[n],sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum +=arr[i];
    }
    sort(arr,arr+n,greater<int>());
    if(sum%2==0){
        cout<<sum;
    }else{
        for(int i=n-1; i>=0; i--){
            if(arr[i]%2 !=0){
                sum = sum-arr[i];
            }
            if(sum%2==0){
                cout<<sum;
                break;
            }
        }
    }
    return 0;
}
