#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>

using namespace std;

#define int long long
const int MOD = 1e9+7;

void solve() {
    int n;
    cin >> n;
    if (n == 2) {
        int x;
        cin >> x;
        (x == 2) ? cout << 1 << '\n' : cout << 2 << '\n';
        return;
    }
    vector<int> v(n-1);
    for (int i = 0; i < n-1; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n-2; i++) {
        if (v[i+1] - v[i] != 1) {
            cout << v[i] + 1 << '\n';
            return;
        }
    }
    cout << n << '\n';
}

signed main () {
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}