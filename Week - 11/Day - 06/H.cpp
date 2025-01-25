#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> odd, even;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even.push_back(a[i]);
        else
            odd.push_back(a[i]);
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    int odd_size = odd.size(), even_size = even.size();
    if (abs(odd_size - even_size) <= 1) {
        cout << 0 << endl;
        return 0;
    }

    ll sum = 0;
    if (odd_size > even_size) {
        int excess = odd_size - (even_size + 1);
        for (int i = 0; i < excess; i++) {
            sum += odd[i];
        }
    } 
    else {
        int excess = even_size - (odd_size + 1);
        for (int i = 0; i < excess; i++) {
            sum += even[i];
        }
    }

    cout << sum << endl;
    return 0;
}
