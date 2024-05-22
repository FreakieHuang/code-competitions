#include "bits/stdc++.h"

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> an(n);
    int max_ind = 0;
    for (int i=0; i < n; ++i) {
        int aa; cin >> aa;
        an[i] = aa;
        if (an[i] > an[max_ind]) {
            max_ind = i;
        }
    }
    for (int i=0; i < n; ++i) {
        if (an[i] == an[max_ind]) {
            if ((i > 0) && (an[i] > an[i - 1])) {
                // or ((i < n - 1) && (an[i] > an[i + 1])) {
                cout << i + 1 << endl;
                return;
            }
            if ((i < n - 1) && (an[i] > an[i + 1])) {
                cout << i + 1 << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}