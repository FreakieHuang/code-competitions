#include "bits/stdc++.h"

using namespace std;

void solve() {
    int n; cin >> n;
    int l = -1;
    int res = 0;
    int cnt = 0;
    for (int i=0; i < n; ++i) {
        int aa; cin >> aa;
        if (l != -1 and aa == 0) {
            cnt++;
        }
        if (aa == 1) {
            l = i;
            if (l != -1) {
                res += cnt;
                cnt = 0;
            }
        }
        // cout << "l: " << l << " cnt " << cnt << " res " << res << endl;
    }
    cout << res << endl;
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}