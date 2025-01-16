#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (str[i] == '.') {
                int cnt = 0;
                while(i < n && str[i] == '.') {
                    cnt++;
                    i++;
                }
                if (cnt > 2) {
                    ans = 2;
                    break;
                } else {
                    ans += cnt;
                }
                i--;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}