#include "bits/stdc++.h"

using namespace std;

void solve() {
    int res = 0;
    int n; cin >> n;
    queue<int> q;
    vector<int> bn(n);
    for (int i=0; i < n; ++i) {
        int an; cin >> an;
        q.push(an);
    }
    for (int i=0; i < n; ++i) {
        int bb; cin >> bb;
        bn[i] = bb;
    }
    int j=0;
    while (!q.empty() and j < n) {
        int an = q.front();
        while (an > bn[j] and j < n) {
            ++j;
            ++res;
            // cout << "an: " << an << " j " << j << " " << bn[j] << endl;
        }
        // cout << "an: " << an << " j " << j << endl;
        q.pop();
        ++j;
    }
    cout << res << '\n';
}

int main() {
    int t; cin >> t;
    while (t--)
        solve();
}