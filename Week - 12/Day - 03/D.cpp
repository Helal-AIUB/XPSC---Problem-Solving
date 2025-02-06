#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s, m;
    cin >> n >> s >> m;
    
    vector<pair<int, int>> segs;
    segs.push_back({0, 0});
    segs.push_back({m, m});
    
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        segs.push_back({a, b});
    }
    
    sort(segs.begin(), segs.end());
    
    for (size_t i = 1; i < segs.size(); ++i) {
        if (segs[i].first - segs[i - 1].second >= s) {
            cout << "YES" << endl;
            return;
        }
    }
    
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
