#include "bits/stdc++.h"

using namespace std;

long long C(int n, int m) {
    if (m == 0 or m == n) 
        return 1;
    return C(n - 1, m - 1) + C(n-1, m);
}

int main() {
    int n; cin >> n;
    cout << C(n, n / 2) / 2 << endl;
}