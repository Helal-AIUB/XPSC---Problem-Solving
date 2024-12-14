#include <bits/stdc++.h>
using namespace std;

long long bit_floor(long long x) {
    return x == 0 ? 0 : 1LL << (63 - __builtin_clzll(x));
}

int bit_width(long long x) {
    return x == 0 ? 0 : 64 - __builtin_clzll(x);
}

int popcount(long long x) {
    return __builtin_popcountll(x);
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        x = (x ^ bit_floor(x));
        int zeros = (bit_width(x) - popcount(x));
        cout << (1 << zeros) << endl;
    }
    return 0;
}





// #include <bits/stdc++.h>
// #include <bit>
// using namespace std;

// int main() {
// 	long long t;
// 	cin>>t;
// 	while(t--){
// 	    long long x;
// 	    cin>>x;
// 	    x=(x^__bit_floor(x));
// 	    int zeros=(__bit_width(x)-__popcount(x));
// 	    cout<<(1<<zeros)<<endl;    
// 	}

// }