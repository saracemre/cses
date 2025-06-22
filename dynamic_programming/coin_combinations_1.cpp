#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

#define int long long
const int MOD = 1e9+7;


void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    vector<int> v(x+1);
    v[0] = 1;
    for (int i = 1; i < x+1; i++) {
        for (int j = 0; j < n; j++) {
            if ((i - coins[j] == 0) || (i >= coins[j] && v[i - coins[j]] > 0)) {
                v[i] += v[i - coins[j]];
                v[i] %= MOD;
            }
        }
    }
    cout << v[x] << '\n';
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