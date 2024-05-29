#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    if (n >= m) {
        if ((n - m) % 2 == 0) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}