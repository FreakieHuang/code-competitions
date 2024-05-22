#include "bits/stdc++.h"

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> an(n);
    for (auto &it: an) cin >> it;
    int ind = -1; 
    vector<pair<int, int>> res;
    for (int i = 1; i < n; ++i) {
        if (an[i] != an[0]) {
            ind = i;
            res.push_back({1, i + 1});
        }
    }
    if (ind == -1) {
        cout << "NO" << endl;
        return;
    }
    for (int i = 1; i < n; ++i) {
        if (an[i] == an[0]) {
            res.push_back({ind + 1, i + 1});
        }
    }
    cout << "YES" << endl;
    for (auto [x, y]: res) 
        cout << x << " " << y << endl;
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}