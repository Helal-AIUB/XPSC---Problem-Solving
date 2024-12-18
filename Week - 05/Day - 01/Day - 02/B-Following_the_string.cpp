#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_map<char, int> hMap;
    int curr = 97;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cout << char(curr);
            hMap[curr]++;
            curr++;
        }
        else
        {
            for (auto itr : hMap)
            {
                if (itr.second == arr[i])
                {
                    cout << char(itr.first);
                    hMap[itr.first]++;
                    break;
                }
            }
        }
    }
    cout << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }

}