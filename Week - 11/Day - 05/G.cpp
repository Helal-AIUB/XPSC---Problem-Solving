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
    int t;
    cin>>t;
    while(t--){
        int n,k,d;
        cin>>n>>k>>d;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        map<int, int> m_map ;
	    int mn = 0 , cnt= 0;
	    for(int i = 0 ; i < d ; i++ ){
		    if(m_map[a[i]] == 0 ){
			    cnt ++;
		    }
		    m_map[a[i]] ++ ;
	    }
	    mn = cnt ;
	    for(int i = d ; i < n ; i ++){
		    m_map[a[i-d]] --;
		    if(m_map[a[i-d]] == 0 ) cnt --;
		    if(m_map[a[i]] == 0 ) cnt ++;
		    m_map[ a[i] ] ++;
		    mn = min(mn, cnt ) ;
	    }
        cout<<mn<<endl;
    }
    return 0;
}