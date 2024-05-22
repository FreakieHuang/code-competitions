#include "bits/stdc++.h"

using namespace std;

void solve() {
    int x; cin >> x;

    int mod = x % 10;
    int digits = 1;
    while (x / 10 > 0) {
        digits++;
        x /= 10;
    }
    int res = (mod - 1) * 10;
    if (digits == 1)
        res += 1;
    if (digits == 2)
        res += 3;
    if (digits == 3)
        res += 6;
    if (digits == 4)
        res += 10;
    cout << res << endl;
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}