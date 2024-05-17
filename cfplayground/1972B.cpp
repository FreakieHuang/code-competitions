#include "bits/stdc++.h"

using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    for (int i=0; i < n; ++i) {
        if (s[i] == 'U') {
            cnt++;
        }
    }
    if (cnt % 2 == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}


int main() {
    int T; cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}