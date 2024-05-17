#include "bits/stdc++.h"

using namespace std;

void solve() {
    int n; cin >> n;
    vector<vector<int>> grid(3, vector<int>(n));
    for(int i=0; i < 3; ++i) {
        for(int j=0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve();
    }
}